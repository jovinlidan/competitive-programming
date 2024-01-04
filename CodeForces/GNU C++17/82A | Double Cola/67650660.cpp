#include <bits/stdc++.h>
#define lli long long int
using namespace std;
 
int main()
{
  lli N, ans=0, cnt=0, who=1, rasio=0;
  string names[6] = {"", "Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};
  cin >> N;
 
  while(ans < N){
  ans += 5 *(pow(2, cnt));
  cnt++;
  }
 
 rasio = (ans - (ans - (5 * pow(2, cnt-1)))) / 5;
 ans = (ans - (5 * pow(2, cnt-1)));
 
 
 //cout << ans << endl;
 while(ans < N){
  ans += rasio;
  who++;
 }
 cout << names[who-1] << endl;
 
    return 0;
}