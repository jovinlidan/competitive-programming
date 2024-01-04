#include <bits/stdc++.h>
using namespace std;
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
 int n, cnt=0;
 cin >> n;
 vector<pair<int, int >> arr;
 
 int n2 = n*n;
 //int total = (n2/2.0) * (1+n2);
 
 //cout << total << endl;
 
 for(int i = 0; i < n*n; i++)
 {
  arr.push_back({i+1, n*n-i});
 }
 for(int i =0; i < n; i++)
 {
  for(int j = 0; j < n/2 ; j++)
  {
   if(j != 0)cout << " ";
   cout << arr[cnt].first << " " << arr[cnt].second ;
   cnt++;
  }
  cout << endl;
 }
 
 
 
 
 
 
 
 
 return 0;
}