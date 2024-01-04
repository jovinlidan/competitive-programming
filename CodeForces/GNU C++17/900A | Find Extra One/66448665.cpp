#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n, countMin=0, x, y, countPos=0;
    cin >> n;
 
    for(int i =0; i < n; i++){
        cin >> x >> y;
        if(x < 0) countMin++;
        else if (x > 0) countPos++;
    }
    if (countMin <= 1 || countPos <= 1)cout << "YES\n";
    else cout << "NO\n";
 
 
 
 
 
 
 
 
    return 0;
}