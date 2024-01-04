#include <bits/stdc++.h>
using namespace std;
 
 
int solve(int x){
 int ans = x;
 int cnt = 1;
 for(int i = 0; i < x; i++){
  ans += (cnt*(x-i)) - cnt;
  cnt++;
 }
 return ans;
}
int main()
{
 int n;
 cin >> n;
 cout << solve(n);
 
 
 
 
 
 
    return 0;
}