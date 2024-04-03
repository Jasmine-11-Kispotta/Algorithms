#include <stdio.h>
#include <conio.h>

int mergeSort(int [],int,int);
void merge(int [],int,int,int);

int main()
{
	int Arr[20],n,i,j;
  printf("Enter no. of elements to be sorted:");
 scanf("%d",&n);
 printf("\nEnter %d elements:\n",n);
 for(i=0;i<n;i++)
   scanf("\t%d",&Arr[i]);
 
 i=0;j=n-1;
 mergeSort(Arr, i, j);
 
 printf("\nPrinting sorted elements:\n");
 for(i=0;i<n;i++)
   printf("\t%d",Arr[i]);
 
return 1;
}

int mergeSort(int Arr[],int p,int r)
{
  if(p==r)
     return 1;
  
  int q=(p+r)/2;
  mergeSort(Arr, p, q);
  mergeSort(Arr, q+1, r);
  
  merge(Arr, p, q, r);
  
 return 1;
}


void merge(int b[],int p,int q,int r)
{
    int k=p,n1=(q-p)+1,n2=r-q;
    int lA[10],rA[10],i,j;
    
    for( i=0;i<n1;i++)
       {
       	lA[i]=b[p];
       	p++;
       }
    for( i=0;i<n2;i++)
       {
        rA[i]=b[q+1];
        q++;
       }
     
     i=0,j=0;
    while(k<=r)
    {
       if(i<n1)
       {
         if(j<n2)
         {
           if(lA[i]<=rA[j])
           {
             b[k]=lA[i];
             i++;
           }
           else
           {
             b[k]=rA[j];
             j++;
           }
         }
         else
         {
           b[k]=lA[i];
           i++;
         } 
       }
       else
       {
          b[k]=rA[j];
          j++;
       }
       k++;
    }   
    
}

