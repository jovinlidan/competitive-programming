#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
 int length, i, ans=0;
 string s, temp;
 cin >> length >> s;
 
 for(int i = 0;i < length ;i++){
  for(int j = i+1 ; j < i+2; j++){
   if(s[i] != s[j] && s[i] != NULL && s[j] != NULL){
    temp+= 'D';
    s[i] = NULL;
    s[j] = NULL;
    i++;
   }
  }
 
 }
 //cout << s << endl;
 
 for(int i=0; i< length; i++){
  if(s[i]!= NULL) ans++;
 }
 
 cout << temp.length()+ans << endl;
 
 
 
 
 
 
 
 
 return 0;
}