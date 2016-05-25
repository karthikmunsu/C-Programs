#include<stdio.h>
#include<conio.h>
void main()
{
int arr[15];
int i=0,j=0,n=0;
int size=0,t,tmp[15],flag=0;
clrscr();
printf("Enter the number of elements : ");
scanf("%d",&n);

for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}

printf("Enter the size of sliding window : ");
scanf("%d",&size);

for(i=0;i<=n-size;i++)
{
t=i;
for(j=i;j<=t+size-1;j++)
{
if(arr[i]>arr[j] && flag>arr[j]){
 tmp[i]=arr[i];
 flag=arr[i];
}
if(arr[i]<arr[j] && flag<arr[j]){
tmp[i]=arr[j];
flag=arr[j];
}
}
flag=0;
t=0;
}
for(i=0;i<=n-size;i++)
{
printf("%d ",tmp[i]);
}
getch();
}
