#include <bits/stdc++.h>
using namespace std;
int main()
{
 int n, m, ans=0, i;
 map <string , string> text;
 string temp1, temp2, hasil[3005];
 cin >> n >> m;
 for(int i = 0; i < m;i++){
  cin >> temp1 >> temp2;
  text[temp1] = temp2;
 }
 for (i = 0; i < n; i++){
  cin >> hasil[i];
 }
 
 for (i = 0; i < n; i++){
  if(hasil[i].length() <= text[hasil[i]].length()){
   cout << hasil[i];
  }else{
  cout << text[hasil[i]];
  }
  cout << " ";
 }
 cout << endl;
 
 
 
 
 
 
 
    return 0;
}