#include <bits/stdc++.h>
using namespace std;
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
 
 int n, m, i, counts[1005]={}, mn=1e9, temp;
 cin >> n >> m;
 
 for(i = 0; i < m; i++){
  cin >> temp;
  counts[temp]++;
 }
 
 for(i = 1; i <= n; i++){
  mn = min(mn, counts[i]);
 }
 
 cout << mn << endl;
 
 
 
 
 
 
 
 
 
 
 
 return 0;
}