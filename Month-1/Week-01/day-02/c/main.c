#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
#define NEMO "Nemo"
char *output = "Can't Find Nemo!";
char *findNemo(char str[100]){
	char split[100][100];
	int i = 0;
	int words = 0;
	int letter = 0;
	//split str
	for(i=0;i<=(strlen(str));i++){
		if(str[i] == ' '){
			split[words][letter] = '\0';
			words++;
			letter = 0;
		}
		else{
			split[words][letter] = str[i];
			letter++;
		}
	}
    size_t size = 0;
    while (split[size][0] != NULL) size++;
//try to find nemo
for(i=0;i<=size;i++)
	{
		if(!strcmp(split[i],NEMO)){
			snprintf(output,1024,"Found Nemo At %d!",i);
		}
	}
	return output;
}







