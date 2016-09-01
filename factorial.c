#include <stdio.h>
int main()
{
    int n, i;
    printf("Enter an integer");
    scanf("%d",&n);
    if (n < 0)
        printf("Error!");
    else
    {
        for(i=1; i<=n; ++i)
        {
            f=f*i;
        }
        printf("Factorial of %d is=%d,n,f);
    }

    return 0;
}
