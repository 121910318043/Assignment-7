#include<stdio.h>
//program to print first N terms of Fibonacci series.
int main()
{
    int i=0,j=1,s,n,count=1;
    printf("Enter a term: ");
    scanf("%d",&n);
    while(count<=n)
    {
        printf("%d ",i);
        s=i+j;
        i=j;
        j=s;
        count++;
    }
    return 0;
}
