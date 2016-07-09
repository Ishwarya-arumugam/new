#include<stdio.h>
#include<conio.h>
void main()
{
int n;
printf("Enter the between 1 t0 9");
scanf("%d",&n);
if(n>=1&&n<=9)
{
printf("%d",n);
}
else
printf("you entered number is not in range");
getch();
}
