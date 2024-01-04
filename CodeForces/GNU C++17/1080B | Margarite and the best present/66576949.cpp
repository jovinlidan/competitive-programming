#include <bits/stdc++.h>
using namespace std;
 
int main(){
 int q;
 long long int x, y, ans=0;
 cin >> q;
 
 for(int i = 0; i < q; i++){
  cin >> x >> y;
  ans = 0;
  if(x == y){
   ans = x * pow(-1, x);
   goto Here;
  }
  if((x % 2 == 0) && (y % 2 == 0)){
   ans += x+y;
   if(y-x - 1 == 1) ans += -(x+1);
   else{
    ans += -(y-x-1)/2 + -(x+1);
   }
  }
  else if((x % 2 == 0) && (y % 2 == 1)){
   ans += -(y)+x;
   ans += ((y-x-1)/2);
 
  }
  else if((x % 2 == 1) && (y % 2 == 0)){
   ans += y - x;
   ans += -((y-x-1)/2);
  }
  else if((x % 2 == 1) && (y % 2 == 1)){
   ans += -x-y;
   if(y-x - 1 == 1) ans += (x+1);
   else{
    ans += (y-x-1)/2 + (x+1);
   }
  }
  Here:
  cout << ans << endl;
 
 }
 
 
 
 
 
 return 0;
}