#include <bits/stdc++.h>
using namespace std;
 
bool isSqrt(int x)
{
 if(x < 0) return false;
 return (ceil(sqrt(x)) * ceil(sqrt(x)) == x);
}
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
 int n;
 cin >> n;
 int arr[1005] = {};
 
 for(int i = 0; i < n; i++)
 {
  cin >> arr[i];
 }
 
 sort(arr, arr+n, greater<int>());
 for(int i = 0; i < n; i++)
 {
  if(!isSqrt(arr[i]))
  {
   cout << arr[i] << endl;
   return 0;
  }
 }
 
 
 
 
 
 
 
 return 0;
}