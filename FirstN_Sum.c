#include<stdio.h>
int main()
{int n,i,sum=0;
 printf("Enter the value of N:");
 scanf("%d",&n);
 for(i=0;i<=n;i++)
 {
 	sum+=i;
 }
 printf("The sum of the first 'n' natural numbers is: %d",sum);
 return 0;
}
