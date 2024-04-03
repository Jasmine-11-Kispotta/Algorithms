#include <stdio.h>
#include <conio.h>

int Power(int, int);
int main()
{
	int a,n;
	printf("Enter the no. and its power which is to be calculated:");
	scanf("%d %d",&a,&n);
	
	int result=Power(a,n);
	
	printf("\nResult =%d",result);
  return 0;
}

int Power(int a, int n)
{
   int t;
   if(n==1)
      return a;
   else
     t= Power(a, n/2);
   
   if(n%2==0)
      return t*t;
   else
      return a*t*t;
}

