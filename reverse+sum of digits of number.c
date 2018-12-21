#include<stdio.h>
#include<conio.h>
void main()
{
int n,s,rev=0;
clrscr();
printf("enter value of n:");
scanf("%d",&n);
while(n!=0)
{
s=n%10;
n=n/10;
rev=rev+s;
}
printf("%d",rev);
getch();
}