int sockPairs(char socks[],int size){
	int i;
	int a;
	int output = 0;
	for(i=0;i<size;i++){
		char letter = socks[i];
		for(a=i+1;a<size;a++){
			if(socks[a] == letter){
				socks[a] = '\0';
				output++;
			}
		}
	}
	return output/2;
}
