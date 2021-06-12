#include <stdio.h>

int main(){

    double a, b;
    char op;

    printf("Enter first num:\n");
    scanf("%lf", &a);

    printf("Enter second num:\n");
    scanf("%lf", &b);

    printf("Enter operation:\n");
    scanf(" %c", &op);

    // For the Modulus
    int na, nb;
    na = (int) a;
    nb = (int) b;

    switch (op)
    {
    case '+':
        printf("Result of Sum is %lf\n", (a+b));
        break;
    case '-':
        printf("Result of Sub is %lf\n", (a-b));
        break;
    case '*':
        printf("Result of Mul is %lf\n", (a*b));
        break;
    case '/':
        printf("Result of Div is %lf\n", (a/b));
        break;
    case '%':
        printf("Result of Mod is %d\n", (na%nb));
        break;
    
    default:
        printf("invalid operation");
        break;
    }

    return 0;
}