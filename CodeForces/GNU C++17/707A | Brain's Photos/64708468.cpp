#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 
 int n, m, i, j;
 char clr;
 bool isBlackWhite = true;
 cin >> n >> m;
 
 for (i = 0; i < n*m; i++)
 {
  cin >> clr;
  if ((clr == 'C') || (clr == 'M') | (clr == 'Y')) {
   isBlackWhite = false;
  }
 }
 
 if (isBlackWhite) cout << "#Black&White" << endl;
 else cout << "#Color" << endl;
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 return 0;
}