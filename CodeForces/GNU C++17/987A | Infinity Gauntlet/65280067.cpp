#include <bits/stdc++.h>
using namespace std;
int main() {
 map <string, string>gems = {};
 gems["purple"] = "Power";
 gems["green"] = "Time";
 gems["blue"] = "Space";
 gems["orange"] = "Soul";
 gems["red"] = "Reality";
 gems["yellow"] = "Mind";
 
 int n, i, counts=0;
 string gem;
 cin >> n;
 for (i = 0; i < n; i++)
 {
  cin >> gem;
  gems[gem] = "0";
  counts++;
 }
 cout << 6 - counts << endl;
 
 for (auto i = gems.begin(); i != gems.end(); ++i)
 {
  if (i->second != "0") {
   cout << i->second << endl;
  }
 }
 
 
 
 return 0;
}