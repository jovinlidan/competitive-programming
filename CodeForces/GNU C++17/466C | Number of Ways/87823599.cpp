#include <bits/stdc++.h>
using namespace std;
#define lli long long int
string a, b;
 
string reverseStr(string str, int h)
{
    int n = h;
 
    for (int i = 0; i < n / 2; i++) {
        swap(str[i], str[n - i - 1]);
 
    }
    return str;
}
string solve(int x)
{
 for(int i = 0; i < x; i++)
 {
  if(a[i] == '1')a[i] = '0';
  else a[i] = '1';
 }
 a = reverseStr(a, x);
 return a;
}
 
 
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
 
 lli n, total = 0, total2 = 0, htg = 0, totalAns = 0;
 cin >> n;
 int arr[500005] = {};
 
 for(int i = 0; i < n; i++)
 {
  cin >> arr[i];
  total += arr[i];
 }
 if(total % 3 != 0)
 {
  cout << 0 << '\n';
 }
 else
 {
  //cout << "y\n";
  for(int i = n-1; i >= 1; i--)
  {
   total2 += arr[i];
   if(total2*3 == total*2)
   {
    totalAns += htg;
   }
   if(total2 == total/3)
   {
    htg++;
   }
  }
  cout << totalAns << '\n';
 
 }
 
 
 
 
 
}
 