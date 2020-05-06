/*
    TASK: Count Down 2020
    LANG: CPP
    AUTHOR: Aphrodicez
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
double num[10010];
int main()
{
    int m, i, n, Window;
    double sum = 0;
    int cnt = 0;
    double now;
    scanf("%d %d", &n, &m);
    for (i = 1; i <= n; i++) {
        scanf("%lf", &now);
        num[i] = num[i - 1] + now;
    }
    Window = m;
    printf("%d\n", n - Window + 1);
    for (i = Window; i <= n; i++) {
        printf("%.6lf\n", (num[i] - num[i - m]) / m);
    }
    return 0;
}
