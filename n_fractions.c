//WAP to find the sum of n fractions.
#include<stdio.h>
struct variables
{
    int a1;
    int b1;
    int a2;
    int b2;
};
struct fraction
{
    int n;
    int d;
};

int sum_fraction(struct variables);
int main(void)
{
    struct variables var;
    struct fraction frac;
    printf("Enter 1st numerator: ");
    scanf("%d",&var.a1);
    printf("\nEnter 1st denominator: ");
    scanf("%d",&var.b1);
    printf("\nEnter 2nd numerator: ");
    scanf("%d",&var.a2);
    printf("\nEnter 2nd denominator: ");
    scanf("%d",&var.b2);

    sum_fraction(var);
    return 0;
}

int sum_fraction(struct variables var)
{
    struct fraction fr1;
    if(var.b1==var.b2)
        {
            fr1.n=var.a1+var.a2;
            fr1.d=var.b1;
            printf("\nSum of 2 fractions is %d/%d",fr1.n,fr1.d);
        }
    else
        {
            fr1.n=var.a1*var.b2+var.a2*var.b1;
            fr1.d=var.b1*var.b2;
            printf("\nSum of 2 fractions is %d/%d",fr1.n,fr1.d);
        }
}
