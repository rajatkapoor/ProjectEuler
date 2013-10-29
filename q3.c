/*
*Author : Rajat Kapoor

Problem : The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ?
*/

#include<stdio.h>

int main()
{
    long long int c=600851475143,i;
    for (i=2;i<c;i++)
        {
            if(c%i==0)
            {
                c=c/i;
                i=2;
            }
        }
    printf("%lld\n",c);
}