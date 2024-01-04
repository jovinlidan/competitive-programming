#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
 
    int x , y, z, t1, t2, t3, i, counts=0, hasil=0, eTime=0, sTime=0;
    cin >> x >> y >> z >> t1 >> t2 >> t3;
 
    sTime = (abs(x-y) * t1);
 
    eTime = ((abs(z-x)) * t2) + (2 * t3) + (abs(x - y) * t2) + t3;
 
    if(eTime <= sTime) cout <<"YES\n";
    else cout << "NO\n";
 
 
 
 
 
return 0;
}