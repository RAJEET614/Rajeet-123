#include<stdio.h>
void number(int n);
int main()
{
    int n,k;
    scanf("%d",&n);
    number(n);


}
void number(int n)
{
    int i;
    for(i=1;i<=n;i++)
    printf("%d ",i);

}
