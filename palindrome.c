#include<stdio.h>
int main(){
int n,r,sum=0;
printf("enter the number to check its palindrome ");
scanf("%d",&n);
while(n>0){
r=n%10;
sum=sum*10+r;
n=n/10;
}
if(n==sum)
printf("it's palindrome number ",sum);
else
printf("it is not a palindrome number ");

return 0;
}