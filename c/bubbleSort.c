#include <stdio.h>
#include <conio.h>

int main()
{
   int Arr[20],i,j,n,temp;
   printf("Enter no. of elements in array to be sorted:");
   scanf("%d",&n);
   printf("\nEnter %d elements:\n",n);
   for(i=0;i<n;i++)
   {
      scanf("\t%d",&Arr[i]);
   }
   
   //Bubble sorting
   int flag=1;int count=0;
   if(flag==1)
   {
   for(i=0;i<n-1;i++)
   {
     for(j=0;j<n-1-i;j++)
     {
        if(Arr[j]>Arr[j+1])
         {
         	
          temp = Arr[j];
          Arr[j]=Arr[j+1];
          Arr[j+1]=temp;
          flag=1;
          count++;
         }
         else
         flag=0;
     }
   }
   }
   printf("\nNo. of swapping=%d",count);
   printf("\nSorted elements:\n");
   for(i=0;i<n;i++)
   {
      printf("\t%d",Arr[i]);
   }
   return 0;
}
