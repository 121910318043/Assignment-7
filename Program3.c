#include<stdio.h>
//program to check whether a given number is there in the Fibonacci series or not.
int main()
{
    int n,s=0,i=0,j=1,count=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    while(i<=n)
    {
        if(n-i==0)
        {
            count=1;
            break;
        }
        s=i+j;
        i=j;
        j=s;
        count++;
    }
    if(count==1)
        printf("%d exists in Fibonacci series",n);
    else
        printf("%d does not exist in Fibonacci series",n);
    return 0;
}
