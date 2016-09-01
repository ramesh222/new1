#include <stdio.h>
    int main(){
    int n, r= 0, remainder,p;
    printf("Enter an integer: ");
    scanf("%d", &n);
    p=n;
    while( n!=0 )
    {
    remainder = n%10;
    r= r*10 + remainder;
    n=n/10; }
    if(p==r)
    printf("%d is a palindrome.",p);
    else
    printf("%d is not a palindrome.",p);
    return 0;
}
