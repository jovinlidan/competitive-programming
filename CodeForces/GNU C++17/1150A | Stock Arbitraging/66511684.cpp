#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n, m, r, mn=1e9, mx = -1e9, nTemp, mTemp, i, temp;
    cin >> n >> m >> r;
 
    for(i = 0; i < n; i++){
        cin >> nTemp;
        mn = min(mn, nTemp);
    }
    for(i = 0; i < m; i++){
        cin >> mTemp;
        mx = max(mx, mTemp);
    }
 
    if(mn < mx){
        temp = r / mn;
        r = r % mn;
        r += (temp * mx);
 
    }
 
    cout << r << endl;
 
 
 
 
 
return 0;
}