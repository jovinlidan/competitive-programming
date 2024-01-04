#include <bits/stdc++.h>
using namespace std;
int main()
{
 int n, queues[105], stuffs[105][105], mn =1e9, ans=0;
 ios_base::sync_with_stdio(false);
 cout.tie(0);
 cin.tie(0);
 
 
 cin >> n;
 for(int i = 0; i < n; i++){
  cin >> queues[i];
 
 }
 
 for(int i = 0; i < n; i++){
  ans = 0;
  for(int j = 0; j < queues[i]; j++){
   cin >> stuffs[i][j];
   ans += 5 * stuffs[i][j];
 
  }
   ans += 15 * queues[i];
   mn = min(mn , ans);
 
 }
 cout << mn << endl;
 
 
    return 0;
}