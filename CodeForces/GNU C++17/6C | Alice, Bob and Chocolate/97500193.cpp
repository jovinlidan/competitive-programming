#include <bits/stdc++.h>
using namespace std;
#define mxN 200005
typedef long long int ll;
typedef pair<int, int> pii;
typedef pair<int, pair<int, int>> piii;
 
 
 
int main()
{
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    int n;
    cin >> n;
    int arr[n+5] = {};
 
    for(int i = 0; i < n; i++)cin >> arr[i];
    int l = 0, r= n-1, x = 0, y = 0;
    bool vis[n+5] = {};
    while(l <= r)
    {
        if(arr[l] < arr[r])
        {
            vis[r] = 1;
            arr[r]-=arr[l];
            arr[l] = 0;
            l++;
            x++;
        }
        else if(arr[l] == arr[r])
        {
            if(l == r)
            {
                if(!vis[r])x++;
                else y++;
                break;
            }
            arr[r] = 0;
            arr[l] = 0;
            l++;
            r--;
            x++;
            y++;
        }
        else
        {
            arr[l]-=arr[r];
            arr[r] = 0;
            r--;
            y++;
        }
    }
 
    //if(arr[l] != 0)x++;
    cout << x << " " << y << '\n';
    return 0;
}