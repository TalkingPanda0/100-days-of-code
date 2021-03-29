#include "main.h"
#include <stdio.h>
int main(){
if(calcAge(65) == 23725 && calcAge(0) == 0 && calcAge(20) == 7300){
	printf("all test passed");
	return 0;
}
else{
	return 1;
}

}
