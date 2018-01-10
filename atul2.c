#include<stdio.h>
int main()
{
    int a[3];
    a=incr(a,3);
    printf("%d %d %d",a[0],a[1],a[2]);
}
int *incr(int a[], int n)
{
    int *p;
    int i;
    p=a;
    for ( i=0; i<3; i++)
        *(p+i)=*(p+i)+1;
    return p;
}

