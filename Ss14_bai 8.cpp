#include<stdio.h>
#include<string.h>
#include<ctype.h>

void capitalize_first_letter(char *str){
	int new_word=1;
	for(int i=0;i<strlen(str);i++){
		if(isspace(str[i])){//kiem tra dau cach
			new_word=1;
		}
		else if(new_word){
			str[i]=toupper(str[i]);//viet in hoa
			new_word=0;
		}
		else {
			str[i]=tolower(str[i]);//viet thuong
		}
	}
	printf("%s",str);
}

int main(){
	char str[100];
	printf("Enter string :");
	fgets(str,100,stdin);
	str[strcspn(str,"\0")]='\0';
	printf("%d",strcspn(str,"\0"));
	capitalize_first_letter(str);
}