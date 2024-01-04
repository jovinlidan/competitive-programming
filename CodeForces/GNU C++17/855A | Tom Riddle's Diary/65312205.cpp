#include <bits/stdc++.h>
 
using namespace std;
int main() {
 map <string, int> names = {};
 int n, i;
 string name;
 cin >> n;
 
 for (i = 0; i < n; i++)
 {
  cin >> name;
  if (names[name] == 0) {
   cout << "NO\n";
  }
  else {
   cout << "YES\n";
  }
  names[name]++;
 }
 
}