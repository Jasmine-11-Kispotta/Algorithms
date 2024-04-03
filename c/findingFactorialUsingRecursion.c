#include <stdio.h>
#include <conio.h>
int fact(int);
int main()
	{
	 int n;
	 printf("Enter a no.:");
	 scanf("%d",&n);
	 fact(n);
	 printf("Factorial=%d",fact(n));
	 return 0;
	 }
int fact(int n)
{
	if(n==0)
	{return 1;}
	else
	{
	n=n*fact(n-1);
	return n;
	}
}
