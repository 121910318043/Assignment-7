#include<stdio.h>
//program to print all Prime numbers between two given numbers with explanation.
int main()
{
    int a,b,i,count;
    printf("Enter The range: ");
    scanf("%d%d",&a,&b);
    printf("The Prime numbers Between %d and %d are: ",a,b);
    a=a+1;       //values should be in between two numbers so first value must not be considered.We will increment by 1.
    while(a<b)   //in between (a to b).
    {
        i=1;     //re-initialization.
        count=0;    //re-initialization.
        while(i<=a)   //Loop to check for prime number or not.
        {
            if(a%i==0)
            {
                count++;
                if(count==3)   //If the count value exceeds 2 obviously it is not a prime so here there is no need to check further for divisibility of 'a' with 'i'.That's the reason we use break here.
                    break;   //This optimizes the code.
            }

            i++;
        }
        if(count==2)
            printf("%d ",a);
        a++;
    }
    return 0;
}
