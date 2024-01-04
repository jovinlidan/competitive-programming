#include <bits/stdc++.h>
using namespace std;
 
int main()
{
 long long int q, a,b, n, S;
 cin >> q;
 for(int query = 0; query < q; query++){
  cin >> a >> b >> n >> S;
 
  int ans = S/ n;
  if(ans <= a){
   if(ans * n + b >= S){
    cout<< "YES\n";
   }
   else{
    cout << "NO\n";
   }
  }else{
   S -= (a * n);
   if(b >= S) cout << "YES\n";
   else cout << "NO\n";
  }
 
 
 
 
 
 
 }
 
 
 
 
 
 
 
    return 0;
}