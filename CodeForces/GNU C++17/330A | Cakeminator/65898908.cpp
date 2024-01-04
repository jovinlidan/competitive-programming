#include <bits/stdc++.h>
using namespace std;
int main(){
    int r, c, i, j, ans=0, counts=0;
    char cake[15][15];
 
    cin >> r >> c;
    for(i = 0; i < r ; i++){
        for(j = 0; j < c; j++){
            cin >> cake[i][j];
        }
    }
    //cout<< endl;
    for(i = 0; i < r ; i++){
        for(j = 0; j < c; j++){
            if(cake[i][j] == '.'){
                counts++;
            }
            else if (cake[i][j] == 'S'){
                counts=0;
                break;
            }
        }
        if(counts != 0){
            for(j = 0; j < c; j++){
                cake[i][j] = '-';
            }
 
        }
        ans += counts;
        counts = 0;
    }
 
 
 
    for(i = 0; i < c; i++){
        for(j = 0; j < r; j++){
            //cout << cake[j][i];
            if(cake[j][i] == '.'){
                counts++;
 
            }else if(cake[j][i] == 'S'){
                counts = 0;
                break;
            }
        }
        if(counts != 0){
            for(j = 0; j < r; j++){
                cake[j][i] = '-';
            }
 
        }
        ans += counts;
        counts = 0;
 
    }
    cout << ans << endl;
 
 
 
 
 
 
 
 
return 0;
}