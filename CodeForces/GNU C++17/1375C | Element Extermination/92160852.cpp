#include <bits/stdc++.h>
#define lli unsigned long long int
#define mxN 100005
#define INF 10e18
 
using namespace std;
typedef pair<lli,int> pii;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
 
 
    int tc;
    cin >> tc;
    while(tc--)
    {
        int n, low, high, tmp;
        cin >> n;
        for(int i = 1; i <= n; i++)
        {
            cin >> tmp;
            if(i == 1)low = tmp;
            if(i == n)high = tmp;
        }
        if(low < high)cout << "YES\n";
        else cout << "NO\n";
    }
 
    return 0;
}