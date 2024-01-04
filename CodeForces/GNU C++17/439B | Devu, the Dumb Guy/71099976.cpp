#include <bits/stdc++.h>
#define lli long long int
using namespace std;
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
 
 lli n, x, arr[100005] = {};
 cin >> n >> x;
 for(int i = 0; i < n; i++)
 {
  cin >> arr[i];
 }
 sort(arr, arr+n);
 lli total = 0;
 for(int i = 0; i < n; i++)
 {
  x = max(x, 1LL);
  total += (arr[i] * x);
  x--;
 }
 cout << total << endl;
 
 
 
 
 
 
 
 
 
 
 
 
 return 0;
}