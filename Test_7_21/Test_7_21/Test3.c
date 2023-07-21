#include<stdio.h>
int main()
{
    long a, b;
    while (scanf("%ld%ld", &a, &b) != EOF)
    {
        //scanf("%ld%ld",&a,&b);
        if (a >= 0 || b >= 0)
        {
            if (a == b)
            {
                printf("%ld=%ld\n", a, b);
            }
            if (a > b)
            {
                printf("%ld>%ld\n", a, b);
            }
            if (a < b)
            {
                printf("%ld<%ld\n", a, b);
            }
        }
    }
    return 0;
}