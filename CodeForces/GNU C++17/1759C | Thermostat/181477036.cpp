#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
 
    
        int tc, n, m, temp, l, r, x, a, b;
        cin >> tc;
 
        while(tc--){
            cin >> l >> r >> x >> a >> b;
 
            if(a > b){
                temp = b;
                b = a;
                a = temp;
            }
            if(l > r){
                temp = r;
                r = l;
                l = temp;
            }
 
            if(a == b){
                cout << 0 << '\n';
            }
            else if(abs(a-b) >= x){
                cout << 1 << '\n';
            }
            
            else {
                int aa = abs(a - l);
                int bb = abs(b - r);
                if(r-x >= b || l+x <= a){
                    cout << 2 << '\n';
                }
                else if(l + x <= b && r - x >= a){
                    cout << 3 << '\n';
                }
                else {
                    cout << -1 << '\n';
                }
            }
 
            
        }
 
    
 
 
    return 0;
}
 