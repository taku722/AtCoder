#include<iostream>
using namespace std;
#include <cmath>

int main(){
    int A[64];
    for(int i=0; i<64; i++){
        cin >> A[i];
    }
    
    unsigned long long sum=0;
    unsigned long long p[64];
    for(int i=0; i<=63; i++){
        p[i] = std::pow(2,i);
    }
    for(int i=0; i<=63; i++){
        sum = sum + A[i]*p[i];
    }

    cout << sum << endl;

    return 0;
}