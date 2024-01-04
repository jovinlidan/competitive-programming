#include <bits/stdc++.h>
using namespace std;
int main()
{
 
 int n, arr[100005] = {}, satuSet = 1, tengah;
 cin >> n;
 for(int i = 0; i < n; i++)
 {
  cin >> arr[i];
  if(i != 0)
  {
   if(arr[i] >= arr[i-1]) satuSet++;
   else tengah = i;
  }
 }
 if(satuSet == n) cout << 0 << endl;
 else if(satuSet == n-1)
 {
  if(arr[n-1] <= arr[0]) cout << n-tengah << endl;
  else cout << -1 << endl;
 }
 else cout << -1 << endl;
 
}