/*
	TASK: Hello ACM
	LANG: CPP
	AUTHOR: Aphrodicez
	SCHOOL: RYW
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
	int q, i, j;
	scanf("%d", &q);
	for (i = 1; i <= q; i++)
	{
		int total, target, cnt = 0;
		scanf("%d %d", &total, &target);
		for (j = 0; j <= target / 20; j++)
		{
			int used = target - (20 * j);
			if (used <= total)
				cnt++;
		}
		printf("Case #%d: %d\n", i, cnt);
	}
	return 0;
}

/*
5
60 55
100 60
300 400
900 0
150 150
*/
