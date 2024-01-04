#include <bits/stdc++.h>
using namespace std;
int main()
{
   int n, m ,temp, idx = 0;
   cin >> n >> m;
   int arr[m+5] = {}, arr2[m+5] = {};
   for(int i = 0; i < m; i++)
   {
       cin >> arr[i];
       arr2[i] = arr[i];
   }
 
    sort(arr, arr+m, greater<int>());
    sort(arr2, arr2+m);
    int mx = 0, mn = 0;
    int nn = n;
    while(n--)
    {
        mx += arr[0];
        arr[0]--;
        sort(arr, arr+m, greater<int>());
    }
 
    while(nn--)
    {
        mn += arr2[0];
        arr2[0]--;
        if(arr2[0] == 0)arr2[0] = 1e9;
        sort(arr2, arr2+m);
    }
 
    cout << mx << " " << mn << '\n';
 
 
    return 0;
}