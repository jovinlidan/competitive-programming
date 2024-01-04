#include <bits/stdc++.h>
using namespace std;
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
 string s;
 
 cin >> s;
 stack<char> tumpuk;
    char a, b;
    bool p1 = false, p2 = true;
 
 int length = s.length();
    for(int i = 0; i < length; i++)
 {
        tumpuk.push(s[i]);
        if(tumpuk.size() >= 2)
  {
            bool isSame= false;
 
            do
   {
                if(tumpuk.size() < 2)break;
    a = tumpuk.top();
    tumpuk.pop();
    b = tumpuk.top();
    tumpuk.pop();
 
    if(a == b)
    {
     isSame = true;
     p1 = !p1;
     p2 = !p2;
    }
    else
    {
     tumpuk.push(b);
     tumpuk.push(a);
     break;
    }
 
            }while(isSame);
  }
 }
 
 if(p1 && !p2)cout << "Yes\n";
 else cout << "No\n";
 
 
 
 
 
 
 
 
 
 
 
 return 0;
}