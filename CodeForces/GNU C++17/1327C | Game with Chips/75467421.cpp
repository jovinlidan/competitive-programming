#include <bits/stdc++.h>
using namespace std;
const int maxN = 205;
string loopChar(int gapX, int gapY);
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, m, k, x[maxN] = {}, y[maxN] = {}, targetX[maxN] = {}, targetY[maxN] = {}, cnt = 0;
    string ans = "";
    bool visited[maxN] = {false}, loop = false;
    cin >> n >> m >> k;
    for(int i = 1; i <= k; i++)cin >> x[i] >> y[i];
    for(int i = 1; i <= k; i++)cin >> targetX[i] >> targetY[i];
    while(loop)
    {
        loop = false;
        bool gap = false;
        int gapX = -1, gapY = -1;
        for(int i = 1; i <= k; i++)
        {
            if(gap)
            {
                if(x[i] == targetX[i] && y[i] == targetY[i])
                {
                    visited[i] = true;
                    continue;
                }
                int newGapX = x[i] - targetX[i];
                int newGapY = y[i] - targetY[i];
                bool c1= false,c2 = false;
                if(newGapX < 0 && gapX < 0)
                {
                    if(gapX <= newGapX)c1 = true;
                }else if(newGapX > 0 && gapX > 0)
                {
                    if(gapX >= newGapX)c1 = true;
                }else if (newGapX == 0)c1 = true;
 
                if(newGapY < 0 && gapY < 0)
                {
                    if(gapY <= newGapY)c2 = true;
                }else if(newGapY > 0 && gapY > 0)
                {
                    if(gapY >= newGapY)c2 = true;
                }else if(newGapY == 0) c2 = true;
 
                if(c1 && c2)visited[i] = true;
                else
                {
                    x[i] += -gapX;
                    y[i] += -gapY;
                    if(x[i] < 1)x[i] = 1;
                    if(x[i] > n)x[i] = n;
                    if(y[i] < 1)y[i] = 1;
                    if(y[i] > m)y[i] = m;
                }
 
            }
            if(!visited[i])
            {
                gapX = x[i] - targetX[i];
                gapY = y[i] - targetY[i];
                visited[i] = true;
                loop = true;
                ans.append(loopChar(gapX, gapY));
                gap = true;
 
            }
        }
    }
    ans.append(string(n-1, 'U'));
    ans.append(string(m-1, 'L'));
    for(int i = 1; i <=n ;i++)
    {
        for(int j = 1; j <= m; j++)
        {
            if(i % 2)
            {
                if(j == m)ans.push_back('D');
                else ans.push_back('R');
            }else
            {
                if(j == m)ans.push_back('D');
                else ans.push_back('L');
            }
        }
    }
    //cout << ans << endl;
    if(ans.length() > 2*n*m) cout << -1 << endl;
    else
    {
        cout << ans.length() << endl;
        cout << ans << endl;
    }
 
    return 0;
}
 
string loopChar(int gapX,int gapY)
{
    char x;
    string temp = "";
    if(gapX < 0)x = 'D';
    else x = 'U';
    for(int i =0;i < abs(gapX) && gapX != 0; i++)temp.push_back(x);
 
    x = ' ';
    if(gapY < 0)x = 'R';
    else x = 'L';
    for(int i =0;i < abs(gapY) && gapY != 0; i++)temp.push_back(x);
 
 
    return temp;
}