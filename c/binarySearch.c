#include <stdio.h>
#include <conio.h>
int binarySearch(int [],int,int,int);
int main()
{
 signed int Arr[20],n,i,key;
  printf("Enter size of array:");
   scanf("%d",&n);
   printf("\nEnter %d elements:\n",n);
   for(i=0;i<n;i++)
      scanf("%d\t",&Arr[i]);
   
   printf("\nEnter the element to be found:");
   scanf("%d",&key);
   
   int found=binarySearch(Arr, 0,n-1, key);
   if(found>-1)
      printf("Element %d is present in the list at positon-%d",key,found);
   else
      printf("Element %d is not present in the list",key);
   return 0;   
}

int binarySearch(int Arr[],int low,int high,int key)
{  
	 int found;
   if(low==high)
   {
      if(Arr[low]==key)
         return low+1;
      else
         return -1;
   }
   else
   {
      int mid=(low+high)/2;
      if(Arr[mid]==key)
         return mid+1;
      else if(Arr[mid]>key)
       {  found= binarySearch(Arr, low, mid-1, key);}
      else
        { found= binarySearch(Arr,mid+1, high, key);}
   }
   return found;
}
