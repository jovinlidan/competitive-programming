#include <bits/stdc++.h>
#define lli long long int
 
using namespace std;
 
 
 
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
 
    int n,temp;
 
    cin >> n;
 
    int arr[100005] = {};
    unordered_map<int, int> mp;
    for(int i = 0; i < n; i++)
    {
        cin >> temp;
        arr[temp]++;
        mp[arr[temp]]++;
    }
    int q;
    cin >> q;
    while(q--)
    {
        char x;
        cin >> x >> temp;
        if(x == '+')
        {
            arr[temp]++;
            mp[arr[temp]]++;
        }
        else
        {
            mp[arr[temp]]--;
            arr[temp]--;
        }
      //  for(int i = 1; i <= 10; i++)cout <<i << "-" << mp[i] << "\n";
        if(mp[8] >= 1)cout << "YES\n";
        else if(mp[4] >= 2)cout << "YES\n";
        else if(mp[6] >= 1 && mp[2] >= 2)cout << "YES\n";
        else if(mp[4] >= 1 && mp[2] >= 3)cout << "YES\n";
        else cout << "NO\n";
    }
 
 
    return 0;
}