#include <bits/stdc++.h>
using namespace std;
int main(){
 
 int n, l, r, l1=0, l0=0, r1 = 0, r0 = 0;
 cin >> n;
 
 for(int i = 0; i < n; i++){
  cin >> l >> r;
 
  if(l == 1) l1++;
  else l0++;
 
  if(r == 1) r1++;
  else r0++;
 }
 cout << min(l1, l0) + min (r1, r0) << endl;
 
 
 
 
 
 
 return 0;
}