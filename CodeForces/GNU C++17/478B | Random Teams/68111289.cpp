#include <bits/stdc++.h>
#define lli long long int
using namespace std;
 
lli combines(lli x){
 return (x*(x-1))/ 2;
}
 
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
 lli N, team, mn, mx;
 cin >> N >> team;
 if(N < team){
  cout << 0 << " " << 0 << endl;
  return 0;
 }
 
 if(team == 1){
  cout << combines(N) << " " << combines(N) << endl;
 }else{
  if(N % team == 0){
   lli mxHold = N - team+1;
   mx = combines(mxHold);
   lli mnHold = N / team;
   mn = combines(mnHold) * team;
   cout << mn << " " << mx << endl;
  }
  else{
   lli mxHold = N - team+1;
   mx = combines(mxHold);
   mn = 0;
   lli mnHold = N/ team;
   lli modSisa = N % team;
 
   mn += combines(mnHold+1) * modSisa;
   mn += combines(mnHold) * (team-modSisa);
//   for(int i =0; i < team ;i++){
//    if(modSisa > 0){
//     mn += combines(mnHold+1);
//     modSisa--;
//    }else{
//     mn += combines(mnHold);
//    }
//   }
 
   //for(auto i : arr) cout << i << "-";
   cout << mn << " " << mx << endl;
 
  }
 
 
 
 }
 
 
 
 
 
    return 0;
}