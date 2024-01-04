#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    int arr[200005] = {};
    int mx = INT_MIN, cnt = 0;
 
    for(int i = 0 ; i < n; i++) cin >> arr[i];
 
    for(int i = 0 ; i < n; i++)
    {
        if(arr[i] == 1)
        {
            cnt++;
            if(i == n-1)
            {
                for(int j = 0; j < n; j++)
                {
                    if(arr[j] == 1) cnt++;
                    else break;
                }
            }
        }
        else cnt = 0;
        mx = max(mx, cnt);
 
    }
 
    cout << mx << endl;
 
 
 
 
 
 
    return 0;
}