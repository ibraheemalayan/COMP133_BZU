#include <stdio.h>
#include <math.h>

int main()
{
    int i, n, term1 = 0, term2;

    printf("enter any positive integer value");

    scanf("%d", &n);

    if (n >= 1)
    {

        for (i = 1; i <= n; i++)
        {

            term1 += pow(2, 2 * n - 1);
        }

        

        term2 = (2 * (pow(2, 2*n) - 1)) / 3;

        printf("term1 is %d\n\n" , term1);
        printf("term2 is %d\n" , term2);

        if (term1 == term2)
        {

            printf("Both terms are equal\n");
        }
    }
}