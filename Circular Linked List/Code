#include<iostream>
#include<malloc.h>

using namespace std;

struct Node
{
    int info;
    struct Node *link;
} *FIRST = NULL;
struct Node *create_new(int val)
{
    struct Node *new1;
    new1=(struct Node*)malloc(sizeof(struct Node));
    new1->info=val;
    return(new1);
}
int main()
{
 struct Node *n1,*n2,*n3,*LAST; 
    n1=create_new(3105);
    n2=create_new(7421);
    n3=create_new(9853);
    FIRST=n1;
    n1->link=n2;
    n2->link=n3;
    LAST=n3;
    LAST->link=n1;
    struct Node *temp;
    temp=FIRST;
    cout<< "\n FIRST-->";
    while(temp!=LAST)
    {
        cout<<temp->info<<"-->";
        temp=temp->link;
    }
cout<<LAST->info;
return 0;
}
        
        
        

