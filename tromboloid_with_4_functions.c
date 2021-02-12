//WAP to find the volume of a tromboloid using 4 functions.
#include <stdio.h>
int inp1()
{
    int b;
    printf("enter bredth \n");
    scanf("%d",&b);
    return b;
}

int inp2()
{
    int h;
    printf("Enter height \n");
    scanf("%d",&h);
    return h;
}

int inp3()
{
    int d;
    printf("Enter depth \n");
    scanf("%d",&d);
    return d;
}

int vol(int b,int h,int d)
{
    int vt;
    vt=(0.3333)*((b*h*d)+(d/b));
    
}

int out(int b,int h,int d, int v)
{
    printf("Volume of tromboloid is %d \n",v);
}

int main()
{
    int w,x,y,z;
    w=inp1();
    x=inp2();
    y=inp3();
    z=vol(w,x,y);
    out(w,x,y,z);
}


