#include<stdio.h>
//program to print all Armstrong numbers under 1000.
int main()
{
    int n,a,b,s,count,c,p,i=1;
    printf("Armstrong number under 1000 are: ");
    for(p=1;p<1000;p++)
    {
    count=0,s=0,n=p;
    while(n>0)//This loops checks number of digits and stores in count variable.
    {
        a=n%10;
        n=n/10;
        count++;
    }
    n=p;
    a=1;
    while(n>0)
    {
        c=n%10;
        for(i=1;i<=count;i++)//a = a * n%10 * n%10 * n%10;
        {
            a=a*c;
        }
        s=s+a;
        n=n/10;
        a=1;
    }
    if(p==s)
        printf("%d ",p);
    }
    return 0;
}
