#include <stdio.h>

int main(void)
{
    long n;
    long sum=0;
    long loop;
    scanf("%ld", &n);/* TODO */
    if (n<0){
    printf ("NG");
    return 0;
    }
    for (loop=1; loop<=n; loop+=2)
    {
        sum += loop;
    }
    printf ("%ld", sum);
    return 0;
}