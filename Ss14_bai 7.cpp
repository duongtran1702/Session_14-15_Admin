#include<stdio.h>
#include<string.h>
void count_character(char *str){
	size_t len=strlen(str);
	int index_letter=0;
	int index_number=0;
	int index_special=0;
	for(int i=0;i<len;i++){
		if(str[i]>=65&&str[i]<=122){
			index_letter+=1;
		}
		else if(str[i]>=48&&str[i]<=57){
			index_number+=1;
		}
		else{
			index_special+=1;
		}
	}
	printf("Count letter : %d \n",index_letter);
	printf("Count number : %d \n",index_number);
	printf("Count special character : %d ",index_special);
}
int main(){
 	char str[100];
 	printf("Enter string :");
 	fgets(str,100,stdin);
 	str[strcspn(str,"\n")]='\0';
 	count_character(str);
}