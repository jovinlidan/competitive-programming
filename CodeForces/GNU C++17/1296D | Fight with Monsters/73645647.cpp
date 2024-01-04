#include <bits/stdc++.h>
#define lli long long int
using namespace std;
int main()
{
 lli n, a, b, k, cnt = 0, temp;
 cin >> n >> a >> b >> k;
 vector<lli> arr;
 for(int i = 1; i <= n ; i++)
 {
  cin >> temp;
  temp %= (a+b);
  if(temp <= a && temp != 0)
  {
   cnt++;
  }
  else arr.push_back(temp);
 }
 lli length = arr.size();
    for(int i = 0; i < length; i++)
 {
  if(arr[i] == 0)
  {
   arr[i] = b;
   arr[i] = ceil(arr[i] * 1.0 / a);
  }else
  {
   arr[i] = ceil(arr[i] * 1.0 / a) - 1;
  }
 }
 sort(arr.begin(), arr.end());
 
 for(int i = 0; i < length && k != 0; i++)
 {
  if(k - arr[i] >= 0)
  {
   cnt++;
   k -= arr[i];
  }else break;
 
 }
 cout << cnt << endl;
 
 
 
 
 return 0;
}