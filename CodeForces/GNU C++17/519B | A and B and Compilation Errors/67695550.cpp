#include <bits/stdc++.h>
#define lli long long int
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    lli N, temp, idx1=0, idx2=0;
    vector <int> v1, v2, v3;
    cin >> N;
    for(int i = 0 ; i< N; i++){
        cin >> temp;
        v1.emplace_back(temp);
    }
    for(int i = 0 ; i< N-1; i++){
        cin >> temp;
        v2.emplace_back(temp);
    }
    for(int i = 0 ; i< N-2; i++){
        cin >> temp;
        v3.emplace_back(temp);
    }
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());
    sort(v3.begin(), v3.end());
 
    for(int i = 0; i < N-1; i++){
        if(v1[i] != v2[i]){
            idx1 = v1[i];
            break;
        }
    }
    if(idx1 == 0) idx1 = v1[N-1];
 
    for(int i = 0; i < N-2; i++){
        if(v2[i] != v3[i]){
            idx2 = v2[i];
            break;
        }
    }
    if(idx2 == 0) idx2 = v2[N-2];
 
    //for(auto i : v2) cout << i << endl;
 
    cout << idx1 << endl << idx2 << endl;
 
 
 
 
 
 
    return 0;
}