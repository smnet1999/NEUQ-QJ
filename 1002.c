#include<stdio.h>

int main(){
    int a,i;
    scanf("%d",&a);
    for(i=0;i<a;i++){
        int b,c;
        scanf("%d %d",&b,&c);
        printf("%d\n",b+c);
    }
    return 0;
}
