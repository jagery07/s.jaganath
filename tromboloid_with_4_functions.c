//WAP to find the volume of a tromboloid using 4 function
#include <stdio.h>
float input (int n)
{
    float a; 
    printf("Enter the dimension %d \n",n);
    scanf("%f",&a);
    return a;
}

float funcvol(float h, float d, float b)
{
    float volume;
    volume =( ((h * d * b) + d/b) /3);
    return volume;
}

float output(float h,float d,float b,float volume)
{
     printf("Volume of the tromboloid of height %f, depth %f and breadth %f is %f", h, d, b, volume);
}

int main () 
{
    int n;
    float h=input(n);
    float d=input(n);
    float b=input(n);
    float volume=funcvol(h,d,b);
    output(h,d,b,volume);
    return 0;
}
