#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int i, j, n, counts=0, byk=0;
    string num;
    cin >> n >> num;
 
    byk = n / 11;
 
    for (i = 0; i < n ; i++){
        if(num[i]== '8'){
            counts++;
        }
    }
 
    cout << min(counts, byk) << endl;
 
 
 
 
 
 
}