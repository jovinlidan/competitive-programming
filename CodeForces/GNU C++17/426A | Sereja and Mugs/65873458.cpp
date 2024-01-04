#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, s, a[105], ans=0;
 
    cin >> n >> s;
 
    for(int i = 0; i < n ; i++){
        cin >> a[i];
 
    }
    sort(a, a+n);
 
    for(int i = 0; i < n-1; i++){
        ans += a[i];
 
    }
    if(ans > s) cout << "NO\n";
    else cout << "YES\n";
 
 
 
 
 
}