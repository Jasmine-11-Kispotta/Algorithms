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
  printf("Enter the no. of elements of queue:");
  scanf("%d",&n);
  while(choice!=0)
  {
     printf("\n1)Insertion(Press 1)\n2)Deletion(Press 2)\n3)Display queue(Press 3)\n4)Exit(Press 0)\n");
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
       display(n);
     }
     else if(choice==0)
     {
     	break;
     }
     else
     {
     printf("Wrong Choice");
     }
  }
  return 1;
}
void enqueue(int n)
{
	int i;
   if((rear+1)%n==front)
   {
      printf("\nOverflow");
   }
   else if(front==-1)
   {
   	 front=0;
   	 rear++;
      printf("Enter the element u want to add to queue:");
      scanf("%d",&i);
      A[rear]=i;
   }
   else
   {
   	rear=(rear+1)%n;
   	printf("Enter the element u want to add to queue:");
      scanf("%d",&i);
      A[rear]=i;
   }
   return;
}
void dequeue(n)
{
   if(front==-1)
   {
      printf("\nUnderflow");
   }
   else if(front==rear)
   {
   	  printf("Element deleted:%d",A[front]);
      front=-1;
      rear=-1;
   }
   else
   {
      printf("Element deleted:%d",A[front]);
      front=(front+1)%n;
   }
   return;
}
void display(int n)
{
   int j;
   if((front==-1)&&(rear==-1))
   {
     printf("\nUnderflow");
   }
   else if(front>rear)
   {
   	printf("%d %d",front,rear);
      printf("\nQueue:\n");
      for(j=front;j<n;j++)
      {
          printf("%d\t",A[j]);
      }
      for(j=0;j<=rear;j++)
      {
          printf("%d\t",A[j]);
      }
   }
   else
   printf("\nQueue:\n");
   {
     for(j=front;j<=rear;j++)
     {
        printf("%d\t",A[j]);
     }
   }
   
   return;
}
