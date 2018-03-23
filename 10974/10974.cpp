#include <cstdio>
#include <algorithm>
using namespace std;

int main() {
	int N;
	int *a;
	scanf("%d", &N);
	a = (int *)malloc(sizeof(int)*N);
	for (int i = 0; i < N; i++) {
		a[i] = i + 1;
		printf("%d ", a[i]);
	}
	printf("\n");
	while (next_permutation(a, a + N)) {
		for (int i = 0; i < N; i++) {
			printf("%d ", a[i]);
		}
		printf("\n");
	}
}