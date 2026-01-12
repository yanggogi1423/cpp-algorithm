#include <stdio.h>
#pragma warning(disable:4996)

int main() {

	int N;
	scanf("%d", &N);

	int comp = N;
	int cnt = 0;
	int result;

	while (1) {
		cnt++;

		result = ((N % 10) + (int)(N / 10)) % 10 + (N % 10) * 10;


		if (comp == result) {
			break;
		}
		N = result;
	}
	printf("%d", cnt);

	return 0;
}