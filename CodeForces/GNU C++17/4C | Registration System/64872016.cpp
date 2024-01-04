#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 int i, n, j, counts = 0;
 string temp;
 map<string, int> dict = {};
 cin >> n;
 
 for (i = 0; i < n; i++)
 {
  bool ada = false;
  counts = 0;
  cin >> temp;
  dict[temp]++;
  
  if (dict[temp] == 1) {
   cout << "OK\n";
  }
  else {
   cout << temp << dict[temp] - 1 << endl;
  }
  
 }
 
 
 
 
 
 
 
 
 return 0;
}