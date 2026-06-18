//这是自己尝试写的求和算法

#include <stdio.h>
#include <math.h>//好像没用到
#define N 50

int main()
{
 int n=0;
 scanf("%d",&n);
 
 int a[N]={0};
int i=0,sum=0;

 for(i=0;i<n;i++)
 {
scanf("%d",&a[i]);
sum+=a[i];

 }
 printf("%d",sum);

 return 0;
}