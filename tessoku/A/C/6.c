#include<stdio.h>

int main(void){
    int N, Q, sum=0;
    scanf("%d%d", &N, &Q);
    int  A[N], L[Q], R[Q], S[N];
    for(int i=1;i<=N;i++){
        scanf("%d", &A[i]);
        if(i==1){
            S[i] = A[i];
        }
        else{
            S[i] = S[i-1] + A[i];
        }
    }
    for(int i=1;i<=Q;i++){
        scanf("%d%d", &L[i],&R[i]);
        if(L[i]==1){
            sum = S[R[i]];
        }else{
            sum = S[R[i]] - S[L[i]-1];
        }
        printf("%d\n", sum);
        sum = 0;
    } 
    return 0;
}