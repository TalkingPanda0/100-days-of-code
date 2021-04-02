#include <stdio.h>
#include "main.h"
#define SIZEOF(x) (sizeof(x) / sizeof((x)[0]))
int main(){
	char socks[] = "AA";
	char socks2[] = "ABABC";
	char socks3[] = "";
	char socks4[] = "Cc";
	if(sockPairs(socks,SIZEOF(socks)) == 1){
		printf("test 1 passed\n");
	}
	if(sockPairs(socks2,SIZEOF(socks2)) == 2){
		printf("test 2 passed\n");
	}
	if(sockPairs(socks3,SIZEOF(socks3)) == 0){
		printf("test 3 passed\n");
	}
	if(sockPairs(socks4,SIZEOF(socks4)) == 0){
		printf("test 4 passed\n");
	}



	return 0;
}
