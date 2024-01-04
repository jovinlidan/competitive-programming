#include <bits/stdc++.h>
using namespace std;
int main() {
 int n, plane[5005], i;
 cin >> n;
 bool triangle = false;
 
 for (i = 1; i <= n; i++)
 {
  cin >> plane[i];
 }
 
 for (i = 1; i <= n; i++)
 {
  if (i == plane[plane[plane[i]]]) {
   triangle = true;
   break;
  }
 }
 if (triangle) cout << "YES\n";
 else cout << "NO\n";
 
 return 0;
}