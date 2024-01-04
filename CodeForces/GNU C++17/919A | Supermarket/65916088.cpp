#include <bits/stdc++.h>
using namespace std;
int main(){
    int nSupermarket, needKilo = 0, i, j, counts=0;
    long double ans = 0, mn = 1e9, a, b;
 
    cin >> nSupermarket >> needKilo;
    for(i = 0; i < nSupermarket; i++){
        cin >> a >> b;
        ans = a/b;
        mn = min(mn, ans);
 
 
    }
    cout << fixed << setprecision(8) << mn * needKilo << endl;
 
return 0;
}