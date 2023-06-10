#include<iostream>
#include<cmath>
#include<iomanip>
#include<assert.h>
using namespace std;

bool IsPrime(int num)
{
    if (num < 2) return false;
    else if (num == 2) return true;
    else if (num % 2 == 0) return false;
    double sqrtNum = sqrt(num);
    for (int i = 3; i <= sqrtNum; i += 2){
        if (num % i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    int N, count=0, a, b, c, number=0;
    
    cin >> N;
    int p[N];
    max = N/12;
    sqrt(max);
    for(int i=2; i<=max; i+2){
        if(IsPrime(i)){
            p[number]=i;
            number++;
        }
    }
    for(int i=0; i<=number; i++){
        a = p[i];
        for(int j=i+1; j<=number; j++){
            b = p[j];
            for(int k=j+1; k<=number; k++){
                c = p[k];
                if((a**2)*b*(c**2)<=N){
                    count++;
                }else{
                    break;
                }
            }
        }   
    }

    cout << count << endl;
    return 0;
}