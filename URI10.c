#include <stdio.h>
int main()
{
    int a,b,d,e;
    double c,f,i,g,h;
    scanf("%d %d %lf",&a,&b,&c);
    scanf("%d %d %lf",&d,&e,&f);
    g=c*b;
    h=f*e;
    i=g+h;
    printf("VALOR A PAGAR: R$ %0.2lf\n",i);
    return 0;
}
