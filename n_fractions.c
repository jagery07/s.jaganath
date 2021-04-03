//WAP to find the sum of n fractions.
#include<stdio.h>
#include<stdlib.h>
struct fraction
{
    int num;
    int den;
};
struct fraction input_value();
struct fraction add_frac(struct fraction f1, struct fraction f2);
int greatest_common_denominator(int x, int y);
void print_values(struct fraction f1,struct fraction f2,struct fraction ans);

int main()
{
    struct fraction frac1, frac2, frac3;
    frac1=input_value();
    frac2=input_value();
    frac3=add_frac(frac1,frac2);
    print_values(frac1,frac2,frac3);
}

struct fraction input_value()
{
    struct fraction f1;
    printf("Enter numerator:\n");
    scanf("%d",&f1.num);
    printf("Enter denominator:\n");
    scanf("%d",&f1.den);
    return f1;
}

int greatest_common_denominator(int x, int y)
{
    int i,var;
    var=1;
    for (i=2;i<=x && i<=y;i++)
    {
        if ((x%i==0) && (y%i==0))
        {
            var=i;
        }
    }
    return var;
}

struct fraction add_frac(struct fraction f1, struct fraction f2)
{
    int gcd;
    struct fraction answer;
    answer.num=(f1.num*f2.den)+(f2.num*f1.den);
    answer.den=f1.den*f2.den;

    gcd=greatest_common_denominator(answer.num,answer.den);

    answer.num=answer.num/gcd;
    answer.den=answer.den/gcd;

    return answer;
}

void print_values(struct fraction f1,struct fraction f2,struct fraction answer)
{
    printf("Sum of %d/%d & %d/%d is %d/%d",f1.num,f1.den,f2.num,f2.den,answer.num,answer.den);
}
