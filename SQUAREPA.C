#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,k;
clrscr();
printf("Enter the number of rows : ");
scanf("%d",&k);
for(i=1;i<=k;i++)
{
for(j=1;j<=k;j++)
{
if(i!=1 && i!=k && j!=1 && j!=k){
printf("0 ");
}
else
{
printf("x ");
}
}
printf("\n");
}
getch();
}
