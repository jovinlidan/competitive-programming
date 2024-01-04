#include <bits/stdc++.h>
using namespace std;
int DP[100005]={}, n, m, ans=1, cnt[100005]={}, temp, arr[100005] = {};
 
void solve(){
DP[n] = 1;
cnt[arr[n]]++;
 for(int i = n-1 ; i >= 1; i--){
  cnt[arr[i]]++;
  if(cnt[arr[i]] == 1) ans++;
  DP[i] = ans;
 }
 
 
}
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
 cin >> n >> m;
 
 for(int i =1; i<= n; i++){
  cin >> arr[i];
 }
 solve();
 while(m--){
  cin >> temp;
  cout << DP[temp] << endl;
 }
 
 
    return 0;
}