#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c,p,r1,r2;
    scanf("%lf%lf%lf",&a,&b,&c);
    p=b*b-4*a*c;
    if(a==0||p<0){
        printf("Impossivel calcular\n");
    }
    else{
        r1=(-b+sqrt(p))/(2*a);
        r2=(-b-sqrt(p))/(2*a);
        printf("R1 = %0.5lf\n",r1);
        printf("R2 = %0.5lf\n",r2);
    }
    return 0;
}
