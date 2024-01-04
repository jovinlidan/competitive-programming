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
  int arr[200005] = {};
  for(int i = 0; i < n*2; i++)
  {
   cin >> arr[i];
  }
  sort(arr, arr+(n*2));
 
  cout << abs(arr[n] - arr[n-1]) << endl;
 
 }
 
 
 
 
 
 
 
 
 
 
 return 0;
}