#include <stdio.h>
int main()
{
    int n,tempnum,flag=0;
    printf("enter a number:\n");
    scanf("%d",&n);
    tempnum=n;
    while(tempnum!=1)
    {
        if(tempnum%2!=0)
        {
            flag=1;
        }
        tempnum=tempnum/2;
    }
    if(flag==0)
    {
    printf("%d is a power of 2",n);
    }
    else
    {
        printf("%d is not a power of 2",n);
    }
    return 0;
}

