#include<iostream>
#include <stdio.h>
#include <string>
using namespace std;

int main(){
    int N, K, L=0;
    cin >> N >> K;
    int A[N+1], num=0;
    for(int i=1; i<=N; i++){
        cin >> A[i];
        num = num+i;
    }
    int dic[num], d=0;
    for(int i=1; i<=N; i++){
        L = i;
        for(int R=i; R<=N; R++){
            int esc[N], j=R;
            for(int i=0; i<N; i++){
                esc[i] = A[i+1];
            }
            for(int i=L-1; i<R; i++){
                esc[i] = A[j];
                j--;
            }
            std::string str;
            for (int k: esc) {
                str.push_back(k + '0');
            }
            dic[d] = stoi(str);
            // cout << dic[d] << endl;
            d++;
        }
    }
    int esc_d=0;

    for(int i=1; i<num; i++){
        for(int j=i; j>=1; j--){
            if(dic[j]<dic[j-1]){
                esc_d = dic[j];
                dic[j]=dic[j-1];
                dic[j-1]=esc_d;
            }
        }
    }
    string S = to_string(dic[K-1]);
    for(int i=0; i<N; i++){
        cout << S.at(i) << " ";
    }
    cout << endl;
    return 0;
}