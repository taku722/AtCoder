//over time
#include<iostream>
using namespace std;

int main(){
    int N, S, N1, N2, front=1, back;
    cin >> N;
    N1 = N/2;
    cout << "?" << N1 << endl;
    cin >> S;
    if(S==1){
        back = N1;
    }else if(S==0){
        front = N1;
        back = N;
    }
    for(int i=1; i<=20; i++){
        N1 = front+(back-front)/2;
        cout << "?" << N1 << endl;
        cin >> S;
        if(S==1){
            back = N1;
        }else if(S==0){
            front = N1;
        }
        if(back-front==1)break;
    }
    if(front!=back) cout << "!" << front << endl;
    return 0;
}