#include <stdio.h>
int main()
{
    int n,pos;
    printf("enter a number:\n");
    scanf("%d",&n);
    printf("enter a bit position to set:\n");
    scanf("%d",&pos);
    n=(1<<pos)^n;
    printf("toggle a bit=%d\n",n);
    return 0;
}
