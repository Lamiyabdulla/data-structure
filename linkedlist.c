#include<stdio.h>
#include<stdlib.h>

struct Node{
       int data;
       struct Node*next;
};


struct Node*top=NULL;


void push(int value){
 struct Node*newNode=(struct Node*)malloc(sizeof(struct Node));
newNode->data=value;
newNode->next=top;
top=newNode;
}

void pop(){
if(top==NULL){
printf("Stack Is Empty\n");
return;
}


struct Node*temp=top;
top=top->next;
free(temp);
}


void display(){
if(top==NULL){
printf("Stack Is Empty.\n");
return;
}

struct Node*temp=top;
printf("Stack Elements:");
while(temp!=NULL){
printf("%d",temp->data);
temp=temp->next;
}
printf("\n");
}
int main(){
int choice,value;


while(1){
printf("Stack Menu:\n");
printf("1.Push\n");
printf("2.Pop\n");
printf("3.Display\n");
printf("4.Exit\n");
printf("Enter Your Choice:\n");
scanf("%d",&choice);

switch(choice){
case 1:
printf("Enter The Value To Push:");
scanf("%d",&value);
push(value);
break;


case 2:
pop();
break;


case 3:
display();
break;


case 4:
printf("Exiting...\n");
exit(0);


default:
printf("Invalid Choice. Please Try Again\n");
}
}
return 0;
}
