/*
    TASK:
    LANG: CPP
    AUTHOR: Aphrodicez
    SCHOOL: RYW
*/

#include <bits/stdc++.h>
using namespace std;

vector <int> head, tail;

int main()
{
    int n, i;
    scanf("%d", &n);
    for (i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            head.push_back(i);
            if (i * i == n)
                continue;
            tail.push_back(n / i);
        }
    }
    for (int x : head)
        printf("%d ", x);
    for (i = tail.size() - 1; i >= 0; i--)
        printf("%d ", tail[i]);
    return 0;
}
