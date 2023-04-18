#include<iostream>
using namespace std;

int main(){
    int N, A[100];
    
    cin >> N;
    for(int i=1; i<=10; i++){
        A[i] = N%2;
        N = N/2;
        if(N==1){
            A[i+1] = 1;
            N = 0;
            i++;
        }
    }
    for(int i=10; i>=1; i--){
        cout << A[i];
    }
    cout << endl;
    return 0;
}