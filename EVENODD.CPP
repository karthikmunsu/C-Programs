#include<iostream.h>
#include<conio.h>
void main()
{
char arr[2][5]={"even","odd"};
int num;         clrscr();
cout<<"Enter the number to find odd or even : ";
cin>>num;
cout<<arr[num % 2];
getch();
}