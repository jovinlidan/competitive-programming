#include <bits/stdc++.h>
using namespace std;
int main()
{
 int months[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
 int m, d, ans=1;
 cin >> m >> d;
 months[m-1] -= 8-d;
 ans+= ceil(months[m-1]/7.0);
 cout << int(ans);
 
 
    return 0;
}