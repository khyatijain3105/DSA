#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
char arr[3][3]={'6','6','6','6','6','6'};
for (int i=0;i<3;i++)
{
cout<<endl;
for(int j=0;j<3;j++)
{
cout<<arr[i][j];
}
}
getch();
}