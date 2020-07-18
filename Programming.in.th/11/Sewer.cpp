/*
    TASK    : Sewer
    LANG    : CPP
    AUTHOR  : Aphrodicez
    SCHOOL  : RYW
*/
#include<bits/stdc++.h>
using namespace std;

#define endl '\n';

struct A{
    int i, j;
};

queue <A> qu;
vector <A> g[110][110];
int dis[110][110];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int r, c, i, j, ch;
    char now;

    cin >> r >> c;

    for(i=1; i<=r; i++){
        for(j=1; j<=c; j++){
            dis[i][j] = INT_MAX;
            cin >> now;
            ch = 0;
            if(now=='B')
                ch = 1;
            if(now=='R' || ch){
                if(j+1 <= c){
                    g[i][j].push_back({i,j+1});
                    g[i][j+1].push_back({i,j});
                }
            }
            if(now=='D' || ch){
                if(i+1 <= r){
                    g[i+1][j].push_back({i,j});
                    g[i][j].push_back({i+1,j});
                }
            }
        }
    }

    qu.push({1,1});
    dis[1][1] = 1;

    while(!qu.empty()){
        i = qu.front().i;
        j = qu.front().j;
        qu.pop();
        for(auto x : g[i][j]){
            if(dis[x.i][x.j]==dis[i][j] + 1){
                cout << dis[x.i][x.j] << endl;
                cout << x.i << " " << x.j;
                return 0;
            }
            if(dis[x.i][x.j] > dis[i][j] + 1){
                dis[x.i][x.j] = dis[i][j] + 1;
                qu.push({x.i,x.j});
            }
        }
    }
    return 0;
}
