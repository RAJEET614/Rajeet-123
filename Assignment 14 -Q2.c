#include<stdio.h>
 float si(float,float,float);
int main()
{
    float p=4,r=2,t=1,k;
    k=si(p,r,t);
    printf("Simple interest is %f",k);
}
float si(float p,float r,float t)
{
    float c;
    c=p*r*t/100;
    return c;
}
