#include <bits/stdc++.h>
 
using namespace std;
 
 
int main() {
 
 string username;
 int i, j, counts=0;
 cin >> username;
 
 for (i = 0; i < username.length(); i++)
 {
  for (j = i+1; j < username.length(); j++)
  {
   if (username[i] == '.')
    continue;
   if (username[i] == username[j]) {
    username[j] = '.';
   }
  }
 }
 
 for (i = 0; i < username.length(); i++)
 {
  if (username[i] == '.')
   continue;
  counts++;
 }
 
 if (counts % 2 == 0)
  cout << "CHAT WITH HER!" << endl;
 else
  cout << "IGNORE HIM!" << endl;
 
 
 
 
 
 
 
 
 return 0;
}