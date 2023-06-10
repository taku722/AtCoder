#include<iostream>
using namespace std;

int main(){
    int N, flag=1;
    
    cin >> N;
    string S, T;
    cin >> S >> T;
    
    for(int i=0; i<N; i++){
        if(S.substr(i, 1)==T.substr(i, 1)){
            continue;
        }else if((S.substr(i, 1)=="o" && T.substr(i, 1)=="0") || (S.substr(i, 1)=="0" && T.substr(i, 1)=="o")){
            continue;
        }else if((S.substr(i, 1)=="l" && T.substr(i, 1)=="1") || (S.substr(i, 1)=="1" && T.substr(i, 1)=="l")){
            continue;
        }else{
            flag = 0;
            break;
        }
    }

    if(flag==1){
        cout << "Yes";
    }else{
        cout << "No";
    }
    cout << endl;
    return 0;
}