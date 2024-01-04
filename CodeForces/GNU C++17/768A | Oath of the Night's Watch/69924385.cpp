#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >>n;
    int arr[100010] = {};
    for(int i =1; i <= n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr+n+1);
 
    //bool left =true, right= true;
    int left = arr[1], right = arr[n], ans = 0, lI = 0, rI = 0;
    bool x=false, y= false;
    for(int i = 2; i <= n; i++)
    {
        if(arr[i] != left)
        {
            lI = i;
            x = true;
            break;
        }
        left = arr[i];
    }
 
    for(int i = n-1; i >= 1; i--)
    {
        if(arr[i] != right)
        {
            rI = i;
            y = true;
            break;
        }
        right = arr[i];
    }
    ans = rI-lI+1;
    if(x && y)
    {
    cout << ans << endl;
 
    }
    else cout << 0 << endl;
 
 
 
 
 
 
    return 0;
}