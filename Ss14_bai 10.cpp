#include<stdio.h>
#include<string.h>

void count_occurrences(char *str){
	size_t len=strlen(str);
	int temp[128]={0};
	for(int i=0;i<len;i++){
		temp[str[i]]+=1;
	}
	for (int i=0;i<len;i++){
		if(temp[str[i]]>0){
			printf("The character '%c' appears %d times.\n",str[i],temp[str[i]]);
			temp[str[i]]=0;
		}
	}
}
int main(){
	char str[100];
	printf("Enter string :");
	fgets(str,100,stdin);
	str[strcspn(str,"\n")]='\0';
	count_occurrences(str);
}