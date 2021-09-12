#include<iostream.h>
#include<conio.h>
void main()
{
int arr[3][3]={9,10,11,12,13,14,15,16,17};
int i,j;
clrscr();
cout<<"Row Major Order:-"<< endl;
for (i=0;i<3;i++)
 {
  for (j=0;j<3;j++)
   {
    cout<<arr[i][j]<<" ";
   }
   cout<<endl;
 }
cout<<"Column Major Order:-"<<endl;
for(i=0;i<3;i++)
 {
  for(j=0;j<3;j++)
  {
   cout<<arr[j][i]<<" ";
  }
  cout<<endl;
 }
getch();
}