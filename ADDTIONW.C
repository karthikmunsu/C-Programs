#include<stdio.h>
#include<conio.h>
int add(int x,int y){
 return printf("%*c%*c",x,' ',y,' ');
}

void main(){
clrscr();
printf("sum = %d",add(5,4));
getch();
}

