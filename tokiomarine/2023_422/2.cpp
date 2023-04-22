#include<iostream>
using namespace std;

int main(){
    int N, T, flag=0, Ans1=0, Ans2=0, win1=0, win2=0;
    
    cin >> N >> T;
    int C[N], R[N];
    for(int i=0; i<N; i++){
        cin >> C[i];
    }
    for(int i=0; i<N; i++){
        cin >> R[i];
    }
    for(int j=0; j<N; j++){
        if(C[j] == T){
            flag = 1;
            if(R[j]>Ans1){
                Ans1 = R[j];
                win1 = j+1;
            }
        }else if((C[j] == C[0]) && (flag != 1)){
            if(R[j]>Ans2){
                Ans2 = R[j];
                win2 = j+1;
            }
        }
    }
    if(flag == 1){
        cout << win1 << endl;
    }else if(flag != 1){
        cout << win2 << endl;
    }

    return 0;
}