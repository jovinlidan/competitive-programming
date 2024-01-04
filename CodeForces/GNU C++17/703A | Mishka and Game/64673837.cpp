#include <bits/stdc++.h>
 
using namespace std;
 
 
int main() {
 
 int n,mCube, cCube, m=0, c=0, max, i;
 
 cin >> n;
 for ( i = 0; i < n; i++)
 {
  cin >> mCube >> cCube;
  if (mCube > cCube) m++;
  else if (cCube > mCube) c++;
 }
 
 if (m > c) cout << "Mishka\n";
 else if (m < c) cout << "Chris\n";
 else cout << "Friendship is magic!^^\n";
 
 
 
 
 
 
 
 
 
 return 0;
}