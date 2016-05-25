#include<stdio.h>
#include<conio.h>
void main()
{
int a[15],n,i,tmp[15];
int flag=0,j=0;
clrscr();
printf("Enter the number of elements to be stored : ");
scanf("%d",&n);
printf("Enter the elements to be stored :");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
flag = 1;
for(j=i+1;j<n;j++)
{
 if(a[i]==a[j]&&a[j]!='\0')
 {
 flag++;
 a[j]='\0';
 }
}
if(a[i]!='\0')
printf("%d-%d \n",a[i],flag);
}
getch();
}
