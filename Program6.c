#include<stdio.h>
//program to print all Prime numbers under 100.
int main()
{
    int n=1,count,i;
    while(n<100)
    {
        count=0;i=1;
        while(i<=n)
        {
            if(n%i==0)
                count++;
                if(count==3)
                    break;
            i++;
        }
        if(count==2)
            printf("%d ",n);
        n++;
    }
    return 0;
}
