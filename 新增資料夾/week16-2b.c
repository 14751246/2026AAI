#include <stdio.h>
int main()
{
	int a;
	scanf("%d", &a);
	int ans =0;
	for(int i=1; i<=1000; i++) {
		if(i*i == a) ans = i;
	}
	printf("%d", ans);
	}
