#include <bits/stdc++.h>
using namespace std;
 
bool solve(string s){
 if(s.length() == 0) return true;
 int i, j;
 i = 0;
 j = s.length()-1;
 while(i < j){
  if(s[i] != s[j]) return false;
  i++;
  j--;
 }
 return true;
 
 
}
int main()
{
 string kata, newKata;
 cin >> kata;
 for(int i = kata.length()-1; i >=0; i--){
  if(kata[i] == '0') kata[i] = NULL;
  else break;
 }
 for(int i = 0; i < kata.length(); i++){
  if(kata[i] != NULL) newKata += kata[i];
 }
 
 if(solve(newKata)) cout << "YES\n";
 else cout << "NO\n";
 
 
 
 
 
 
 
 
    return 0;
}