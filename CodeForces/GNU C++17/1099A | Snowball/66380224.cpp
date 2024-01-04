#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int w, h, w1, w2, h1, h2, i, ans=0;
 
    cin >> w >> h >> w1 >> h1 >> w2 >> h2;
 
    ans = w;
    for(i = h; i>= 1; i--){
        ans += i;
        if( i == h1){
            ans -= w1;
        }
        if( i == h2){
            ans -= w2;
        }
        ans = max(0, ans);
 
    }
 
    cout << max(0, ans) << endl;
 
 
 
 
 
 
 
return 0;
}