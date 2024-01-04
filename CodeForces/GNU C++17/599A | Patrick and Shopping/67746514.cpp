#include <bits/stdc++.h>
using namespace std;
 
 
int main()
{
    int arr[3] = {}, ans;
    cin >> arr[0] >> arr[1] >> arr[2];
 
    int mn = 1e9;
    ans =0;
    ans += arr[1] + arr[0] + arr[2];
    mn = min(mn, ans);
 
    ans=0;
    ans += arr[1] + arr[0] + arr[1]+ arr[0];
 
    mn = min(mn, ans);
 
    ans = 0;
    ans+= arr[1] + arr[1] + arr[2] + arr[2];
    mn = min(mn, ans);
 
    ans = 0;
    ans += arr[0] + arr[0] + arr[2] + arr[2];
    mn = min(mn, ans);
 
    cout << mn << endl;
 
 
    return 0;
}