#include <bits/stdc++.h>
using namespace std;
int main()
{
 string s;
 bool adaSatu = false;
 cin >> s;
 int length = s.length(), cnt = 0;
 for(int i = length-1; i >= 1; i--)
 {
  if(s[i] == '1')
  {
   adaSatu = true;
  }
  //cout << s[i] << " ";
 }
 //cout << endl;
 //cout << cnt << endl
 if(length % 2 == 1)cout << floor(length/2.0) + adaSatu << endl;
 else cout << floor(length/2.0) << endl;
 
 
 
 
 
 return 0;
}