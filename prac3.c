#include<stdio.h>

int main(){
	char ch;
	int alpha,digit;
	
	printf("Enter any character: ");
	scanf("%c",&ch);
	
	if(isalpha(ch)){
		printf("This character is an alphabet: %c\n",ch);
	}else if(isdigit(ch)){
		printf("This character is a digit: %c\n",ch);
	}else{
		printf("This character is a special character: %c\n",ch);
	}
	return 0;
}
