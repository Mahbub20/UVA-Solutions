#include <stdio.h>

int main() {
	while (1) {
		int a[10], b[10], y = 1,i;
		for ( i = 0; i < 5; i++)
			if (scanf("%d", &a[i]) != 1)
				return 0;
		for ( i = 0; i < 5; i++)
			if (scanf("%d", &b[i]) != 1)
				return 0;
		for ( i = 0; i < 5; i++)
			y &= a[i] != b[i];
		puts(y ? "Y" : "N");
	}
	return 0;
}
