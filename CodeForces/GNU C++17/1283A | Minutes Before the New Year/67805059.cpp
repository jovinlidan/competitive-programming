#include <bits/stdc++.h>
 
using namespace std;
int main()
{
    int T, h, m, ans=0;
    cin >> T;
 
    while(T--){
        ans = 0;
        cin >> h >> m;
        ans += 60-m;
        h++;
        m = 0;
        ans += (24 - h) * 60;
        cout << ans <<endl;
    }
 
 
 
    return 0;
}