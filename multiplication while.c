#include <stdio.h>
int num,i=1;
int main() {
    scanf("%d",&num);
    while(i<=10){
        printf("%d*%d=%d\n",num,i,num*i);
        i++;
    }
}

