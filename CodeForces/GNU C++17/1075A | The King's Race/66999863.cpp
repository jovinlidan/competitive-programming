#include <bits/stdc++.h>
using namespace std;
int main()
{
 unsigned long long int n, x, y, white=0, black=0, ans=0;
 cin >> n >> x >> y;
 
 white = max(x-1, y-1);
 black = max(n-x, n-y);
 if(white <= black) cout << "WHITE\n";
 else cout << "BLACK\n";
 
 
 
 
    return 0;
}