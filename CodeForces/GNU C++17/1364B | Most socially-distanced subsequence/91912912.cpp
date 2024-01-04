#include <bits/stdc++.h>
#define lli long long int
using namespace std;
 
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    int tc;
    cin >> tc;
    while(tc--)
    {
        int n, mins = 1e9, cnt = 0;
        unordered_map<int, bool> mp;
        cin >> n;
        int arr[n+5] = {};
        for(int i = 0 ; i < n; i++)cin >> arr[i];
 
        for(int i = 1; i < n-1; i++)
        {
            int mn = min(arr[i-1], arr[i+1]);
            int mx = max(arr[i-1], arr[i+1]);
            if(arr[i] > mn && arr[i] < mx)
            {
               cnt++;
               mp[i] = 1;
 
            }
        }
        cout << n-(cnt) << '\n';
        for(int i = 0; i < n; i++)
        {
            if(mp[i])continue;
            cout << arr[i] << " ";
        }
        cout << '\n';
 
    }
 
    return 0;
}