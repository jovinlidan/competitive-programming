#include <bits/stdc++.h>
 
using namespace std;
 
bool isPrime(int x){
    if (x == 1){
        return false;
    }
    for(int i = 2; i <= trunc(sqrt(x)); i++){
        if(x % i == 0){
            return false;
        }
    }
    return true;
 
}
int main(){
    int i, j,n, m;
    cin >> n >> m;
    bool isRight = true;
    n++;
    while(n < m){
 
        if(isPrime(n)){
            isRight = false;
            break;
        }
 
        n++;
    }
 
    if (isRight&& isPrime(m)) cout << "YES\n";
    else cout << "NO\n";
 
 
 
return 0;
}