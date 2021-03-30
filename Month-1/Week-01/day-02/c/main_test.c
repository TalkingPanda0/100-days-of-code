#include <stdio.h>
#include <string.h>
#include "main.h"
int main(){
	if(strstr(findNemo("Hello"),"Can't Find Nemo!")){		
			printf("test 1 passed\n");
	}
	if(strstr(findNemo("I am finding Nemo !"),"Found Nemo At 3!")){		
			printf("test 2 passed\n");
	}
	if(strstr(findNemo("Nemo is me !"),"Found Nemo At 0!")){		
			printf("test 3 passed\n");
	}
	if(strstr(findNemo("I Nemo am !"),"Found Nemo At 1!")){
			printf("test 4 passed\n");
	}
	return 0;
	}

