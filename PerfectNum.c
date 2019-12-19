#include<stdio.h>
int main()
{int i,n,sum=0;
 printf("Enter the value of N:");
 scanf("%d",n);
 for(i=1;i<n;i++)
 {
 if(n%i==0)
 sum+=i;
 }
 if(sum==n)
 printf("%d is perfect number",n);
 else
 printf("%d is not perfect number",n);
}
