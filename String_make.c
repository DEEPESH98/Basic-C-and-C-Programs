#include<stdio.h>
#include<conio.h>

void main(){
		char a[1000];
		
		printf("Enter a sentence = ");
		scanf("%[^\n]", a); //A very simple but unsafe implementation to read line for static allocation:
		
		printf("%s",a);
		

return 0;
}
