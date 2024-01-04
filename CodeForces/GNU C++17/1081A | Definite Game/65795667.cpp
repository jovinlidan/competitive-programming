#include <bits/stdc++.h>
using namespace std;
int findNotDivisor(int x);
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
 
    int n;
    cin >> n;
 
    while(findNotDivisor(n) != 0){
        n -= findNotDivisor(n);
    }
 
    cout << n << endl;
 
    return 0;
}
 
int findNotDivisor(int x){
    for(int i = x-1; i >= 2; i--){
        if(x % i != 0){
            return i;
        }
    }
    return 0;
 
}