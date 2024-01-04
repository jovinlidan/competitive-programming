#include <bits/stdc++.h>
using namespace std;
int main(){
    int l, r, a, mn=0, ans=0;
    cin >> l >> r >> a;
 
    if(l > r){
        ans += r+r;
        l-=r;
        r = 0;
        mn = min(a, l);
        a -= mn;
        l -= mn;
        ans += mn+mn;
        ans += a - a % 2;
 
    }else if (r > l){
        ans += l+l;
        r-=l;
        l = 0;
        mn = min(a, r);
        a -= mn;
        r -= mn;
        ans += mn+mn;
        ans += a - a % 2;
 
    }else{
        ans+= l+r;
        l = 0;
        r =0;
        ans += a - a % 2;
 
 
 
    }
    cout << ans << endl;
 
 
 
 
 
 
 
 
 
 
 
return 0;
}