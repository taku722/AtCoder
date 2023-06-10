#include<iostream>
using namespace std;

int main(){
    int N, l1, l2, m, sum=0;
    string S;
    
    cin >> N;
    N = N-1;
    cin >> S;
    
    for(int i=0; i<N; i++){
        if(S.at(i) == '|'){
            sum = sum+1;
            if(sum == 1){
                l1 = i;
            }else if(sum == 2){
                l2 = i;
            }
        }else if(S.at(i) == '*'){
            m = i;
        }
    }
    if((l1 < m) && (m < l2)){
        cout << "in";
    }else{
        cout << "out";
    }
    cout << endl;
    return 0;
}