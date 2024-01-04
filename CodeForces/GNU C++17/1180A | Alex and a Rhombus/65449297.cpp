#include <bits/stdc++.h>
using namespace std;
int main() {
 int n, i, total = 1;
 cin >> n;
 for (i = n-1; i >=1 ; i--)
 {
  total += 4 * i;
 }
 cout << total << endl;
 
 return 0;
}