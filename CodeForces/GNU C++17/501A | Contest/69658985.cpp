#include <bits/stdc++.h>
using namespace std;
int main()
{
 int a, b, c, d;
 cin >> a >> b >> c >> d;
 int f, s;
 f = max(3*a/ 10, a-(a/250) * c);
 s = max(3*b/ 10, b-(b/250) * d);
 
 if(f > s) cout << "Misha\n";
 else if(f < s) cout << "Vasya\n";
 else cout << "Tie\n";
 
 
 
 
 
 return 0;
}