#include <stdio.h>
int main()
{
    int n,b=100,a,e,i,c,f,k,g,l,m,afa,p,q,r,t,u,v,x,y,z, h=50,j=20,o=10,s=5,w=2,ara=1;
    scanf("%d",&n);
    a=n/b;
    printf("%d nota (s) de R$ %d\n",a,b);
    e=a*b;
    i=n-e;
    c=i/h;
    printf("%d nota (s) de R$ %d\n",c,h);
    f=h*c;
    k=(i-f);
    g=k/j;
    printf("%d nota (s) de R$ %d\n",g,j);
    l=g*j;
    afa=m/o;
    printf("%d nota (S) de R$ %d\n",afa,o);
    p=o*afa;
    q=(m-p);
    r=q/s;
    printf("%d nota (s) de R$ %d\n",r,s);
    t=r*s;
    u=(q-t);
    v=u/w;
    printf("%d nota (s) de R$ %d\n",v,w);
    x=w*v;
    y=(u-x);
    z=y/ara;
    printf("%d nota (s) de R$ %d\n",z,ara);
    return 0;
}
