#include<stdio.h>

int main(void){
    int N, A[11];
    int i,j;
    scanf("%d", &N);
    for(i=0; i<10; i++){
        if(i<10 && N>1){
            A[i] = N%2;
            N = N/2;
        }else if(i<10 && N == 1){
            A[i] = 1;
            N = 0;
        }else if(N = 0){
            A[i] = N;
        }
    }
    for(j=i-1; j>=0; j--){
        printf("%d", A[j]);
    }
    printf("\n");
    return 0;
}