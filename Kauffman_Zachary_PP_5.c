/*
	@author: ztk
	ztk@iastate.edu


*/

#include <stdio.h>
#include <string.h>

void encode(char* text, int cipherShift);
void decode(char* text, int cipherShift);

int main(int argc, char* argv[]){
	char line[50];
	if(argc != 3){
		printf("Usage: cipher.exe [encode / decode] [cipher shift (positive integer)]");
		return 1;
	}
	int cipherShift = strtol(argv[2], NULL, 10);
	if(strcmp(argv[1], "encode") == 0){
		while(!feof(stdin)){
			fgets(line, 100, stdin);
			encode(line, cipherShift);
			printf("-%s\n", line);
		}
		
	}
	else if(strcmp(argv[1], "decode") == 0){
		while(!feof(stdin)){
			fgets(line, 100, stdin);
			decode(line, cipherShift);
			printf("-%s\n", line);
		}
	}
	else{
		printf("Usage: cipher.exe [encode / decode] [cipher shift (positive integer)]");
		return 1;
	}
}

void encode(char* text, int cipherShift){
	int i;
	int length = strlen(text);
	for(i = 0; i < length; i++){
		//is the original letter lowercase?
		if(text[i] > 96 && text[i] < 123){
			//is the shifted value still lowercase?
			if(text[i] + cipherShift < 123){
				text[i] = text[i] + cipherShift;
			}
			//if the shifted value is greater than 'z', set it back to 'a'
			else if(text[i] + cipherShift >= 123){
				text[i] = text[i] + cipherShift - 26;
			}
			
		}
		//is the original letter uppercase?
		if(text[i] > 64 && text[i] < 91){
			//is the shifted value still uppercase?
			if(text[i] + cipherShift < 91){
				text[i] = text[i] + cipherShift;
			}
			//if the shifted value is greater than 'Z', set it back to 'A'
			else if(text[i] + cipherShift >= 91){
				text[i] = text[i] + cipherShift - 26;
			}
		}
		
	}
}

void decode(char* text, int cipherShift){
	int i;
	int length = strlen(text);
	for(i = 0; i < length; i++){
		//is the original letter lowercase?
		if(text[i] > 96 && text[i] < 123){
			//is the shifted value still lowercase?
			if(text[i] - cipherShift > 96){
				text[i] = text[i] - cipherShift;
			}
			//if the shifted value is greater than 'z', set it back to 'a'
			else if(text[i] - cipherShift <= 96){
				text[i] = text[i] - cipherShift + 26;
			}
			
		}
		//is the original letter uppercase?
		if(text[i] > 64 && text[i] < 91){
			//is the shifted value still uppercase?
			if(text[i] - cipherShift > 64){
				text[i] = text[i] - cipherShift;
			}
			//if the shifted value is greater than 'Z', set it back to 'A'
			else if(text[i] - cipherShift <= 64){
				text[i] = text[i] - cipherShift + 26;
			}
		}
		
	}
}