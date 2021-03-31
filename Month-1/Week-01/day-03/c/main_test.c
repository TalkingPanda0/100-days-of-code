#include <stdio.h>
#include <string.h>
#include "main.h"
int main() {
	char *grill1[5] = { 
		"--xo--x--ox---",
		"--xx--x--oo--",
		"--oo--o--oo--",
		"--xx--x--xx--",
		"--xx--x--ox--" };
	char *grill2[5] = {
		"--oooo-ooo---",
		"--xx--x--xx--",
		"--o---o--oo--",
		"--xx--x--ox--",
		"--xx--x--ox--"
	};
	char *grill3[5] = {
		"--oooo-ooo--",
		"--xxxxxxxx--",
		"--o---",
		"-o-----o---x--",
		"--o---o-------"
	};
	if(!strcmp(bbq_skewer(grill1),"1 vegetarian skewers, 4 non-vegetarian skewers")){
		printf("test 1 passed\n");
	}
	if(!strcmp(bbq_skewer(grill2),"2 vegetarian skewers, 3 non-vegetarian skewers")){
		printf("test 2 passed\n");
	}
	if(!strcmp(bbq_skewer(grill3),"3 vegetarian skewers, 2 non-vegetarian skewers")){
		printf("test 3 passed\n");
	}


	return 0;
}
