#include <bits/stdc++.h>
using namespace std;
int main() {
 int n;
 string kata;
 cin >> n >> kata;
 for (int i = 1; i <= n; ++i) {
        //cout << i << s[i];
 
  if (n % i == 0) {
   reverse(kata.begin(), kata.begin() + i);
  }
 }
 cout << kata << endl;
 
 return 0;
}