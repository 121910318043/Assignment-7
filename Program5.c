#include<stdio.h>
//program to check whether two given numbers are co-prime numbers or not.
int main()
{
    int small,i=1,a,b,count=0;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    small=a<b?a:b;
    while(i<=small)
    {
        if(a%i==0 && b%i==0)
            {
                count++;
                if(count==2)
                    break;
            }
        i++;
    }
    if(count==1)
        printf("%d and %d are co-prime numbers",a,b);
    else
        printf("%d and %d are not co-primes numbers",a,b);
    return 0;
}
