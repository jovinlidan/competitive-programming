#include <bits/stdc++.h>
using namespace std;
int main() {
 
 int n, temp, i, maks = -1e9, mins = 1e9;
 cin >> n;
 for (i = 0; i < n; i++)
 {
  cin >> temp;
  maks = max(maks, temp);
  mins = min(mins, temp);
 }
 cout << maks + 1 - mins - n << endl;
 
 
 return 0;
}