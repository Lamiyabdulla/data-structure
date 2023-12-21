#include<stdio.h>
#include<stdlib.h>

struct node{
int data;
struct node *next;
struct node *prev;
};


struct node *head=NULL;


void insert_front(int value){
struct node*new_node=(struct node*)malloc(sizeof(struct node));
new_node->data=value;
new_node->next=head;
new_node->prev=NULL;
if(head!=NULL){
head->prev=new_node;
}
head=new_node;
}



void insert_back(int value){
struct node* new_node=(struct node*)malloc(sizeof(struct node));
new_node->data=value;
new_node->next=NULL;
if(head==NULL){
new_node->prev=NULL;
head=new_node;
return;
}
struct node* last_node=head;
while(last_node->next!=NULL){
last_node=last_node->next;
}
last_node->next=new_node;
new_node->prev=last_node;
}




void delete_front(){
if(head==NULL){
printf("List Is Empty!!!\n");
return;
}
struct node* temp=head;
head=head->next;
if(head!=NULL){
head->prev=NULL;
}
free(temp);
}



void delete_back(){
if(head==NULL){
printf("List Is Empty!!!\n");
return;
}

struct node* last_node=head;
while(last_node->next!=NULL){
last_node=last_node->next;
}
if(last_node->prev!=NULL){
last_node->prev->next=NULL;
}
else{
head=NULL;
}
free(last_node);
}



void display(){
if(head==NULL){
printf("List Is Empty!!!\n");
return;
}
struct node* current_node=head;
printf("List:");
while(current_node!=NULL){
printf("%d",current_node->data);
current_node=current_node->next;
}
printf("\n");
}



void search(int value){
if(head==NULL){
printf("List Is Empty!!!\n");
return;
}
struct node* current_node=head;
int position=1;
while(current_node!=NULL){
if(current_node->data==value){
printf("%d Found At Position %d\n",value,position);
return;
}
current_node=current_node->next;
position++;
}
printf("%d Not Found In The List\n",value);
}




int main(){
int choice,value;
while(1){
printf("1.Insert At Front\n");
printf("2.Insert At Back\n");
printf("3.Delete From Front\n");
printf("4.Delete From Back\n");
printf("5.Display\n");
printf("6.Search\n");
printf("7.Exit\n");
printf("Enter Your Choice:");
scanf("%d",&choice);
switch(choice){
case 1:
printf("Enter The Value To Insert:");
scanf("%d",&value);
insert_front(value);
break;


case 2:
printf("Enter The Value To Insert:");
scanf("%d",&value);
insert_back(value);
break;

case 3:
delete_front();
break;

case 4:
delete_back();
break;

case 5:
display();
break;

case 6:
printf("Enter The Value To Search:");
scanf("%d",&value);
search(value);
break;

case 7:
exit(0);

default:
printf("Invalid Choice!!!\n");
}
}
return 0;
}       