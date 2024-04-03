#include <stdio.h>
void Quicksort(int [], int, int);
int partition(int [],int,int);
void swap(int*,int*);
int count=0;
int main()
{
  int n,i;
  printf("Enter size of array:");
  scanf("%d",&n);
  int A[n];
  printf("\nEnter elements of array:\n");
  for(i=0;i<n;i++)
     scanf("%d",&A[i]);
  
  Quicksort(A,0,n-1);
  
  for(i=0;i<n;i++)
      printf("%d\t",A[i]);
  
  printf("count=%d",count);
  return 0;
}

void Quicksort(int A[],int p,int r)
{

  if(p<r)
  {
     int q=partition(A,p,r);
     
     Quicksort(A,p,q-1);
     Quicksort(A, q+1, r);
     
  }
}

int partition(int A[],int p,int r)
{
   int x=A[r];
   int i=p-1,j=p;
   for(j;j<r;j++)
   {
     if(A[j]<x)
     {
     	 i++;
     	 printf("\ni=%d j=%d",i,j);
     	 if(i!=j)
       {swap(&A[i],&A[j]);
         count++;	}
     }
   }
   if((i+1)!=r)
    {
    	 swap(&A[i+1],&A[r]);
       count++;
     }
  return (i+1); 
}

void swap(int* a,int* b)
{
   int temp= *a;
   *a=*b;
   *b=temp;
}

