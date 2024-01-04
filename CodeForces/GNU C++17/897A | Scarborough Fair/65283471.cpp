#include <bits/stdc++.h>
using namespace std;
int main() {
 int n, m, l, r, i, j;
 string word;
 char c1, c2;
 
 cin >> n >> m;
 cin >> word;
 for (i = 0; i < m; i++)
 {
  cin >> l >> r >> c1 >> c2;
  for (j = l-1; j <= r-1; j++)
  {
   if (word[j] == c1) {
    word[j] = c2;
   }
  }
 }
 cout << word << endl;
 
 return 0;
}