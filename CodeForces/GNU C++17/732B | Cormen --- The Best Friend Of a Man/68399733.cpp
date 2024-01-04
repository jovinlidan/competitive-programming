#include <bits/stdc++.h>
using namespace std;
int main()
{
 int n, k, arr[510]={}, total=0;
 cin >> n>> k;
 
 for(int i = 1; i <= n; i++)
 {
  cin >> arr[i];
 }
 for(int i = 2; i <= n; i++)
 {
  if(arr[i] + arr[i-1] < k)
  {
   int ans = k - (arr[i] + arr[i-1]);
   total += ans;
   arr[i] += ans;
  }
 
 }
 cout << total << endl;
 for(int i = 1; i <= n; i++)
 {
  if(i > 1) cout << " ";
  cout << arr[i];
 
 }
 cout << endl;
 
 
 
 
 
 return 0;
}
 