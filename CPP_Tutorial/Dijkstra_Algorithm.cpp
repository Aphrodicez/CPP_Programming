/*
    TASK    : Dijkstra_Algorithm
    LANG    : CPP
    AUTHOR  : Aphrodicez
    SCHOOL  : RYW
*/
#include<bits/stdc++.h>
using namespace std;

struct A{
    int u, w;
    bool operator < (const A& o) const{
        return w > o.w;
    }
    /**
    u = this node, w = weight
    Min Heap
    **/
};

const int mxN = 1e5 + 5;

int dis[mxN];/// distance
vector <A> g[mxN]; /// graph

priority_queue <A> he;

int main ()
{
    int n, m, st, en, u, v, w, i;
    /**
    n = nodes, m = edges
    st = starting node, en = destination node
    u = this node, v = next node, w = weight
    **/
    cin >> n >> m;
    cin >> st >> en;

    for(i=1; i<=m; i++){
        cin >> u >> v >> w;
        /// undirected graph
        g[u].push_back({v, w});
        g[v].push_back({u, w});
        /// connect the edges
    }

    for(i=1; i<=n; i++){
        dis[i] = 2e9;
    /// set distances to INFINITY
    }

    he.push({st, 0});
    dis[st] = 0;
    /// set starting node

    while(!he.empty()){
        u = he.top().u;
        w = he.top().w;
        he.pop();
        for(auto x : g[u]){
            int nw;
            /// new weight
            nw = dis[u] + x.w;
            if(dis[x.u] >= nw){
                dis[x.u] = nw;
                he.push({x.u, nw});
            }
        }
    }
    cout << dis[en];

    return 0;
}
