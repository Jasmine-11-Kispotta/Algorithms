#include <stdio.h>
#include <conio.h>

int linearSearch(int [],int,int);
int main()
{
   int Arr[20],n,i,key;
   printf("Enter size of array:");
   scanf("%d",&n);
   printf("\nEnter %d elements:\n",n);
   for(i=0;i<n;i++)
      scanf("%d\t",&Arr[i]);
   
   printf("\nEnter the element to be found:");
   scanf("%d",&key);
   
   int found=linearSearch(Arr, n, key);
   if(found>-1)
      printf("Element %d is present in the list at positon-%d",key,found);
   else
      printf("Element %d is not present in the list",key);
   return 0;   
}

int linearSearch(int Arr[],int n,int key)
{
   int i;
   for(i=0;i<n;i++)
    {
       if(Arr[i]==key)
          return i+1;
    }
    return -1;
}
