#include <bits/stdc++.h>
#define lli long long int
using namespace std;
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
 lli n, d, factor, money, left = 0, right= 0, total= 0, mx = INT_MIN;
 vector<pair<lli, lli>> arr;
 cin >> n >> d;
 for(int i = 0; i < n; i++)
 {
  cin >> money >> factor;
  arr.push_back({money, factor});
 }
 sort(arr.begin(), arr.end());
 
 for(int i = 0; i < n; i++)
 {
  total += arr[i].second;
  while(abs(arr[right].first - arr[left].first) >= d)
  {
   total -= arr[left].second;
   left++;
  }
  mx = max(mx, total);
  right++;
 
 }
 cout << mx << endl;
 
 
 
 
 
 
 
 
 return 0;
}