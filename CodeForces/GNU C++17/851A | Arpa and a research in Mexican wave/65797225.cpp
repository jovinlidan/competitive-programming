#include <bits/stdc++.h>
using namespace std;
int main(){
 
    long long int i, j, n, t, k;
    cin >> n >> k >> t;
 
    if(t >= k && t <= n) cout << k;
    else if (t >=0 && t < k) cout << t;
    else if ( t > n ) cout << k - (t - n);
    cout << endl;
 
 
 
 
 
return 0;
}