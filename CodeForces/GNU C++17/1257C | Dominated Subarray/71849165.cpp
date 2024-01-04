#include <bits/stdc++.h>
using namespace std;
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
    int tc;
    cin >> tc;
    while(tc--)
 {
        int n;
        cin >> n;
        int arr[n+5] = {}, temp;
        memset(arr, -1, sizeof(arr));
  int mn = 1e9;
        for(int i = 0; i < n; i++)
  {
   cin >> temp;
   if(arr[temp] == -1) arr[temp] = i;
   else
   {
    mn = min(mn, i - arr[temp] + 1);
    arr[temp] = i;
   }
  }
  if(mn == 1e9) cout << -1 << endl;
  else cout << mn << endl;
 
 
 
 
 
 
 }
 
 
 
 
 
 
 return 0;
}