#include <stdio.h>
int main()
{
    int rem,n,count=0;
    printf("enter a number:\n");
    scanf("%d",&n);
    while(n!=0)
    {
        rem=n%2;
        if(rem==1)
        {
            count++;
        }
        n=n/2;
    }
    printf("the count of set bits:%d",count);
    return 0;
}

