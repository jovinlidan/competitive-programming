#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n, length , i, data[105], totalPos=0, totalMin = 0, countLP=0, countLM=0;
    cin >> n;
    bool isNul = true;
 
    length = n/2 + n%2;
    for(i =0; i < n ; i++){
        cin >> data[i];
    }
    sort(data, data+n, greater<int>());
 
    for(i = 0; i < n; i++){
        if(data[i] > 0){
            countLP++;
            totalPos += data[i];
            if(countLP == length && totalPos >= length){
                cout << 1;
                isNul = false;
                break;
            }
        }
        else if (data[i] < 0){
            countLM++;
            totalMin += data[i];
            if(countLM == length && abs(totalMin) >= length){
                cout << -1;
                isNul = false;
                break;
            }
        }
    }
    if(isNul) cout << 0;
 
 
 
 
 
 
 
 
 
 
 
 
 
 
    return 0;}