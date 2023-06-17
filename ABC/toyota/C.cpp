#include<iostream>
#include <algorithm>
using namespace std;

int main(){
    int N;
    cin >> N;
    int A[3*N+1];
    for(int i=1; i<=3*N; i++){
        cin >> A[i];
    }
    
    int f[N+1], num[N+1];
    int flag=0;
    for(int i=1; i<=N; i++){
        for(int j=1; j<=3*N; j++){
            if(A[j]==i){
                flag++;
                if(flag==2){
                    f[i] = j;
                    flag = 0;
                    break;
                }
            }
        }
        num[i] = i;
    }
    int esc=0, n_e=0;
    for(int i=1; i<N; i++){
        esc = f[i];
        for(int j=i; j<=N; j++){
            if(esc > f[j]){
                f[i] = f[j];
                f[j] = esc;
                esc = f[i];
                n_e = num[i];
                num[i] = num[j];
                num[j] = n_e;
            }
        }
    }
    for(int i=1; i<=N; i++){
        cout << num[i] << " ";
    }
    cout << endl;
    
    return 0;
}