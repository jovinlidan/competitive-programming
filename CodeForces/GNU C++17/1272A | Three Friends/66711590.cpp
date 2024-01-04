#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t, i, a, b, c, total=0;
    cin >> t;
    for(i = 0; i < t; i++){
        total = 0;
        cin >> a >> b >> c;
        total = abs(b-c) + abs(a-c) + abs(a-b) - 4;
        cout << max(0, total) << endl;
 
    }
 
 
 
 
 
    return 0;
}