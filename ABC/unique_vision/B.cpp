#include<iostream>
#include<array>
using namespace std;

int main(){
    int H, W, flag=1;
    cin >> H >> W;

    string A[H+1][W+1], B[H+1][W+1];
    int count_A=0, count_B=0;

    for(int i=1; i<=H; i++){
        for(int j=1; j<=W; j++){
            cin >> A[i][j];
            if(A[i][j]=="#"){
                count_A++;
            }
        }
    }
    for(int i=1; i<=H; i++){
        for(int j=1; j<=W; j++){
            cin >> B[i][j];
            if(B[i][j]=="#"){
                count_B++;
            }
        }
    }
    if(count_A==count_B){
        cout << "No" << endl;
        return 0;
    }
    for(int k=1; k=W; k+;){
        string esc1, esc2;
        esc1 = A[1][2];
        A[1][2] = A[1][1];
        for(int i=3; i<=W; i++){
            esc2 = A[1][i];
            A[1][i] = esc1;
            esc1 = esc2;
        }
        A[1][1] = esc1;
        string first[] = A[1];
        for(int j=2; j<=H; j++){
            string second[] = B[j];
            if(first == second){
                s = j;
                t = k;
            }   
        }
    }
    
    

    if(flag==1){
        cout << "Yes";
    }
    cout << endl;
    return 0;
}