#include<iostream>
using namespace std;

int main(){
    int N, t=0, a=0, ti=0, ai=0;
    
    cin >> N;
    string S;
    cin >> S;
    
    for(int i=0; i<N; i++){
        if(S.substr(i, 1)=="T"){
            t++;
            ti = i;
        }else{
            a++;
            ai = i;
        }
    }
    if(t>a){
        cout << "T";
    }else if(a>t){
        cout << "A";
    }else if(a==t && ti<ai){
        cout << "T";
    }else if(a==t && ai<ti){
        cout << "A";
    }
    cout << endl;
    return 0;
}