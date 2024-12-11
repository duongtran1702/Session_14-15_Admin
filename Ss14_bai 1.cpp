#include<stdio.h>
#include<string.h>
int main(){
	char str[100];
	printf("Enter string :");
	fgets(str,sizeof(str),stdin);
	str[strcspn(str,"\n")]='\0';
	int n=strlen(str);
	printf("%s have %d characters",str,n);
}