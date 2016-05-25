#include<stdio.h>
#include<conio.h>
#define size 8
void main()
{
char binary[size+1],onescomp[size+1];
int i=0,error=0;
clrscr();
printf("Enter the %d bit binary value : ",size);
gets(binary);
for(i=0;i<size;i++)
{
if(binary[i]=='1')
{
onescomp[i]='0';
}
else if(binary[i]=='0')
{
onescomp[i]='1';
}
else{
error=1;
printf("Invalid input");
break;
}
}
onescomp[size]='\0';
if(error==0)
{
printf("original binary value = %s \n",binary);
printf("onescomp binary value = %s \n",onescomp);
getch();
}

}