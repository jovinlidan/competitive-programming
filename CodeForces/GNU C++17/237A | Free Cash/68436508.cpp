#include <bits/stdc++.h>
#define lli long long int
using namespace std;
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
 int n, a, b, arr[24][60]={}, mx= INT_MIN;
 cin >> n;
 
 for(int i = 0; i < n; i++)
 {
  cin >> a >> b;
  arr[a][b]++;
  mx = max(mx, arr[a][b]);
 
 }
 cout << mx << endl;
 
 
 
 
 return 0;
}