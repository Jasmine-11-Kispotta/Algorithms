#include <stdio.h>
#include <conio.h>
int main()
{
   int A[5][5],B[5][5],C[5][5],i,j,k,n,m,o;
   printf("Enter  no. of columns in A & no. of rows in B matrix:");
   scanf("%d",&n);
   printf("Enter two no. for no. of rows in A & no. of columns in B matrix:");
   scanf("%d %d",&m,&o);
   printf("\nEnter elements in matrix A:\n");
   for(i=0;i<m;++i)
   {
   	printf("\n");
     for(j=0;j<n;++j)
    {
    	printf("Enter A[%d][%d]:",i,j);
      scanf("%d\t",&A[i][j]);
   	}
   }
   printf("\nEnter elements in matrix B:\n");
   for(i=0;i<n;++i)
   {
   	printf("\n");
     for(j=0;j<o;++j)
    {
    	printf("Enter B[%d][%d]:",i,j);
      scanf("%d\t",&B[i][j]);
   	}
   }
   //Matrix multiplication
   C[0][0]=0;
   for(i=0;i<m;++i)
   {
   	for(j=0;j<o;++j)
   	{
   		for(k=0;k<n;++k)
   		{
   			C[i][j]=C[i][j]+(A[i][k]*B[k][j]);
   		}
   		printf("\n%d",C[i][j]);
   	}
   }
   //Printing resultant matrix
   printf("\nResultant matrix:\n");
   for(i=0;i<m;++i)
   {
   	printf("\n");
     for(j=0;j<o;++j)
    {
      printf("%d\t",C[i][j]);
   	}
   }
return 0;
}

