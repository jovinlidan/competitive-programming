#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
 int i, count;
 string position;
 char currentCheck;
 cin >> position;
 count = 0;
 currentCheck = position[0];
 for (i = 0; i < position.length(); i++)
 {
  if (count >= 7) {
   break;
  }
  
  if (currentCheck == position[i]) {
   count += 1;
   
  }
  else if (currentCheck != position[i]) {
   count = 0;
   currentCheck = position[i];
   count += 1;
  }
 }
 
 if (count >= 7) {
  cout << "YES" << endl;
 }
 else
  cout << "NO" << endl;
 
 
 
 
 
 return 0;
}