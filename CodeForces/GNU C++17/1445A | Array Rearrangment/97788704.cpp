#include <bits/stdc++.h>
#define mxN 10000005
#define INF -1e9
typedef long long int ll;
 
using namespace std;
typedef pair<int, int> pii;
 
const int mod = 1e9+7;
 
int main()
{
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    int tc;
    cin >> tc;
    while(tc--)
    {
        int n, x;
        cin >> n >> x;
        int a[n+5] = {}, b[n+5] = {};
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for(int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        sort(b, b+n, greater<int>());
        for(int i = 0; i < n; i++)
        {
            if(a[i] + b[i] > x)
            {
                a[0] = -1;
                break;
            }
        }
        if(a[0] == -1)cout << "No\n";
        else cout << "Yes\n";
 
 
    }
 
 
    return 0;
}