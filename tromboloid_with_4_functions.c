//WAP to find the volume of a tromboloid using 4 function
#include <stdio.h>
float input();
float find_volume(float h,float d,float b);
void output(float h,float d,float b,float v);
int main()
{
    float x,y,z,volume;
    x=input();
    y=input();
    z=input();
    volume=find_volume(x,y,z);
    output(x,y,z,volume);
    return 0;
}

float input()
{
    int h;
    printf("Enter a number: ");
    scanf("%d",&h);
    return h;
}

float find_volume(float h, float d, float b)
{
    float v;
    v=0.333333*((h*d*b)+(d/b));
    return v;
}

void output(float h, float d, float b,float v)
{
    printf("\nvolume of tromboid with h %f,  d %f and b %f is: %f\n",h,d,b,v);
}
