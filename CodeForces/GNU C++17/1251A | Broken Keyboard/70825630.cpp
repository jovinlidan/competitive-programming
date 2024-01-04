#include <bits/stdc++.h>
using namespace std;
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
 
 int tc;
 cin >> tc;
 while(tc--)
 {
  string s;
  set<char> baik;
  cin >> s;
  int length = s.length();
  for(int i = 0; i < length ; i++)
  {
   int temp = 1;
   for(int j = i+1; j <= length; j++)
   {
    if(s[i] == s[j]) temp++;
    else
    {
     i = j-1;
     break;
    }
   }
   if(temp % 2 == 1)
   {
    baik.insert(s[i]);
 
   }
  }
  if(baik.size() == 0) cout << "" << endl;
  else
  {
   for(auto i : baik)
   {
    cout << i;
   }
   cout << endl;
  }
  //cout << "\n--"<< s <<endl;
 
 
 }
 
 
 
 
 
 
 
 
 
 
 
 
 return 0;
}