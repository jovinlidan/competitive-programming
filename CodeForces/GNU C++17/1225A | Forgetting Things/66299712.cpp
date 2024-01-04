#include <bits/stdc++.h>
using namespace std;
 
 
int main()
{
    int a, b;
    cin >> a >> b;
 
    if(a+1 == b)
    {
        cout << a << "99 " << b << "00\n";
    }
    else if(a == b)
    {
        cout << a << "12 " << b << "13\n";
    }
    else if (a== 9 && b == 1)
    {
        cout << a << " " << b << "0" << endl;
    }
    else
    {
        cout << -1 << endl;
    }
}