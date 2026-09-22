
#include<stdio.h>
#include<math.h>
int main()
{
int c=0;
int i,j;
int n;
int sum=0;
printf("enter the number\n");
scanf("%d",&n);
int num=n;
int number=n;
for(;n!=0;)
{
i=n%10;
c++;
n=n/10;
}
for(;num!=0;)
{
j=num%10;
sum+=pow(j,c);
num=num/10;
}
if(number==sum)
{
printf("number is armstrong");
}
else
printf("number is not armstrong");
return 0;






}



X
