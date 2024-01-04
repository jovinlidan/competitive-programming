#include <bits/stdc++.h>
#define lli long long int
#define mxN 500005
#define INF 9999
 
using namespace std;
typedef pair<int,int> pii;
typedef pair<int,pii> piii;
typedef set<int> si;
typedef pair<si, pii>psii;
 
 
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
        int arr[n+5] = {};
 
        for(int i = 0; i < n; i++)cin >> arr[i];
        sort(arr, arr+n);
        vector<int> ans;
        if(n%2==1)
        {
            int lefts = (n/2);
            int rights = (n/2)+1;
            while(lefts >= 0 || rights <= n)
            {
                ans.push_back(arr[lefts]);
                ans.push_back(arr[rights]);
                lefts--;
                rights++;
            }
            ans.push_back(arr[0]);
        }
        else
        {
            int lefts = (n/2)-1;
            int rights = (n/2);
            while(lefts >= 0 || rights <= n)
            {
                ans.push_back(arr[lefts]);
                ans.push_back(arr[rights]);
                lefts--;
                rights++;
            }
 
 
        }
 
        for(int i = 0; i < n; i++)
        {
            cout << ans[i] << ' ';
        }
        cout << '\n';
 
 
    }
 
 
}