#include <bits/stdc++.h>
using namespace std;
 
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
 
 int n, mn = 1e10, cnt = 0, idx = -1;
 cin >> n;
 int arr[100005] = {};
 for(int i = 0; i < n; i++)
 {
  cin >> arr[i];
  if(arr[i] < mn)
  {
   mn = arr[i];
   cnt = 0;
   idx = i+1;
  }
  else if(arr[i] == mn)
  {
   cnt++;
  }
 
 }
 if(cnt == 0) cout << idx << "\n";
 else cout << "Still Rozdil\n";
 
 
 
}