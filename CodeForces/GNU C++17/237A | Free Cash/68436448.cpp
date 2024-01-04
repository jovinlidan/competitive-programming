#include <bits/stdc++.h>
#define lli long long int
using namespace std;
int main()
{
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