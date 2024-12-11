#include<stdio.h>
#include<string.h>
// a b c d
void count_word(const char *str){
	size_t len=strlen(str);
	int count=0;
	for(int i=0;i<len;i++){
		if(str[i]!=' '&&(i==0||str[i-1]==' ')){
			count+=1;
		}
	}
	printf("Word count : %d",count);	
}
int main(){
	char str[100];
	printf("Enter string :");
	fgets(str,100,stdin);
	str[strcspn(str,"\n")]=' ';
	count_word(str);
}