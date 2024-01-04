#include <bits/stdc++.h>
using namespace std;
 
 
bool isPrime(int n )
{
    if (n == 0 || n == 1) {
        return false;
    }
    else {
        for (int i = 2; i <= n / 2 ; ++i) {
            if (n % i == 0) {
                return false;
            }
        }
    }
    return true;
}
 
 
 
 
 
int main()
{
 int t;
 cin >> t;
 string s;
 int temp, n, hasil1, hasil2;
 while(t--)
 {
  hasil1 = -1;
  hasil2 = -1;
  cin >> n >> s;
  for(int i = 0; i < n ; i++)
  {
   string tt = "";
   tt += s[i];
   temp = stoi(tt);
   if(!isPrime(temp))
   {
    hasil1 = 1;
    hasil2 = temp;
    break;
   }
  } 
  if(hasil1 != -1 && hasil2 != -2)
  {
   cout << hasil1 << '\n' << hasil2 << '\n';
   continue;
  }
 
  for(int i = 0; i < n ; i++)
  {
   for(int j = i+1; j < n; j++)
   {
    string tt = "";
    tt += s[i];
    tt += s[j];
    temp = stoi(tt);
    if(!isPrime(temp))
    {
     hasil1 = 2;
     hasil2 = temp;
     break;
    }
 
   }
   
  }
  if(hasil1 != -1 && hasil2 != -2)
  {
   cout << hasil1 << '\n' << hasil2 << '\n';
   continue;
  }
 
 }
 
 return 0;
}
 
// 27531