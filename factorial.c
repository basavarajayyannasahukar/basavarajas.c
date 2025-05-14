#include<stdio.h>
int main(){
    int n=5, result=1,i;
    if(n==0){
        printf("1");
    }
    else{
        for(i=1;i<=5;i++){
            result = result * i;
            printf("%d\n",result);
        }
        printf("%d",result);
    }
}
