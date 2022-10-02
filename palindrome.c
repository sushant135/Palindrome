#include<stdio.h>
int main(){
int n,r,sum=0;
printf("to check palindrome number , enter a number "); //change sentence (1)
scanf("%d",&n);
while(n>0){
r=n%10;
sum=sum*10+r; 
n=n/10;
}
if(n==sum)
printf("it's palindrome number ",sum); //change sentences (2)
else
printf("it is not a palindrome number "); //change sentence (3)

return 0;

  
  //add comments of variable (4)
  // add comment for use of palindrome and what is it. (5)
