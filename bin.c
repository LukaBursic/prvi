#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#ifndef DEBUG
#define DEBUG(...)printf(__VA_ARGS__)
#endif

int main(){    
	int br;
	scanf("%d",&br);
	for (int i = 15; i >= 0; i = i - 1)
	printf("%d", br >> i & 0x1);


     return 0;
}