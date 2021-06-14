/*
    Author	: ~Aphrodicez
    School	: RYW
    Lang	: CPP
    Algo	: Greedy Algorithm
    Status	: Accepted
*/

#include <bits/stdc++.h>
using namespace std;

void setIO();

int a[4];

void solve() {
    for(int i = 0; i < 4; i++) {
        cin >> a[i];
    }
    sort(a, a + 4);
    cout << a[0] * a[2] << '\n';
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
1 2 3 4

4 4 3 4
*/