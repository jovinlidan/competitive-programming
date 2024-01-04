#include <bits/stdc++.h>
using namespace std;
#define lli long long int
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
  int arr[n+5] = {};
  for(int i = 0; i < n; i++)cin >> arr[i];
  int cur = 0;
  for(int i = 0; i < n && arr[i] == 1; i++)cur++;
  if(cur==n)cur--;
  if(cur % 2 == 0)cout << "First\n";
  else cout << "Second\n";
 
 
 
 }
}