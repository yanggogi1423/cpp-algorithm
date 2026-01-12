#include <stdio.h>
#pragma warning(disable:4996)

int main() {

	int N, round = 0;
	int k, l;
	scanf("%d %d %d", &N, &k, &l);

	while(1){
		int min = k, max = l;
		if (k > l) {
			min = l, max = k;
		}
	
		if ((min % 2) == 1 && (max - min) == 1) {//1번의 경우
			round++;
			break;
		}
		else {
			if (k % 2 == 0) {
				k /= 2;
			}
			else {
				k++;
				k /= 2;
			}

			if (l % 2 == 0) {
				l /= 2;
			}
			else {
				l++;
				l/= 2;
			}
		}
	round++;
	}

	printf("%d", round);

	return 0;
}