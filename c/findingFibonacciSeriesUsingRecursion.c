#include <stdio.h>
#include <conio.h>
int fibo(int,int,int);
int main()
{
	int i=0,j=1,n;
	printf("No.of elements in the series:");
	scanf("%d",&n);
	printf("%d\t%d\t",i,j);
	fibo(i,j,n-=2);
	return 0;
}
int fibo(int i,int j,int n)
{
	int k;
	k=i+j;
	if(n==0)
	return 0;
	else
	{printf("%d\t",k);
	i=j;j=k,n--;
	fibo(i,j,n);}
}

