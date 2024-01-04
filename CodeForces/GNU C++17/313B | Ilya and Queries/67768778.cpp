#include <bits/stdc++.h>
 
using namespace std;
 
int DP[100005]={}, total=0;
string s;
int solveRightLeft(int l, int r){
 int ans = 0;
 ans = DP[r-1] - DP[l-1];
 return ans;
}
int solveCenter(int l, int r){
 int ans = 0;
 for(int i = l; i < r; i++){
  ans+= DP[i];
 }
 return ans;
}
 
void initialize(){
 for(int i = 1; i < s.length(); i++){
  if(s[i] == s[i-1]) total+=1;
  DP[i] = total;
 }
 
}
int main()
{
 
    cin >> s;
    int Q, l, r;
    cin >> Q;
    initialize();
    while(Q--){
        cin >> l >> r;
 
//        for(int i = 1; i < s.length(); i++){
//   cout << DP[i] << " ";
//  }
//  cout << endl;
  cout << solveRightLeft(l, r) << endl;
 
    }
 
 
 
    return 0;
}