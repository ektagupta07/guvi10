#include<stdio.h>
#include<conio.h>
void main()
{
long int r, n,count=0;
printf("enter no");
scanf("%ld",&n);
while(n)
{
n=n/10	;
count++;

}
printf("%d",count);

getch();
}