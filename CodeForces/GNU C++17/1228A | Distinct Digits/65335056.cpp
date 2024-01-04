#include <bits/stdc++.h>
using namespace std;
int main() {
 int l, r, counts = 0, i, length,j, k, hasil=0;
 string s;
 bool sama = false;
 cin >> l >> r;
 
 for (i = l; i <= r; i++)
 {
  sama = false;
  stringstream ss;
  ss << i;
  ss >> s;
  length = s.length();
  for (j = 0; j < length; j++)
  {
   for (k = j+1; k < length; k++)
   {
    if (s[j] == s[k]) {
     sama = true;
    }
    if (sama) break;
   }
   if (sama) break;
  }
  if (!sama) {
   hasil = i;
   break;
  }
  
 }
 if (!sama) cout << hasil << endl;
 else cout << -1 << endl;
 
 
 return 0;
}