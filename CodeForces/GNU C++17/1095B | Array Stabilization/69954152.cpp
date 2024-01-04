#include <bits/stdc++.h>
using namespace std;
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
 int n;
 cin >> n;
 int arr[100005] = {};
 for(int i = 1; i <= n; i++)
 {
  cin >> arr[i];
 }
 sort(arr, arr+n+1);
 
 int mn = min(arr[n-1] - arr[1], arr[n] - arr[2]);
 cout << max(mn, 0) << endl;
 
 
 
 
 
 
 
 
 return 0;
}