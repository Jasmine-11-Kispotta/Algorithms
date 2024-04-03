#include <stdio.h>
void Quicksort(int [], int, int);
int partition(int [],int,int);
void swap(int*,int*);

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
  printf("\n");
  for(i=0;i<n;i++)
      printf("%d\t",A[i]);
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
	int x=A[p];
	int i,j=r;
	 
	 for(i=p;i<=j;i++,j--)
	 {
	   while(A[i]<=x && i<=r)
	   {
	   	printf("\ni=%d",i);
	     i++;
	   }
	   while(A[j]>x && j>=p )
	   {
	   	printf("\nj=%d",j);
	     j--;
	   }
	   if(i<j)
	     swap(&A[i],&A[j]);
	   else
	   {
	    swap(&A[j],&A[p]);
      return j;
	   }
	}
}

void swap(int* a,int* b)
{
   int temp= *a;
   *a=*b;
   *b=temp;
}
