#include<stdio.h>
//program to check whether a given number is an Armstrong number or not.
int main()
{
    int n,a,b,s=0,count=0,c,i=1;
    printf("Enter a number: ");
    scanf("%d",&n);
    b=n;
    while(n>0)//This loops checks number of digits and stores in count variable.
    {
        a=n%10;
        n=n/10;
        count++;
    }
    n=b;
    a=1;
    while(n>0)
    {
        c=n%10,i=1;
        while(i<=count)
        {
            if(count==1)
                a=a*c*c;
            else
                a=a*c;
            i++;
        }
        s=s+a;
        n=n/10;
        a=1;
    }
    if(b==s)
        printf("%d is an Armstrong number",b);
    else
        printf("%d is Not an Armstrong number",b);
    return 0;
}
