#include <string.h>
#include <stdio.h>
#include <stdlib.h>
char *bbq_skewer(char *grill[5]){
	int nonveg;
	int veg;
	int i;
	char *output = malloc(sizeof(char) * 1024);
	veg = 0;
	nonveg = 0;
	for(i=0;i<5;i++){
		if(strchr(grill[i],'x') != NULL){
			//if x is found
				nonveg++;
		}
		else{
			//else
				veg++;
		}
	}
	snprintf(output,1024,"%d vegetarian skewers, %d non-vegetarian skewers",veg,nonveg);
	return output;
}
