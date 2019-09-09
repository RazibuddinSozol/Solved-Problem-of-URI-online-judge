#include <stdio.h>
int main()
{
    double a,b,c,d,e,f,g;
    scanf("%lf%lf%lf%lf",&a,&b,&c,&d);
    e=(a*2+b*3+c*4+d*1)/10;
    printf("Media: %0.1lf\n",e);
    if(e>=5.0&&e<=6.9){
        printf("Aluno em exame.\n");
        scanf("%lf",&f);
        printf("Nota do exame: %0.1lf\n",f);
        g=(e+f)/2.0;
    if(g>=5.0){
        printf("Aluno aprovado.\n");
        printf("Media final: %0.1lf\n",g);
    }
    else if(g<=4.9){
        printf("Aluno reprovado.\n");
        printf("Media final: %0.1lf\n",g);
    }
    }
    else if(e>=7.0){
     printf("Aluno aprovado.\n");
    }
    else if(e<5.0){
        printf("Aluno reprovado.\n");
    }
    return 0;
}
