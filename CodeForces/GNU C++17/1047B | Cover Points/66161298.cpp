#include <bits/stdc++.h>
 
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
 
    long long int n, a, b, maxs=-1e9;
 
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a >> b;
        maxs = max (maxs, a+b);
    }
 
    cout << maxs << endl;
 
 
 
 
 
return 0;
}