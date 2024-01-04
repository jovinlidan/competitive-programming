#include <bits/stdc++.h>
#define lli long long int
#define mxN 500005
#define INF 9999
 
using namespace std;
typedef pair<int,int> pii;
typedef pair<int,pii> piii;
typedef set<int> si;
typedef pair<si, pii>psii;
unordered_map<int,int> parent;
vector<int>ranks(mxN, 1);
int finds(int i)
{
    if (parent[i] == i)return i;
    return parent[i] = finds(parent[parent[parent[i]]]);
}
void Unions(int x, int y)
{
    int xset = finds(x);
    int yset = finds(y);
    if(xset != yset)
    {
        if(ranks[xset] > ranks[yset])
        {
            parent[yset] = xset;
            ranks[xset]+=ranks[yset];
        }
        else if(ranks[xset] <= ranks[yset])
        {
            parent[xset] = yset;
            ranks[yset]+=ranks[xset];
        }
    }
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
 
    int n, m;
    cin >> n >> m;
    for(int i = 1; i <= n; i++)parent[i] = i;
    for(int i = 0; i < m ; i++)
    {
        int temp, lastTemp, temp2;
        cin >> temp;
        for(int j = 0; j < temp; j++)
        {
            cin >> temp2;
            if(j != 0)
            {
                Unions(temp2, lastTemp);
            }
            lastTemp = temp2;
        }
    }
    for(int i = 1; i <= n; i++)
    {
        if(i != 1)cout << " ";
        cout << ranks[finds(i)];
    }
    cout << '\n';
 
 
    return 0;
}