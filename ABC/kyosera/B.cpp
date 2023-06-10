#include<iostream>
using namespace std;

int main(){
    int N, ans=0, esc1=0, esc2=0;
    cin >> N;
    int A[20000];
    for(int i=0; i<N; i++){
        cin >> A[i];
    }
    
    for(int i=0; i<N-1; i++){
        ans = A[i+1]-A[i];
        if(ans!=1&&ans!=-1){
            if(A[i]<A[i+1]){
                N++;
                esc1=A[i+1];
                esc2=A[i+2];
                A[i+1]=A[i]+1;
                for(int j=i+2; j<N; j++){
                    A[j]=esc1; 
                    esc1 = esc2;
                    if(j!=N-1){
                        esc2=A[j+1];
                    }
                }
            }else if(A[i]>A[i+1]){
                N++;
                esc1=A[i+1];
                esc2=A[i+2];
                A[i+1]=A[i]-1;
                for(int j=i+2; j<N; j++){
                    A[j]=esc1; 
                    esc1=esc2;
                    if(j!=N-1){
                        esc2=A[j+1];
                    }
                }
            }
        }
    }

    for(int i=0; i<N; i++){
        cout << A[i] << " ";
    }
    cout << endl;

    return 0;
}