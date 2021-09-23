//WAP to create a linked list with 5 elements and display it
#include<iostream.h>
#include<conio.h>
#include<malloc.h>
struct Node
{
 int info;
 struct Node *kj;
};

void main()
{
clrscr();
struct Node *One=NULL;
struct Node *Two=NULL;
struct Node *Three=NULL;
struct Node *Four=NULL;
struct Node *Five=NULL;

One=(Node*)malloc(sizeof(struct Node));
Two=(Node*)malloc(sizeof(struct Node));
Three=(Node*)malloc(sizeof(struct Node));
Four=(Node*)malloc(sizeof(struct Node));
Five=(Node*)malloc(sizeof(struct Node));

One->info=3105;
One->kj=Two;

Two->info=5393;
Two->kj=Three;

Three->info=7005;
Three->kj=Four;

Four->info=7421;
Four->kj=Five;

Five->info=1857;
Five->kj=NULL;

cout<<"ELEMENTS OF LINKED LIST:-";
struct Node *temp;
temp=One;

while(temp!=NULL)
{
cout<<"\n" <<temp->info;
temp=temp->kj;
}
getch();
}
