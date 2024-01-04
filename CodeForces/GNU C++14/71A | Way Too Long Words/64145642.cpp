#include <bits/stdc++.h>
 
using namespace std;
 
 
 
int main() {
 int n, i;
 cin >> n;
 string data[100];
 
 for (i = 0; i < n; i++)
 {
  cin >> data[i];
 
 
 }
 
 for (i = 0; i < n; i++)
 {
  if (data[i].length() > 10) {
   cout << data[i][0] << data[i].length() - 2 << data[i][data[i].length() - 1] << endl;
  }
  else
   cout << data[i] << endl;
 }
 
 
 
 
 return 0;
}