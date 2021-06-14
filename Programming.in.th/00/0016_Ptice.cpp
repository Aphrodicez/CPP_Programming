/*
    Author	: ~Aphrodicez
    School	: RYW
    Lang	: CPP
    Algo	: Sorting
    Status	: Accepted
*/
#include <bits/stdc++.h>
using namespace std;

string Adrian = "ABCABCABCABC", Bruno = "BABCBABCBABC", Goran = "CCAABBCCAABB";

void setIO();

int main() {
    setIO();
    int n;
    cin >> n;
    string s;
    cin >> s;
    int a, b, g;
    a = b = g = 0;
    for(int i = 0; i < s.size(); i++) {
        a += s[i] == Adrian[i%12];
        b += s[i] == Bruno[i%12];
        g += s[i] == Goran[i%12];
    }
    int mx = max({a, b, g});
    cout << mx << '\n';
    cout << ((a == mx) ? "Adrian\n" : "");
    cout << ((b == mx) ? "Bruno\n" : "");
    cout << ((g == mx) ? "Goran\n" : "");
    return 0;
}
void setIO() {
    ios_base :: sync_with_stdio(0);
    cin.tie(0);
}
/*
5
BBAACC
9
AAAABBBBB
*/