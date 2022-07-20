#include<stdio.h>
//program to find the Nth term of the Fibonacci series.
int main()
{
    int i=0,j=1,count=1,n,s;
    printf("Enter the nth term: ");
    scanf("%d",&n);
    while(count!=n)
    {
        s=i+j;
        i=j;
        j=s;
        count++;
    }
    printf("The %dth term value = %d",n,i);
    return 0;
}
