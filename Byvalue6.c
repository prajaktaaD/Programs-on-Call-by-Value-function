#include<stdio.h>
int palindrome(int);
int main()
{
  int num,m;
  printf("\nEnter num::");
  scanf("%d",&num);

  m=palindrome(num);

  if(m==num)
  printf("\nPalindrome!");

  else
  printf("\nNot Palindrome!");

  return 0;


}

int palindrome(int n)
{
   int s=0,r;
   while(n!=0)
   {
     r=n%10;
     s=s*10+r;
     n=n/10;
   }
   return s;
}
