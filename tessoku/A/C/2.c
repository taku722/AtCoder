#include<stdio.h>

int main(void){
    int N, X, Flag=0;
    scanf("%d", &N);
    scanf("%d", &X);
    int A[N];
    for(int i=0;i<N;i++){
        scanf("%d", &A[i]);
    }
    for(int i=0;i<N;i++){
        if(X == A[i]){
            Flag = 1;
        }
    }
    if(Flag==1){
        printf("Yes");
    }else{
        printf("No");
    }
    return 0;
}