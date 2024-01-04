#include <bits/stdc++.h>
using namespace std;
 
 
int main()
{
   int tc;
   cin >> tc;
 
   while(tc--)
   {
        int n;
        cin >> n;
        if((n/2)%2 == 0)
  {
   int sum = 0;
   cout << "YES\n";
   for(int i = 0, s = 2; i < n/2; i++)
   {
    cout << s << " ";
    sum+=s;
    s+=2;
   }
   for(int i = 0, s = 2; i < n/2 ;i++)
   {
    if(i != n/2-1)
    {
     cout << s-1 << " ";
     sum -= (s-1);
     s+=2;
    }
    else
    {
     cout << sum;
    }
 
   }
  }
  else cout << "NO";
 
  cout << '\n';
 
 
   }
 
}