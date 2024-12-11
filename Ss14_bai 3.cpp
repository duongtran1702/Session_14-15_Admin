#include<stdio.h>
#include<string.h>
int main(){
	char str[]="nimta nimda";
	int n=strlen(str);
	char reserved_str[n+1];
	for(int i=0;i<n;i++){
		reserved_str[i]=str[n-i-1];
	}
	reserved_str[n]='\0';
	printf("%s",reserved_str);
}