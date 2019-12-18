#include<stdio.h>
int main()
{
int n;
printf("Enter an Year:");
scanf("%d",&n);
if(n%4==0&&n%100!=0)
printf("it is leap year");
else
printf("not a leap year");
return 0;
}
