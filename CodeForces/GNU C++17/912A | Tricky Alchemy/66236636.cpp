#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    long long int a, b, x, y, z, ans=0, nYell, nBlue, zero=0;
    cin >> a >> b >> x >> y >> z;
 
    nYell = max(zero, ((((2 * x) + y)) - a));
 
    nBlue = max(zero,((((3 * z) + y ))- b) );
    ans = nYell + nBlue;
 
    cout << ans << endl;
 
 
 
return 0;
}