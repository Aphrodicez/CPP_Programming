/*
    TASK:
    LANG: CPP
    AUTHOR: Aphrodicez
    SCHOOL: RYW
*/

#include <bits/stdc++.h>
using namespace std;

int score[5];

int main()
{
    int needs, i, sum = 0;
    scanf("%d", &needs);
    for (i = 0; i < 5; i++) {
        scanf("%d", &score[i]);
        sum += score[i];
    }
    for (i = 0; i < 5; i++) {
        if (sum - score[i] == needs) {
            sum -= score[i];
            score[i] = 0;
        }
    }
    if (sum == needs) {
        for (i = 0; i < 5; i++)
            printf("%d ", score[i]);
    }
    else
        printf("-1");
    return 0;
}
