#include <bits/stdc++.h>
 
using namespace std;
int main()
{
 unordered_map<char, int> skor;
 int black=0, white=0;
 skor['Q'] = 9;
 skor['R'] = 5;
 skor['B'] = 3;
 skor['N'] = 3;
 skor['P'] = 1;
 
 for(int i=0; i < 8; i++)
 {
  string s;
  cin >> s;
  for(int j = 0 ; j < 8; j++)
  {
   if(s[j] >= 'a' && s[j] <= 'z')
   {
    black+= skor[s[j] - 32];
   }
   else if(s[j] >= 'A' && s[j] <= 'Z')
   {
    white += skor[s[j]];
   }
  }
 }
 if(black == white) cout << "Draw\n";
 else if(black > white) cout << "Black\n";
 else if(black < white) cout << "White\n";
 
 
 
 return 0;
}