#include <bits/stdc++.h>
using namespace std;
 
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
 
 int n, temp;
 cin >> n;
 unordered_map<int , int > arr;
 
 for(int i = 1;i <= n; i++)
 {
  cin>> temp;
  arr[temp] = i;
 }
 long long int m, a = 0, b = 0;
 cin >> m;
 
 for(int i = 0; i < m; i++)
 {
  cin >> temp;
  a += arr[temp];
  b += (n-arr[temp])+1;
 }
 cout << a << " " << b << '\n';
 
}