// Implement stack using array with push and pop operations.
//Codechef ide

#include <iostream>
using namespace std;
#define SIZE 5

int stack[SIZE];                   //declaring stack variable globally so we can access the push and pop functions
int TOP=-1;                        // initially there are no elements to display

void display()
{
    if (TOP==-1)
    cout<<"\n Stack is empty\n";
    else
    {
        cout<<"\n";
        for(int i=TOP;i>-1;i--)
        cout<<"\t"<<stack[i];
    }
}
void push(int val)                   //push condition
{
    if (TOP==SIZE-1)
    cout<<"\n Stack is now full";
    else
    {
        stack[++TOP]=val;
        cout<<"\n Inserted Element:"<<val;
    }
}

int pop()                             //pop condition 
{
    if(TOP==-1)
    cout<<"\n Stack is Empty, no element to pop";
    else
    {
        int temp=stack[TOP];
        TOP--;
        return temp;
    }
}

int main()
{ 
    int t;
    display();                     // to display/print the inserted elements
    push(3105);
    push(7005);
    push(7421);
    push(2002);
    push(1857);
    
    t=pop();
    cout<<"\n Element popped:"<<t;
    t=pop();
    cout<<"\n Element popped:"<<t;
    t=pop();
    cout<<"\n Element popped:"<<t;
    t=pop();
    cout<<"\n Element popped:"<<t;
    t=pop();
    cout<<"\n Element popped:"<<t;
    t=pop();

    display();                     // to display/print the popped elements 
	return 0;
}
