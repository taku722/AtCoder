#include<iostream>
using namespace std;

int main(){
    int s=0, e=0, count=0, len=0;
    char p, q;
    char str[24]={'A',1,1,'B','C',1,1,1,'D','E',1,1,1,1,'F',1,1,1,1,1,1,1,1,'G'};
    cin >> p >> q;

    for(int i=0; i<24; i++){
        if(p!=q && (p==str[i] || q==str[i])){
            if(count==0){
                s=i;
                count = 1;
            }else if(count==1){
                e=i;
                break;
            }
        }
    }
    if(p==q){
        cout << 0 << endl;
    }else{
        len = e-s;
        cout << len << endl;
    }
    
    return 0;
}