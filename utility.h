#include<stdio.h>
#include<string.h>

char* getElementAtIndex(char* buffer[], int index)
{
	if(buffer[0] == NULL)
	{
		exit(0);
	} 
	if(buffer[index] == NULL)
	{
		exit(0);		
	}
	char *ref = "\0";
	ref = buffer[index];
	return ref;
}

void addToBuffer(char* buffer[],char str[], int bufferSize){
	int i=0;
	for(i=0;i<bufferSize;i++){
		if(buffer[i]==NULL){
			break;
		}
	}
	int len = strlen(str)+1;
	char* tmp;
	tmp =(char *) malloc(len*sizeof(char));
	strcpy(tmp,str);
	buffer[i]=tmp;
}

void printBuffer(char* buffer[]){

	int i=0;
	if(buffer[0]==NULL){
		
	}
	for(i=0;buffer[i]!=NULL;i++){
		printf("*Buffer[%d] = %s\n",i,buffer[i]);
	}
}

void initializeBuffer(char *buffer[]){
        int i = 0;
	for(i=0;i<10;i++){
		buffer[i]=NULL;
	}
}

