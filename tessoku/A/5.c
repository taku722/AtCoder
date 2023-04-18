#include<stdio.h>

int main(void){
    int N, K, flag=0, s;
    scanf("%d %d", &N, &K);
    for(int i=1; i<=N; i++){
        for(int j=1; j<=N; j++){
            s = K-i-j;
            if(s<=N && s>=1){
                flag++;
            }
        }
    }
    printf("%d\n", flag);
    return 0;
}