#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n+5]={};
 
    for(int i = 1; i <= n; i++)
 {
  cin >> arr[i];
 }
 int mn = 1e9;
 int idx1, idx2;
 for(int i = 1; i <= n; i++)
 {
  if(i == n)
  {
   if(abs(arr[i] - arr[1]) <= mn)
   {
    idx1 = 1;
    idx2= n;
    mn = abs(arr[i] - arr[1]);
   }
  }
  else
  {
   if(abs(arr[i] - arr[i+1]) <= mn)
   {
    idx1 = i;
    idx2= i+1;
    mn = abs(arr[i] - arr[i+1]);
   }
  }
 }
 cout << idx1 << " " << idx2 << endl;
 
 
 
 
 
 
 
 return 0;
}