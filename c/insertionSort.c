#include <stdio.h>
#include <conio.h>
int main(){
   int Arr[20],i,j,n;
   printf("Enter no. of elements to be sorted:");
   scanf("%d",&n);
   printf("\nEnter %d elements:\n",n);
   for(i=0;i<n;i++)
     scanf("%d\t",&Arr[i]);
   
   //i!nsertion sorting
   for(i=1;i<n;i++)
   { 
     int key=Arr[i];
     for(j=i-1;j>=0 && key<=Arr[j];j--)
      {
            Arr[j+1]=Arr[j];
      }
     Arr[j+1]=key;  
   }
   
   printf("\nPrinting sorted elements:\n");
   for(i=0;i<n;i++)
     printf("%d\t",Arr[i]);
   
   return 0;
}

