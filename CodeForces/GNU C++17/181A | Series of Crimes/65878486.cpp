#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, m , i, countsA[105]={}, j, countsB[105]={};
    char table[105][105];
    cin >> n >> m;
    for(i = 1; i <= n; i++){
 
        for(j = 1; j <= m; j++){
            cin >> table[i][j];
            if(table[i][j] == '*'){
                countsA[i]++;
                countsB[j]++;
               // cout  << counts[i] << " INI COUNTS " << counts[j]<< endl;
            }
        }
    }
 
    for(i = 1; i <= n; i++){
        for(j = 1; j <= m; j++){
          //  cout << counts[i] <<" " << counts[j] << i << " " << j << endl;
            if(countsA[i] == 1 && countsB[j] == 1){
                cout << i << " " << j<< endl;
                break;
            }
        }
    }
 
 
 
}
 