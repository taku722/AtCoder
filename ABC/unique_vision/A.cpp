#include<iostream>
using namespace std;

int main(){
    int N, A, B, ans;
    
    cin >> N >> A >> B;
    int C[N+1];
    for(int i=1; i<=N; i++){
        cin >> C[i];
    }
    ans = A+B;
    for(int i=1; i<=N; i++){
        if(ans == C[i]){
            cout << i;
            break;
        }
    }
    cout << endl;
    return 0;
}