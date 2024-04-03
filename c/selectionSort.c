#include <stdio.h>
#include <conio.h>
int main()
{
 int i,j,Arr[20],n,min,count=0;
 printf("Enter no. of elements to be sorted:");
 scanf("%d",&n);
 printf("\nEnter %d elements:\n",n);
 for(i=0;i<n;i++)
   scanf("\t%d",&Arr[i]);
 
 //Selection sorting
 for(i=0;i<n;i++)
 {
   min=i;
   for(j=i+1;j<n;j++)
   {
      if(Arr[j]<Arr[min])
         min=j;
   }
   if(min!=i)
     {
        int temp=Arr[i];
        Arr[i]=Arr[min];
        Arr[min]=temp;
        count++;
     }
 }
 
 printf("\nPrinting sorted elements:\n");
 for(i=0;i<n;i++)
  printf("\t%d",Arr[i]);

 printf("\ncount=%d",count);
 return 0;	
}

