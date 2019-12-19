#include<stdio.h>
int main()
{int n,r,sum=0,temp;
 printf("Enter the value of N:");
 scanf("%d",&n);
 temp=n;
 while(n!=0)
 {
 r=n%10;
 sum=sum+(r*r*r);
 n/=10;
 }
if(sum==temp)
printf("%d is an ARMSTRONG number!!!",temp);
return 0;
}
