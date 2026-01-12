#include <stdio.h>
#pragma warning(disable:4996)

int main() {

	int N, cnt = 0; //N<=1000 -> 어차피 999까지만 파악하면 됨

	scanf("%d", &N);


	for (int i = 1; i <= N; i++) {
		if (i < 100) {
			cnt++;
		}

		else {
			if ((i % 10) + (i / 100) == 2 * ((i % 100) / 10)) cnt++;
		}
	}

	printf("%d", cnt);

	return 0;
}