#include <bits/stdc++.h>
using namespace std;
int toInt(string s)
{
 stringstream hasil(s);
 int x=0;
 hasil >> x;
 return x;
}
 
string toString(int s)
{
 stringstream ss;
 ss << s;
 return ss.str();
}
int main()
{
 vector<string> arr;
 string s;
 cin >> s;
 
 while(toInt(s) != 0)
 {
  string temp = "";
  for(int i = 0; i < s.length(); i++)
  {
   if(int(s[i] - '0') >= 1)
   {
    s[i] = char( int(s[i] - '0') - 1  + '0');
    temp.push_back('1');
   }
   else
   {
    temp.push_back('0');
   }
  }
  int x = toInt(temp);
  temp = toString(x);
  arr.push_back(temp);
 }
 cout << arr.size() << endl;
 for(int i = 0; i < arr.size(); i++)
 {
  if( i != 0) cout<< " ";
  cout << arr[i];
 }
 cout << endl;
 
 
 
 
 
 
}