#include <stdio.h>
int main()
{

    double a,b,c,d;
    char ch[50];
    scanf("%s",&ch);
    scanf("%lf %lf",&a,&b);
    c=b*15/100;
    d=a+c;
    printf("TOTAL = R$ %0.2lf\n",d);
    return 0;
}
