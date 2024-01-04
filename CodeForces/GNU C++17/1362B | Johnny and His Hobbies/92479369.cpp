#include <bits/stdc++.h>
#define lli unsigned long long int
#define mxN 10005
using namespace std;
typedef pair<lli,int> pii;
 
template <typename Map>
bool key_compare (Map const &lhs, Map const &rhs) {
 
    auto pred = [] (decltype(*lhs.begin()) a, decltype(a) b)
                   { return a.first == b.first; };
 
    return lhs.size() == rhs.size()
        && std::equal(lhs.begin(), lhs.end(), rhs.begin(), pred);
}
int solve(int x)
{
    int ans = 0;
    while(x!= 0)
    {
        ans++;
        x/=2;
    }
    return ans;
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
        unordered_map<int, int> t1, t2;
        int n, mx = -1e9;
        cin >> n;
        int arr[n+5] = {};
        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
            t1[arr[i]]++;
            mx = max(mx, arr[i]);
        }
        int cnt = 1, ans = -1;
        int bits = solve(mx);
        mx = (1 << bits);
        while(cnt <= mx)
        {
            t2.clear();
            for(int i = 0; i < n; i++)t2[(cnt^arr[i])]++;
            //if(key_compare(t1, t2))
            if(t1==t2)
            {
                ans = cnt;
                break;
            }
            cnt++;
        }
        cout << ans << '\n';
 
 
 
    }
 
 
 
}