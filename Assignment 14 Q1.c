#include<stdio.h>
float area(int r);
int main()
{
    int k,r=10;
    k=area(r);
    printf("Area of circle is %d",k);
    return  0;

}
float area(int r)
{
    int c;
    c=3.14*r*r;
    return c;
}
