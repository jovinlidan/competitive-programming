#include <bits/stdc++.h>
#define lli long long int
#define mxN 100005
using namespace std;
 
 
int mods(int k, int n)
{
    return ((k%n)+n )% n;
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
 
    int tc;
    cin >> tc;
    while(tc--)
    {
        int n;
        bool valid = 1;
        unordered_map<lli, int> mp;
        cin >> n;
        int arr[n+2] = {};
        for(int i = 0; i < n; i++)cin >> arr[i];
 
        for(int i = 0; i < n; i++)
        {
            lli idx = (i+ arr[mods(i, n)]);
            idx = (mods(idx, n));
            if(mp[idx])
            {
                valid = 0;
                break;
            }
            mp[idx]++;
 
        }
        if(valid)cout << "YES\n";
        else cout << "NO\n";
 
    }
 
}