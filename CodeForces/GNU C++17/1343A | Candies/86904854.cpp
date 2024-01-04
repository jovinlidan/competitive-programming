#include <bits/stdc++.h>
using namespace std;
 
 
int main()
{
   int tc;
   long long n;
   cin >> tc;
 
   while(tc--)
   {
  cin >> n;
  int sum = 3, kali = 4;
  for(int i = 0 ; i < 100 ; i++)
  {
            if(n % sum == 0)
   {
    cout << n/sum << '\n';
    break;
   }
   sum += kali;
   kali *= 2;
  }
 
   }
 
}