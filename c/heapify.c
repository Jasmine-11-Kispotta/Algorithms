#include <stdio.h>
#include <conio.h>
void heapify(int [],int,int);
void maxHeap();
int main(){
int Arr[20],i,n;
	printf("Enter no. of elements to heapify:");
	scanf("%d",&n);
	printf("\nEnter elements:\n");
	for(i=0;i<n;i++)
	   scanf("\n%d",&Arr[i]);
  
  //BuildHeap
 for(i=(n-1)/2;i>=0;i--)
 {
    heapify(Arr,i,n);
 }
  //Printing elements
  printf("\nMax heap of the given elements:\n");
  for(i=0;i<n;i++)
     printf("\t%d",Arr[i]);
 
 
 //Insertion of new element
 int j=1;
 while(j==1)
 {
 printf("\nDo you want to insert element in the heap(yes-1, no-0):");
 scanf("%d",&j);
    if(j==1)
    {
      printf("\nEnter the element to be inserted:");
      scanf("%d",&Arr[i]);
    
    	maxHeap(i,Arr);
    	n++;
    	i++;
     }
  }
    //Printing new heap after insertion
   for(i=0;i<n;i++)
     printf("\t%d",Arr[i]);
 return 0;
	
}

//For heapifying
void heapify(int Arr[],int i,int n)
{
   int lc=2*i+1, rc=2*i+2, max;
   if(lc<n && Arr[lc]>Arr[i])
      max=lc;
   else
      max=i;
   if(rc<n && Arr[rc]>Arr[max])
      max=rc;
   
   if(max!=i)
   {
      int temp;
      temp=Arr[i];
      Arr[i]=Arr[max];
      Arr[max]=temp;
      
   	  heapify(Arr, max,n);
   }
}

//For heapifying after insertion of new elements
void maxHeap(int i, int Arr[])
{
	if(i>0)
	{
   int parent=(i-1)/2, temp;
   if(Arr[parent]<Arr[i])
     { 
     	 temp=Arr[i];
     	 Arr[i]=Arr[parent];
     	 Arr[parent]=temp;
     	 
     	 maxHeap(parent,Arr);  
     }
  }
	
}
