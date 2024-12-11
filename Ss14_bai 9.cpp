#include<stdio.h>
#include<string.h>
void remove_character(char *str);

int main(){
	char str[100];
	printf("Enter string :");
	fgets(str,100,stdin);
	str[strcspn(str,"\0")]='\0';
	remove_character(str);
}
void remove_character(char *str){
	printf("Enter a character :");
	char character;
	scanf(" %c",&character);
	int j=0;
	for(int i=0;i<strlen(str);i++){
		if(str[i]!=character){
			str[j++]=str[i];
		}
	}
	str[j]='\0';
	printf("%s",str);
}