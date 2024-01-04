#include <bits/stdc++.h>
using namespace std;
 
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
 
 int t, i;
 string kata,temp, ans;
 cin >> t;
 for(i = 0; i < t; i++){
  cin >> kata;
  if(kata[kata.length()-1] == 'o') cout << "FILIPINO\n";
  else if(kata[kata.length()-1] == 'u') cout << "JAPANESE\n";
  else if(kata[kata.length()-1] ==  'a') cout << "KOREAN\n";
 }
 
 
 
 
 
 
 
 
 
 return 0;
}