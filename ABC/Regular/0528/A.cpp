#include<iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int N;
    cin >> N;
    int flag=0, max=0, min=0;

    std::vector<int> A(N);
	for (auto& a : A){
		std::cin >> a;
	}
    sort(A.begin(), A.end());
    for(int i=N-1; i>=0; i--){
        if(A.at(i)!=A.at(N-1)){
            max = N-1-i;
            break;
        }
    }
    for(int i=0; i<N; i++){
        if(A.at(i)!=A.at(0)){
            min = i;
            break;
        }
    }
    int max2=0, num=1;
    for(int i=min; i<max; i++){
        if(A.at(i)=A.at(i-1)){
            num++;
        }else if(A.at(i)!=A.at(i-1)){
            num=1;
        }
        if(num>max2){
            max2=num;
        }
    }



    if(max>N/2 || min>(N/2)+2){
        flag=0;
    }else if(max2>=N/2){
        flag=0;
    }
    else{
        flag=1;
    }

    if(flag==1){
        cout << "Yes";
    }else{
        cout << "No";
    }
    
    cout << endl;
    return 0;
}