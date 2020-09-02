/*
    TASK    : 0
    LANG    : CPP
    AUTHOR  : Aphrodicez
    SCHOOL  : RYW
*/
#include<bits/stdc++.h>
using namespace std;

#define dec(d, x) fixed << setprecision(d) << x;

struct A{
    int i;
    bool operator < (const A&o) const {
        return i > o.i;
    }
};

priority_queue <A> he;

void setIO(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
}

void test_case(){
    int n, m, u, v, i, ii;
    cin >> n >> m;
    vector <int> in(n+10, 0);
    vector <int> g[n+10];
    vector <int> ans;
    pair<int, int> junc;
    bool ch = 0;
    for(i=0; i<m; i++){
        cin >> v >> u;
        in[v]++;
        g[u].push_back(v);
    }
    for(i=1; i<=n; i++){
        if(!in[i])
            he.push({i});
    }
    while(!he.empty()){
        i = he.top().i;
        he.pop();
        if(he.size()==1){
            ii = he.top().i;
            junc.first = i;
            junc.second = ii;
            ch = 1;
        }
        for(int x: g[i]){
            in[x]--;
            if(!in[x])
                he.push({x});
        }
        ans.push_back(i);
    }
    if(ans.size()!=n){
        cout << "Never";
    }
    else if(!ch){
        cout << "Same ";
        for(int i: ans){
            cout << i << " ";
        }
    }
    else{
        cout << "Different ";
        int x = junc.first, y = junc.second;
        for(int i: ans){
            if(i==x)
                cout << y;
            else if(i==y)
                cout << x;
            else
                cout << i;
            cout << " ";
        }
    }
    cout << "\n";
}

int main()
{
    setIO();

    int q;
    cin >> q;

    while(q--){
        test_case();
    }

    return 0;
}
/*
3
4 4
2 1
3 1
4 2
4 3
2 2
1 2
2 1
2 1
1 2
*/
