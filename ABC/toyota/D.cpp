#include<iostream>
using namespace std;

int main(){
    int N, Q, count=0;
    cin >> N;
    int A[N+1];
    for(int i=1; i<=N; i++){
        cin >> A[i];
    }
    cin >> Q;
    int l[Q+1], r[Q+1], ans[Q+1];
    for(int i=1; i<=Q; i++){
        cin >> l[i] >> r[i];
    }
    int time=0, flag=0;
    for(int i=1; i<=Q; i++){
        for(int j=1; j<=N; j++){
            if(A[j]>l[i] && count==0){
                if(j%2==0){
                    s = A[j];
                }else if(j%2==1){
                    s = l[i];
                    flag=1;
                }
                count=1;
            }else if(A[j]>r[i] && count==1){
                if((j-1)%2==0){
                    e = r[i];
                    time = time + (A[j-1]-e);
                    break;
                }else if((j-1)%2==1){
                    break;
                }
            }
            else if(count==1 && j%2==1){
                if(flag==1){
                    time = time + (A[j]-s);
                }else{
                    time = time + (A[j]-A[j-1]);
                }
            }
        }
        cout << Q[i] << endl;
    }

    return 0;
}