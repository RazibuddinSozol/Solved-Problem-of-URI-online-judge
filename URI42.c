#include <stdio.h>
int main()
{
    int a,b,c,x,y,z;
    scanf("%d%d%d",&a,&b,&c);
    if(a<b&&a<c)
        x=a;
    else if(b<a&&b<c)
        x=b;
    else if(c<a&&c<b)
        x=c;
    if(a>b&&a>c)
        y=a;
    else if(b>a&&b>c)
        y=b;
    else if(c>a&&c>b)
        y=c;
    if(a>x&&a<y)
        z=a;
    else if(b>x&&b<y)
        z=b;
    else if(c>x&&c<y)
        z=c;
    printf("%d\n%d\n%d\n",x,z,y);
    printf("\n");
    printf("%d\n%d\n%d\n",a,b,c);
    return 0;
}
