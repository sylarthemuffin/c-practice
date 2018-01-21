
/*
	@author ztk
	ztk@iastate.edu
	

*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>


int main(void){
	char name[50] = "";
	char descriptor[50] = "";
	char* adj = NULL;
	char* title = NULL;
	char* greeting = NULL;
	srand( time(NULL));
	int random = rand() %  5;
	printf("What is your name: ");
	scanf("%s", name);
	
	switch(random){
		case 0:
			strcpy(descriptor, " the great!");
			adj = (char*) malloc((strlen(descriptor) + 1) * sizeof(char));
			strcpy(adj, descriptor);
			break;
		case 1:
			strcpy(descriptor, " the mighty.");
			adj = (char*) malloc((strlen(descriptor) + 1) * sizeof(char));
			strcpy(adj, descriptor);
			break;
		case 2: 
			strcpy(descriptor, " the wise.");
			adj = (char*) malloc((strlen(descriptor) + 1) * sizeof(char));
			strcpy(adj, descriptor);
			break;
		case 3:
			strcpy(descriptor, " the incredible.");
			adj = (char*) malloc((strlen(descriptor) + 1) * sizeof(char));
			strcpy(adj, descriptor);
			break;
		case 4:
			strcpy(descriptor, " the chosen one!");
			adj = (char*) malloc((strlen(descriptor) + 1) * sizeof(char));
			strcpy(adj, descriptor);
			break;
	}
	title = (char*) malloc((strlen(name) + 1) * sizeof(char) + (strlen(adj) + 1) * sizeof(char));
	strcpy(title, name);
	strcat(title, adj);
	free(adj);
	switch(random){
		case 0:
			greeting = (char*) malloc(11 * sizeof(char));
			strcpy(greeting, "Hey! It's ");
			break;
		case 1:
			greeting = (char*) malloc(7 * sizeof(char));
			strcpy(greeting, "Hello ");
			break;
		case 2:
			greeting = (char*) malloc(11 * sizeof(char));
			strcpy(greeting, "Wow! It's ");
			break;
		case 3:
		case 4:
			greeting = (char*) malloc(26 * sizeof(char));
			strcpy(greeting, "It's so nice to meet you, ");
			break;
	}
	printf("%s%s", greeting, title);
	free(greeting);
	return 0;
}