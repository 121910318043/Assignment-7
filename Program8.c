#include<stdio.h>
//program to find next Prime number of a given number
int main()
{
    int i=1,n,count=0,o;
    printf("Enter a Prime number: ");
    scanf("%d",&n);
    o=n;
    while(i<=n)
    {
        if(n%i==0)
            count++;
        i++;
    }
    if(count>2)
        printf("\"Please Try again and Enter a prime number\"");
    else
        {
            i=1,count=0,n=n+1;
            while(count!=2)
            {
                count=0,i=1;
                while(i<=n)
                {
                    if(n%i==0)
                        count++;
                        if(count>2)
                            break;
                    i++;
                }
                n++;
            }
            printf("The next prime number of %d is %d",o,n-1);//we have to decrement n value because when before the loop is terminated n value is incremented by 1.
        }
        return 0;
}
