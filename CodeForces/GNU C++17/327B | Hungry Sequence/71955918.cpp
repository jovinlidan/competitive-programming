#include <bits/stdc++.h>
using namespace std;
 
void solve(int n)
{
 int x = 1500000;
    bool prime[x+1];
    memset(prime, true, sizeof(prime));
 
    for (int p=2; p*p<=x; p++)
    {
        if (prime[p] == true)
        {
            for (int i=p*p; i<=x; i += p)
                prime[i] = false;
        }
    }
    int temp = 0;
    for (int p=2; p<=x && temp < n; p++)
       if (prime[p])
    {
          cout << p << " ";
   temp++;
    }
 //cout << temp << "TEMP";
}
int main()
{
 ios_base::sync_with_stdio(false);
 cout.tie(0);
 cin.tie(0);
    int n, temp=3;
    cin >> n;
 
 solve(n);
//    for(int i = 0; i < n; i++)
// {
//  if(i == 0)
//  {
//   cout << 2;
//  }
//  else
//  {
//   cout << " ";
//   cout << temp * 3;
//   temp+=2 ;
//  }
// }
 
 
 
 
 
 
 
 
 return 0;
}