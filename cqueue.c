#include <stdio.h>
void enqueue();
void dequeue();
void display();
int front=-1,rear=-1,m,n,item;
int a[100];
void main()
{
 printf("Enter the size of the queue:");
 scanf("%d",&m);
 printf("Enter Operation to perform on Queue: 1.Enqueue\t2.Dequeue\t3.Display\t4.Exit  \t");
 while(n!=4)
 {
  printf("Enter the choice:");
  scanf("%d",&n);
  switch(n)
  {
   case 1 : enqueue();
            break;
   case 2 : dequeue();
            break;
   case 3 : display();
            break;
   case 4 : printf("Exited the program\n");
            break;
  }
 }
}
 void enqueue()
 {
  if(front==(rear+1)%m)
  {
   printf("Overflow\n");
  }
  else if(front==-1 && rear==-1)
  {
   front++;
   rear++;
   printf("Enter the value:");
   scanf("%d",&a[rear]);
  }
  else
  {
   rear=(rear+1)%m;
   printf("Enter the element:");
   scanf("%d",&a[rear]);
  }
 }
 void dequeue()
 {
  if(front==-1 && rear==-1)
  {
   printf("Underflow\n");
  }
  else if(front==rear)
  {
   item=a[front];
   rear=-1;
   front=-1;
   printf("Deleted element is %d\n",item);
  }
  else
  {
   item=a[front];
   front=(front+1)%m;
   printf("Deleted element is %d\n",item);
  }
 }
 void display()
 {
  if(front==-1 && rear==-1)
  {
   printf("The queue is empty");
  }
  else
  {
   for(int i=front;i<=rear;i++)
   {
    printf("%d\t",a[i]);
   }
  }
  printf("\n");
 }

   
