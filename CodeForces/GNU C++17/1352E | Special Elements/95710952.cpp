#include <bits/stdc++.h>
#define mxN 200005
using namespace std;
typedef  long long int  ll;
typedef pair<ll, ll> pii;
 
 
int main()
{
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int tc;
    cin >> tc;
    while(tc--)
    {
        int n, temp;
        cin >> n;
        int mp[8005] = {}, arr[n+5] = {};
 
        ll ans = 0;
 
        ll sum = 0;
        for(int i  = 0; i < n; i++)
        {
            cin >> temp;
            sum += temp;
            mp[temp]++;
            arr[i] = temp;
        }
       // set<int>::iterator it = arr.begin();
        sum = 0;
        for(int i = 0; i < n; i++)
        {
            sum = 0;
            for(int j = i; j < n ;j++)
            {
                sum += arr[j];
                if(sum > n)break;
                if(j - i >= 1)
                {
                    ans += mp[sum];
                    mp[sum] = 0;
                }
 
            }
 
 
 
        }
        cout << ans << '\n';
    }
 
 
    return 0;
}