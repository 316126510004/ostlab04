#include<stdio.h>
#include<stdlib.h>
struct node
{
 int data;
 struct node *next;
}*front=NULL,*rear=NULL;
void push(int value)
{
struct node* newnode;
newnode=(struct node*)malloc(sizeof(struct node));
newnode->data=value;
newnode->next=NULL;
if(front==NULL)
{
 rear=front=newnode;
}
else
{
rear->next=newnode;}}
void pop()
{
 if(front==NULL)
{
 printf("There are no processes\n");}
else{
 struct node *temp=front;
  front=temp->next;
 free(temp);
}
}
void display()
{
 struct node *tomp=front;
 if(front==NULL)
 {
 printf("There are no processes\n");
}else{
while(tomp->next!=NULL)
{
 printf("%d->",tomp->data);
 tomp=tomp->next;
}
printf("%d->NULL",tomp->data);
}
}
void main()
{
 int op,ele;
 do{
printf("Enter choice:\n");
printf("1.push 2.pop 3.display 4.exit\n");
scanf("%d",&op);
switch(op)
{
 case 1:printf("Enter the data:\n");
        scanf("%d",&ele);
        push(ele);
        break;
 case 2:pop();
        break;
 case 3:display();
        break;
}}while(op!=4);
}































