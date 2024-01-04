#include <bits/stdc++.h>
using namespace std;
int main() {
 string lisPos, cmd;
 int i, j, lengthPos, lengthCmd, counts = 0;
 cin >> lisPos >> cmd;
 lengthPos = lisPos.length();
 lengthCmd = cmd.length();
 
 for (i = 0; i < lengthCmd; i++)
 {
  if (lisPos[counts] == cmd[i]) {
   counts++;
  }
 }
 cout << counts + 1 << endl;
 
 
 return 0;
}