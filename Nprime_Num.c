#include<stdio.h>
int main()
{int n,i,j,flag=0;
 printf("Enter the value of N:");
 scanf("%d",&n);
 for(i=2;n>0;i++)
 {
  for(j=2;j<=i/2;j++)
  {
  if(i%j==0)
  {flag=1;break;}
  }
  if(flag==0)
  {printf("%d\t",i);n--;}
 }
return 0;
}
