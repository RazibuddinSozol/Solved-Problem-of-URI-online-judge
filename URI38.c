#include <stdio.h>
int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    if(x>=1&&x<6){
    if(x==1)
        printf("Total: R$ %0.2lf\n",4.00*y);
    else if(x==2)
        printf("Total: R$ %0.2lf\n",4.50*y);
    else if(x==3)
        printf("Total: R$ %0.2lf\n",5.00*y);
    else if (x==4)
        printf("Total: R$ %0.2lf\n",2.00*y);
    else if(x==5)
        printf("Total: R$ %0.2lf\n",1.50*y);
    }
    return 0;
}
