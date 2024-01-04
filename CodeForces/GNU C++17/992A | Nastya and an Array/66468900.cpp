#include <bits/stdc++.h>
 
using namespace std;
 
 
int main()
{
    int n, i, x, counts=0;
    map <int, int> data;
 
    cin >> n;
    for(i = 0; i < n; i++)
    {
        cin >> x;
        if(x != 0)
        {
            data[x]++;
            if(data[x] ==  1) counts++;
        }
 
    }
    cout << counts << endl;
 
 
 
 
 
    return 0;
}