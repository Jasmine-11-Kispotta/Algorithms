#include <stdio.h>
#include <conio.h>
typedef struct result
{
    int max,min;
}Struct;

Struct dacMaxMin(int [],int,int);


int main()
{
  int Arr[20],n,i,j;
  printf("Enter size of array:");
  scanf("%d",&n);
  printf("\nEnter %d elements:",n);
  for(i=0;i<n;i++)
    scanf("%d\t",&Arr[i]);
  
  i=0,j=n-1;
  Struct result=dacMaxMin(Arr,i,j);
  printf("\nMin=%d\tMax=%d",result.min,result.max);
  return 0;
}


Struct dacMaxMin(int Arr[],int i,int j)
{
	Struct s;
  if(i==j)    //for 1 element
   {
      s.max=s.min=Arr[i];
      return s;
   }
   else if(i==j-1)    //for 2 elements
   {
      if(Arr[i]>Arr[j])
       {
         s.max=Arr[i];
         s.min=Arr[j];
       }
       else
       {
         s.max=Arr[j];
         s.min=Arr[i];
       }
       return s;
   }
   else
   {
      int mid=(i+j)/2;//Divide()
     
      s=dacMaxMin(Arr, i, mid);//Conquer()
      int max1=s.max, min1=s.min;
     
      s=dacMaxMin(Arr,(mid+1),j);//Conquer()
      int max2=s.max,min2=s.min;
      
     
      if(max1>max2)    //Combine
         s.max=max1;
      else
         s.max=max2;  
      
      if(min1>min2)
         s.min=min2;
      else
         s.min=min1;
      	
      return s;
   }
}

