#include<stdio.h>
#include<string.h>
int main(){
	char str[]="admin atmin";
	int n=strlen(str);
	for(int i=0;i<n;i++){
		printf("%c ",str[i]);
	}
}