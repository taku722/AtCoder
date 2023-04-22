#include<iostream>
using namespace std;

int main(){
    int N, sum1=0, sum2=0, flag=0;
    string S;
    
    cin >> N;
    N = N-1;
    cin >> S;
    
    for(int i=0; i<=N; i++){
        if(S.at(i) == 'o'){
            sum2 = sum2+1;
            if(sum2 > sum1){
                sum1 = sum2;
            }
        }else if(S.at(i) == '-'){
            sum2 = 0;
            flag = 1;
        }
    }

    if(sum1 != 0 && flag == 1){
        cout << sum1;
    }else if(sum1 == 0 || flag == 0){
        cout << -1;
    }
    cout << endl;
    return 0;
}