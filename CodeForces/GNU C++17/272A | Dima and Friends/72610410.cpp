#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    cin >> n;
    int arr[n+5] = {};
    int total = 0;
    for(int i = 0;i < n; i++)
    {
        cin >> arr[i];
        total += arr[i];
    }
 
    int ans = 0;
    for(int i = 1; i <= 5; i++)
    {
        if((total + i-1) % (n+1) != 0)ans++;
 
    }
    cout << ans << endl;
 
 
 
 
 
    return 0;
}