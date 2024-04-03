//Simple Queue
#include <stdio.h>
void enqueue(int);
void dequeue(int);
void display();
int A[100];
int front=-1;
int rear=-1;
int main()
{
	int n,choice;
	printf("Enter the no. of elements in queue:");
	scanf("%d",&n);
	do
	{
		printf("\n1)Insertion(Press 1)\n2)Deletion(Press 2)\n3)Display queue\n4)Exit(Press 0)\n");
		scanf("%d",&choice);
		if(choice==1)
		{
		enqueue(n);
		}
		else if(choice==2)
		{
		dequeue(n);
		}
		else if(choice==3)
		{
		  display();
		}
		else if(choice==0)
		 {
		 	break;
		 }
		 else
		 {
		 	printf("Wrong choice");
		 }
		}while(choice!=0);
		return 1;
}
void enqueue(int n)
{
	int i;
  if(rear==(n-1))
  {
    	printf("Overflow");
  }
  else if(front==-1)
  {
  	front=0;
     rear++;
     printf("Enter the element you want to add to queue:");
     scanf("%d",&i);
  	A[rear]=i;
    }
    else
    {
     rear++;
     printf("Enter the element you want to add to queue:");
     scanf("%d",&i);
     A[rear]=i;
    }
    return;
   
}
void dequeue(int n)
{
  if((front==-1)||(front>rear))
  {
   printf("\nUnderflow");
  }
  else if(front==(n-1)&&(rear==(n-1)))
  {
   printf("Elemented deleted:%d",A[front]);
   front=-1;
   rear=-1;
  }
  else
  {
    printf("Elemented deleted:%d",A[front]);
    front++;
  }
  return;
}
void display()
{
   int j;
   printf("\nfront:%d,rear:%d",front,rear);
   if((front==-1)||(front>rear))
   {
     printf("\nUnderflow");
   }
   else
   {
   	printf("\nQueue:");
     for(j=front;j<=rear;j++)
     {
        printf("%d\t",A[j]);
     }
   }
   return;
}
