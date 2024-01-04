#include <bits/stdc++.h>
 
using namespace std;
int main(){
    map <string, int> data;
    int i,n, j, counts=0, ans = 0, mx = -1e9;
    string kata, temp;
 
    cin >> n >> kata;
 
    for(i = 0; i < n-1; i++){
        temp = kata[i];
        temp += kata[i+1];
        //cout << temp;
        data[temp]+= 1;
        mx = max(mx, data[temp]);
    }
    for(i = 0; i < n-1; i++){
        temp = kata[i];
        temp += kata[i+1];
        if (mx == data[temp]){
            cout << temp    ;
            break;
        }
 
    }
 
 
 
 
 
 
 
return 0;
}