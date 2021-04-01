#include <stdio.h>
#include "main.h"
#define SIZEOF(x) (sizeof(x) / sizeof((x)[0]))
int miles[] = {1,12,11,11};
int miles2[] = {10,11,12,9,10};
int miles3[] = {6,5,4,3,2,9};
int miles4[] = {9,9};
int main(){
	if(progressDays(miles,SIZEOF(miles)) == 2){
		printf("test 1 passed\n");
	}
	if(progressDays(miles2,SIZEOF(miles2)) == 3){
		printf("test 2 passed\n");
	}	
	if(progressDays(miles3,SIZEOF(miles3)) == 1){
		printf("test 3 passed\n");
	}
	if(progressDays(miles4,SIZEOF(miles4)) == 0){
		printf("test 4 passed\n");
	}



	return 0;
}
