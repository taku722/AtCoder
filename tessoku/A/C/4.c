#include<stdio.h>

int main(void){
    int N, A[100];
    scanf("%d", &N);
    for(int i=1; i<=10; i++){
        A[i] = N%2;
        N = N/2;
        if(N == 1){
            A[i+1] = 1;
            i++;
            N = 0;
        }
    }
    for(int i=10; i>=1; i--){
        printf("%d", A[i]);
    }
    printf("\n");
    return 0;
}