#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 
 string hello = "hello";
 string chat;
 cin >> chat;
 bool manageToSay = true;
 int index = 0, i;
 for (i = 0; i < chat.length(); i++)
 {
  if (chat[i] == hello[index]) {
   index++;
  }
  
 
 
 }
 if (index == 5)
  cout << "YES" << endl;
 else
  cout << "NO" << endl; 
 
 
 
 
 
 return 0;
}