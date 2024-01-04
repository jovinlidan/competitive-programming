#include <bits/stdc++.h>
using namespace std;
 
int main(){
 
    long long T, n, t, s, mn = 1e9;
    cin >> T;
 
    for(int i = 0; i < T; i++){
        cin >> n >> s >> t;
        mn = min(s, t);
        cout << n-mn+1 << endl;
 
    }
 
 
 
return 0;
}