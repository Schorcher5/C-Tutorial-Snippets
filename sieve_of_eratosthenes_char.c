#include <stdio.h>

#define N 1000

int main(){
    int i, j; 
    char a[N];
    for(i = 2; i< N; i++) a[i]='1';
    for(i = 2; i<N; i++){
        if (a[i] == '1'){
            for(j=i; i*j < N; j++)a[i*j] = '0';
        }
    }

    int total = 0;

    for(i = 2; i<N; i++){
        if(a[i] == '1'){
            printf("%4d ",i);
            total += 1;
        }
        printf("\n");
    }printf("%4d \n",total);

    for(int i = 0; i<total; i+=10){
        printf("*");
    }
    printf("\n");

    for(int i = 0; i<N; i+=10){
        printf("#");
    }printf("\n");
    return 0;
}
