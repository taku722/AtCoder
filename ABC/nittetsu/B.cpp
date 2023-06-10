#include<iostream>
using namespace std;

int main(){
    int N, M, count=0;
    cin >> N >> M;

    int A[M+1][N+1];
    for(int i=0; i<M; i++){
        for(int j=0; j<N; j++){
            cin >> A[i+1][j+1];
        }
    }
    int B[N];
    for(int i=1; i<=N; i++){
        B[i] = i;
    }
    for(int i=1; i<=N; i++){
        for(int j=1; j<=M; j++){
            for(int k=1; k<=N; k++){
                if(A[j][k]==i){
                    if(k!=1 && k!=N){
                        B[A[j][k+1]]=0;
                        B[A[j][k-1]]=0;
                        break;
                    }else if(k==N){
                        B[A[j][k-1]]=0;
                        break;
                    }
                    else if(k==1){
                        B[A[j][k+1]]=0;
                        break;
                    }
                }
            }
        }

        for(int l=1; l<=N; l++){
            if(B[l]!=0 && l>=i){
                count++;
            }
            B[l] = l;
        }
        count--;
    }
    
    cout << count << endl;

    return 0;
}