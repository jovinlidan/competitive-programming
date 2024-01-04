#include <bits/stdc++.h>
#define lli long long int
using namespace std;
 
int main()
{
 ios_base::sync_with_stdio(false);
 cout.tie(0);
 cin.tie(0);
 lli n, temp, arr[100005]= {};
 cin >> n;
 lli total = 0;
    for(int i = 1; i <= n; i++)
 {
  cin >> arr[i];
  total += arr[i];
 }
 sort(arr+1, arr+1+n);
 
 if(total % 2 == 0 && arr[n] <= (total-arr[n]))
 {
  cout << "YES\n";
 }else cout << "NO\n";
 
 return 0;
}