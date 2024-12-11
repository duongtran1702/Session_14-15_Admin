#include<stdio.h>
#include<string.h>
void count_letter(char *str){
	size_t len=strlen(str);
	int index=0;
	for(int i=0;i<len;i++){
		if(str[i]>=65&&str[i]<=122){
			index+=1;
		}
	}
	printf("Count letter : %d",index);
}
int main(){
 	char str[100];
 	printf("Enter string :");
 	fgets(str,100,stdin);
 	str[strcspn(str,"\n")]='\0';
 	count_letter(str);
}