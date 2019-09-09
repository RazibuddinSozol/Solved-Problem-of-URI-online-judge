#include <stdio.h>
int main()
{
    int a,c,e,f;
    scanf("%d",&a);
    if(a>=365||a>=30&&a<365||c>=30&&c<365){
        c=a%365;
        e=c%30;
        printf("%d ano(s)\n",a/365);
        printf("%d mes(es)\n",c/30);
        printf("%d dia(s)\n",e);
        }
    if(a<30){
            printf("%d ano(s)\n",a/365);
            printf("%d mes(es)\n",c/30);
            printf("%d dia(s)\n",a);
      }
    return 0;
}
