#include <stdio.h>
#include <conio.h>
int main()
{
	int a[50],n,i=0,j;
	printf("Enter the size of stack:");
	scanf("%d",&n);
	int top=0;
	printf("Enter elements in stack:\n");
	for(i=0;i<n;i++)
	{scanf("%d\n",&a[i]);}
	if(i>n)
	{printf("Overflow");}
	do
	{
	printf("Do u wanna pop out an element from stack:");
	scanf("%d",&j);
	if(j==1)
	{--n;
	top--;
	for(i=0;i<n;i++)
	{printf("%d\n",a[i]);}
	}
	}while((j==1)&&(n!=0));
	if(n==0)
	{printf("Underflow");}
	return 0;
}

