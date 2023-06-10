#include<iostream>
using namespace std;

int main(){
    int H, W, a_i=0, a_j=0;;
    cin >> H >> W;
    char str[H+1][W+1];
    char c;
    for(int i=1; i<=H; i++){
        for(int j=1; j<=W; j++){
            cin >> c;
            str[i][j]=c;
        }
    }
    for(int i=1; i<=H+1; i++){
        for(int j=1; j<=W+1; j++){
            if(str[i][j]=='.' && str[i+1][j]=='#' && str[i][j+1]=='#'){
                a_i = i;
                a_j = j;
            }else if(str[i][j]=='.' && str[i][j-1]=='#' && str[i][j+1]=='#'){
                a_i = i;
                a_j = j;
            }else if(str[i][j]=='.' && str[i-1][j]=='#' && str[i][j+1]=='#'){
                a_i = i;
                a_j = j;
            }else if(str[i][j]=='.' && str[i][j-1]=='#' && str[i+1][j]=='#'){
                a_i = i;
                a_j = j;
            }else if(str[i][j]=='.' && str[i][j-1]=='#' && str[i-1][j]=='#'){
                a_i = i;
                a_j = j;
            }else if(str[i][j]=='.' && str[i-1][j]=='#' && str[i+1][j]=='#'){
                a_i = i;
                a_j = j;
            }
        }
    }

    cout << a_i << " " << a_j << endl;
    
    return 0;
}