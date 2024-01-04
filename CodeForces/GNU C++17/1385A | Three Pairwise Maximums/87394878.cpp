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
  int arr[3] = {};
  cin >> arr[0] >> arr[1] >> arr[2];
  sort(arr, arr+3, greater<int>());
 
  if(arr[0] == arr[1] && arr[1] == arr[2])
  {
   cout << "YES\n";
   cout << arr[0] << " " << arr[1] << " " << arr[2] << '\n';
  }
  else if(arr[0] == arr[1] && arr[1] != arr[2])
  {
   cout << "YES\n";
   cout << arr[0] << " " << arr[2] << " "<< arr[2] << '\n';
  }
  else cout << "NO\n";
 }
}