#include <stdio.h>
int main()
{
    int a,b=3600,c,d=60,e;
    scanf("%d",&a);
    if(a>60){
    c=a%b;
    e=c%d;
    printf("%d:%d:%d\n",a/b,c/d,e);
    }
    else{
        printf("%d:%d:%d\n",a/b,c/d,a);
    }
    return 0;
}
