//insertion at the end
#include<iostream>
#include<malloc.h>

using namespace std;

struct Node
{
    int data;
    struct Node *link;
} *FIRST = NULL;

void insert_end(struct Node *ptr,int val)
{
    struct Node *newNode;
    newNode=(struct Node*)malloc(sizeof(struct Node));
    newNode->data=val;
    newNode->link=NULL;
    //check for empty list
    if(ptr==NULL)
    {
        ptr=newNode;
    }
    struct Node *temp=ptr;              //temporary pointer,initialized by FIRST and after implementing it we reach last
    while(temp->link!= NULL)
    {
    temp=temp->link;
    }
    temp->link=newNode; 
    
}
int main()
{
 struct Node *n1,*n2,*n3; 
    n1=(struct Node*)malloc(sizeof(struct Node));
    n1 -> data = 3105;
    n1 -> link = NULL;
    FIRST= n1;
    
    n2=(struct Node*)malloc(sizeof(struct Node));
    n2 -> data = 7421;
    n1 -> link = n2;
    n2->link=NULL;
    
    n3=(struct Node*)malloc(sizeof(struct Node));
    n3 -> data = 7005;
    n2 -> link = n3;
    n3->link=NULL;
    
struct Node *temp;
temp = FIRST;    
cout << "linked list:-\n ";
    while(temp != NULL)
    {
        cout<<"\n"<<temp->data;
        temp=temp->link;
    }
cout <<"\n \nlinked list after insertion:-\n ";
insert_end(FIRST,9853);
struct Node *temp1;
temp1=FIRST;
cout<<"\n";
while(temp1!=NULL)
{
    cout<<temp1->data<<"\n";
    temp1=temp1->link;
}
return 0;
}
        
        
        

