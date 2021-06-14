/*
    Author	: ~Aphrodicez
    School	: RYW
    Lang	: CPP
    Algo	: Sieve of Eratosthenes
    Status	: Accepted
*/

#include <bits/stdc++.h>
using namespace std;

void setIO();

const int N = 1e3 + 10;
const int M = 2e5 + 10;

bool mark[N];

void solve() {
    int n, k, cnt = 0;
    cin >> n >> k;
    for(int i = 2; i <= n; i++) {
        if(mark[i])
            continue;
        for(int j = i; j <= n; j += i) {
            if(mark[j])
                continue;
            mark[j] = true;       
            cnt++;
            if(cnt == k) {
                cout << j << '\n';
                return ;
            }
        }
    }
}

int main() {
    setIO();
    solve();
    return 0;
}
void setIO() {
    ios_base :: sync_with_stdio(0);
    cin.tie(0);
}
/*
7 3
15 12
10 7
*/