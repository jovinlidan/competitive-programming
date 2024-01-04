#include <bits/stdc++.h>
using namespace std;
 
string solve(string s){
 string kata;
 kata += s[s.length()-1];
 for(int i = 0; i < s.length()-1; i++){
  kata+= s[i];
 }
 return kata;
 
}
 
int main(){
 int cnt = 1;
 string s, temp;
 cin >> s;
 temp = s;
 
 while(temp != solve(s)){
  s = solve(s);
  cnt++;
 }
 cout << cnt;
 
 
 
 return 0;
 
}