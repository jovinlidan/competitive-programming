#include <bits/stdc++.h>
using namespace std;
 
 
int reducts(int a, int b){
    int mn = min(a, b);
    for(int i = mn; i >= 1 ; i--){
        if(a % i == 0 && b % i == 0){
            b /= i;
            a /= i;
 
        }
    }
    return a*10 + b;
}
int main()
{
    int x , y;
    cin >> x >> y;
 
    int mx = max(x, y);
    int ans = reducts(6-mx+1, 6);
    cout << ans /10 << "/" << ans % 10;
    return 0;
 
 
 
}