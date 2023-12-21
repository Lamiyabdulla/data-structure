#include<stdio.h>
int stack[10],choice,n,top,x,i;
void push();
void pop();
void display();
int main()
{

top=-1;
printf("Enter The Size Of Stack:");
scanf("%d",&n);
printf("Stack Implementation Using Array");

do
{
printf("\nMENU\n");
printf("1.Push\n");
printf("2.Pop\n");
printf("3.Display\n");
printf("4.Exit\n");
printf("Enter The Choice:");
scanf("%d",&choice);

switch(choice)
{
case 1:
{
push();
break;
}
case 2:
{
pop();
break;
}

case 3:
{
display();
break;
}
case 4:
{
break;
}
default:
{
printf("\n Invalid Choice!!!");
}
}
}
while(choice!=4);
return 0;
}
void push()
{
if(top>=n-1)
{
printf("Stack Overflow");
}
else
{
printf("Enter A Value To Be Pushed");
scanf("%d",&x);
top++;
stack[top]=x;
}
}
void pop()
{
if(top<=-1)
{
printf("Stack Is Underflow");
}
else
{
printf("The Popped Element Is %d",stack[top]);
top--;
}
}
void display()
{
if(top>=0)
{
printf("Element In Stack\n");
for(i=top;i>=0;i--)
printf("%d\t",stack[i]);
}
else
{
printf("\n Empty Stack\n");
}
}