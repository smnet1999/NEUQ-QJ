#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,k=0,m = 0,n=0;
    for(i=0;i<20;i++){
        scanf("%d",&j);
        if(j<0) k++;
        else if(j>0){
            m = m+j;
            n++;
        }
    }
    float a = m;
    float b = n;
    float f = a/b;
    printf("%d\n",k);
    printf("%.2f\n",f);
}
