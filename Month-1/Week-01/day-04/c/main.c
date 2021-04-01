#include <stdio.h>
int progressDays(int miles[],size_t size){
	int output = 0;
	int i = 0;
	int a = -1;
	for(i=0;i<size;i++){
		if(miles[i] > miles[a]){
			output = output + (miles[i] > miles[a]);
		}
		a++;
	}	
	return output;
}
