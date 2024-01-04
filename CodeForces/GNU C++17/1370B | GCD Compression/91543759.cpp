#include <bits/stdc++.h>
#define lli long long int
#define mxN 500005
#define INF 9999
 
using namespace std;
typedef pair<int,int> pii;
typedef pair<int,pii> piii;
typedef pair<pii, string> piis;
 
 
 
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
 
    int tc;
    cin >> tc;
    while(tc--)
    {
        int n;
        cin >> n;
        int arr;
        vector<int> ganjil, genap;
        for(int i = 1; i <= 2*n; i++)
        {
 
            cin >> arr;
            if(arr % 2 == 0)
            {
                genap.push_back(i);
            }
            else ganjil.push_back(i);
        }
        int must = n-1;
        int idx = 1;
        bool genapCounter = idx < genap.size();
        while(must--)
        {
            if(genapCounter)
            {
                cout << genap[idx-1] << " " << genap[idx] << '\n';
                idx+=2;
                if(idx >= genap.size())
                {
                    genapCounter = false;
                    idx = 1;
                }
 
            }
            else
            {
                cout << ganjil[idx-1] << " " << ganjil[idx] << '\n';
                idx+=2;
            }
        }
        //cout <<"MOVE\n";
 
 
 
    }
 
 
 
 
 
 
 
 
}