#include <bits/stdc++.h>
using namespace std;
int main()
{
 int n, cnt=0;
 cin >> n;
 int spasiCnt= n*2;
 int temp = 0;
 for(int i = 1; i <= n+1 ; i++)
 {
  for(int spasi1 = 0; spasi1 < spasiCnt ; spasi1++)
  {
   cout << " ";
  }
  spasiCnt-=2;
 
  int loop = 0;
  bool isReserve = false;
  for(int j = 1; j <= i+cnt; j++)
  {
   cout << loop;
   if(j != cnt+i) cout << " ";
 
   if(loop == i-1)isReserve = true;
   if(isReserve) loop--;
   else loop++;
   temp = i+cnt;
  }
  cnt++;
  cout << endl;
 
 
 }
    int spasi2Cnt = 2;
 temp-=2;
    for(int i = n-1; i >= 0; i--)
 {
  for(int spasi2= 0; spasi2 < spasi2Cnt; spasi2++)
  {
   cout << " ";
  }
  spasi2Cnt+=2;
  int loop =0;
  bool isReserve = false;
  for(int j = 0; j < temp; j++)
  {
   cout << loop;
   if(j != temp-1) cout << " ";
   if(loop == i) isReserve = true;
   if(isReserve) loop--;
   else loop++;
 
  }
  cout << endl;
  temp-=2;
 }
 
 
 
 return 0;
}