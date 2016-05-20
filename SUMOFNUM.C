#include<stdio.h>
#include<conio.h>
int sum(int num)
{
 return num == 0 ? 0 : num % 10 + sum(num/10);
}
void main()
{
clrscr();
printf("%d",sum(1234	));
getch();
}