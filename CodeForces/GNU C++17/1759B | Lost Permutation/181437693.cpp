#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
 
    
        int tc,n, m, temp, mx = -1e9;
        cin >> tc;
        unordered_map<int, bool> mp;
 
        while(tc--){
            mp.clear();
            mx = -1e9;
            cin >> n >> m;
            for(int i = 0; i < n; i++){
                cin >> temp;
                mx = max(mx, temp);
                mp[temp] = true;
            }
            int sum = 0;
            for(int i = 1 ;i <= mx ;i++){
                if(!mp[i])sum+=i;
            }
            while(sum < m){
                sum += ++mx;
            }
            // cout << sum << " - " << m << '\n';
            if(sum == m)cout << "YES\n";
            else cout << "NO\n";
 
            
        }
 
    
 
 
    return 0;
}
 