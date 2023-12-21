#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
int queue[SIZE];
int front=-1,rear=-1;

void  enqueue(int value)
{
if((front==0&&rear==SIZE-1)||(rear==(front-1)%(SIZE-1)))
{
printf("Queue Is Full\n");
}
else if(front==-1)
{
front=rear=0;
queue[rear]=value;
printf("front=%d\nrear=%d\n",front,rear);
}
else
{
rear++;
queue[rear]=value;
printf("front=%d\n rear=%d",front,rear);
}
}

void dequeue()
{
if(front==-1)
{
printf("Queue Is Empty");
}
else if(front==rear)
{
printf("Deleted Elements:%d\n",queue[front]);
front=rear=-1;
printf("front=%d\n rear=%d",front,rear);
}
else if(front==SIZE-1)
{
printf("Deleted Elements:%d\n",queue[front]);
front=0;
printf("front=%d\n rear=%d",front,rear);
}
else
{
printf("Deleted Elements:%d\n",queue[front]);
front++;
printf("front=%d\n rear=%d",font,rear);
}
}


int search(int value)
{
if(front==-1)
{
printf("Queue Is Empty Cannot Search Elements\n");
return-1;
}
else
{
int i=front;
if(front<=rear)
{
while(i<=rear)
{
if(queue[i]==value)
{
printf("Entered %d Found At %d\n",value,i);
return i;
}
i++;
}
}
else
{
while(i<=SIZE-1)
{
if(queue[i]==value)
{
printf("Element %d Found At IndexX %d\n",value,i);
return i;
}
i++;
}
i=0;
while(i<=rear)
{
if(queue[i]==value)
{
printf("Element %d Found At Index %d\n",value,i);
return i;
}
i++;
}
}
printf("Element %d Not Found In The Queue\n",value,i);
return-1;
}
}


void display()
{
if(front==-1)
{
printf("Queue is empty\n");
}
else
{
int i=front;
printf("queue elements:");
if(front<=rear)
{
while(i<=rear)
{
printf("%d",queue[i]);
i++;
}
}
else
{
while(i<=SIZE-1)
{
printf("%d",queue[i]);
i++;
}
i=0;
while(i<=rear)
{
printf("%d",queue[i]);
i++;
}
}
printf("\n");
}
}


int main()
{
int choice,value;

do
{
printf("1.Enqueue\n");
printf("2.Dequeue\n");
printf("3.Search\n");
printf("4.Display\n");
printf("5.Exit\n");
printf("Enter Your Choice:");
scanf("%d",&choice);



switch(choice)
{
case 1:
      printf("Enter The Values To Be Entered:");
      scanf("%d",&value);
      enqueue(value);
      break;

case 2:
      dequeue();
      break;

case 3:
      printf("Enter The Element You Want To Search:");
      scanf("%d",&value);
      search(value);
      break;

case 4:
      display();
      break;

case 5:
      exit(0);

default:
       printf("Invalid Choice!!!Please Enter A Valid Option\n");
}
}
while(choice!=5);
return 0;
}

