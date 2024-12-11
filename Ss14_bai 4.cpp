#include<stdio.h>
#include<string.h>
void occur_character(const char *str,size_t size){
	int temp[128]={0};
	for(int i=0;i<size;i++){
		temp[str[i]]+=1;
	}
	printf("Enter a character :");
	char s;
	scanf("%c",&s);
	printf("The character %c appears %d times.",s,temp[s]);	
}
int main(){
	char str[]="abcdefghik";
	size_t len=strlen(str);
	occur_character(str,len);
}