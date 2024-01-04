#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, wire[105]={}, m, x, y, up, down;
    cin >> n;
 
    for(int i = 1; i <= n; i++){
        cin >> wire[i];
    }
    cin >> m;
    for(int i = 1; i <= m; i++){
        cin >> x >> y;
        up = x-1;
        down = x+1;
 
        wire[up] += y-1;
        wire[down] += wire[x] - y;
        wire[x] = 0;
 
    }
    for(int i = 1; i <= n ; i++){
        cout << wire[i] << endl;
    }
 
 
 
 
 
    return 0;
}