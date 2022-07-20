#include<stdio.h>
//program to calculate HCF of two numbers.
int main()
{
    int a,b,n,i=1,H=0;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    n=a<b?a:b;
    while(i<=n)
    {
        if(a%i==0 && b%i==0)
        {
            H=i;
        }
        i++;
    }
    printf("HCF of %d & %d = %d",a,b,H);
    return 0;
}
