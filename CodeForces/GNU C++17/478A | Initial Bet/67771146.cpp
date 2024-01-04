#include <bits/stdc++.h>
using namespace std;
 
bool isInt(double a){
 if(a == 0) return false;
 if(round(a) == a) return true;
 return false;
}
int main(){
 
 int c1, c2, c3, c4, c5;
 cin >> c1 >> c2 >> c3 >> c4 >> c5;
 
 
 double ans = (c1+c2+c3+c4+c5)/5.0;
 if(isInt(ans)) cout << ans << endl;
 else cout << -1 << endl;
 
 
 
 
 
 
 return 0;
}