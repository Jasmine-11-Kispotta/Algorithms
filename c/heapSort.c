#include <stdio.h>
#include <conio.h>
void heapify(int [],int,int,int *);
void swap(int *,int *);
int main()
{
   int Arr[20],i,n,m,count=0;
	printf("Enter no. of elements to heapify:");
	scanf("%d",&n);
	m=n;
	printf("\nEnter elements:\n");
	for(i=0;i<n;i++)
	   scanf("\n%d",&Arr[i]);
  
  //BuildHeap
 for(i=(n-1)/2;i>=0;i--)
 {
    heapify(Arr,i,n,&count);
 }
  //Printing elements
  printf("\nMax heap of the given elements:\n");
  for(i=0;i<n;i++)
     printf("\t%d",Arr[i]);
   
  //HeapSorting
  n--;
  for(i=n;i>0;i--)
  {
     swap(&Arr[0],&Arr[i]);
     heapify(Arr,0,n--,&count);
  }
  
  
  printf("\nPrinting Sorted array:\n");
  for(i=0;i<m;i++)
  {
    printf("\t%d",Arr[i]);
  }
  
  printf("\ncount=%d",count);
   return 0;
}

//Heapifying
void heapify(int Arr[],int i,int n,int *count)
{
   int lc=2*i+1, rc=2*i+2, max;
   if(i==0)
       {*count=*count+1;}
   if(lc<n && Arr[lc]>Arr[i])
      max=lc;
   else
      max=i;
   if(rc<n && Arr[rc]>Arr[max])
      max=rc;
   
   
   if(max!=i)
   {
   	  swap(&Arr[i],&Arr[max]);
      
   	  heapify(Arr, max,n,&count);
   }
   
}

/*swapping*/
void swap(int *a,int *b)
{
  int temp;
  temp = *a;
  *a=*b;
  *b=temp;
}

