/*
*Author : Rajat Kapoor

Problem : Largest palindrome product

A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.

Find the largest palindrome made from the product of two 3-digit numbers.

*/
#include <stdio.h>
int isPal(int n)
{
	int rev=0,i=0,t,copy=n;
	while (n!=0)
	{
		t=n%10;
		rev=rev*10+t;
		n/=10;
	}
	if (rev==copy)
		return 1;
	else return 0;

} 
int main()
{
	int i,j;
	int m=0;
	
	for(i=999;i>=100;i--)
	{
		for(j=999;j>=100;j--)
		{
			
			if (isPal(i*j)&& (i*j)>m)
			{
				m=i*j;
			}
		}
	}
	printf("%d",m);
}
