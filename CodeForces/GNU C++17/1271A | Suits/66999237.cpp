#include <bits/stdc++.h>
using namespace std;
 
 
 
int main()
{
 int a, b, c, d, e, f, temp, cost=0;
 cin >> a >> b >> c >> d >> e >>f;
 if(e > f){
  temp = min(a, d);
  a -= temp;
  d -= temp;
  cost += temp * e;
 
  temp =  min(d, min(b, c));
  d -= temp;
  b -= temp;
  c -= temp;
  cost += temp * f;
 
 
 }else{
  temp =  min(d, min(b, c));
  d -= temp;
  b -= temp;
  c -= temp;
  cost += temp * f;
 
  temp = min(a, d);
  a -= temp;
  d -= temp;
  cost += temp * e;
 
 }
 
 cout << cost;
 
 
 
    return 0;
}