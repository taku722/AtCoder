#include<iostream>
using namespace std;

int main(){
    int N;
    cin >> N;
    char str[N];
    for(int i=0; i<N; i++){
        cin >> str[i];
    }

    char str2[2*N];
    for(int i=0; i<N; i++){
        str2[2*i] = str[i];
        str2[2*i+1] = str[i];
    }
    for(int i=0; i<2*N; i++){
        cout << str2[i];
    }
    cout << endl;
    
    return 0;
}