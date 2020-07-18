/*
    TASK: Magic Pooh
    LANG: CPP
    AUTHOR: Aphrodicez
    SCHOOL: RYW
*/

#include <bits/stdc++.h>
using namespace std;

struct A {
    long long u, w, st;
    bool operator < (const A& o)  const {
        return  w > o.w;
    }
};

vector<A> g[100010];
long long dis[2][100010];
priority_queue <A> he;

int main()
{
    long long n, m, k, t, u, v, w, i, st, ans;
    scanf("%lld %lld %lld %lld", &n, &m, &k, &t);
    for (i = 0; i < m; i++) {
        scanf("%lld %lld %lld", &u, &v, &w);
        g[u].push_back({ v,w });
        g[v].push_back({ u,w });
    }
    for (i = 1; i <= n; i++) {
        dis[0][i] = dis[1][i] = 2e9;
    }
    dis[0][1] = dis[1][1] = 0;
    he.push({ 1,0,0 });
    while (!he.empty()) {
        u = he.top().u;
        w = he.top().w;
        st = he.top().st;
        he.pop();
        if (u == n) {
            break;
        }
        for (auto x : g[u]) {
            if (dis[st][x.u] <= dis[st][u] + x.w)
                continue;
            dis[st][x.u] = dis[st][u] + x.w;
            he.push({ x.u, dis[st][x.u], st });
            if (st)
                continue;
            if (k >= x.w)
                continue;
            if (dis[st + 1][x.u] <= dis[st][u] + k)
                continue;
            dis[st + 1][x.u] = dis[st][u] + k;
            he.push({ x.u,dis[st + 1][x.u],st + 1 });
        }
    }
    ans = min(dis[1][n], dis[0][n]);
    if (ans > t) {
        printf("No Honey TT\n");
    }
    else {
        printf("Happy Winnie the Pooh :3\n");
        printf("%lld", ans);
    }
    return 0;
}
