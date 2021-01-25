#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#ifndef DEBUG
#define DEBUG(...)printf(__VA_ARGS__)
#endif

int main(){    
	int x;
	scanf("%d",&x);
	for (int i = 15; i >= 0; i = i - 1)
	printf("%d", x >> i & 0x1);


     return 0;
}
