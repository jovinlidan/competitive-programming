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
        int n;
        cin >> n;
        int arr[n+2] = {};
        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr+n);
        int tmp = 0, mx = 0;
        for(int i = 0; i < n; i++)
        {
            tmp++;
            if(tmp == arr[i])
            {
                mx++;
                tmp= 0;
            }
        }
        cout << mx << '\n';
 
 
    }
 
    return 0;
}