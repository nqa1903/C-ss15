#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
	char input[100];
	printf("Nhap vao 1 chuoi ky tu : ");
	fgets(input , sizeof(input) , stdin);
	for(int i = 0 ; i < strlen(input) ; i++){
		if(isalpha(input[i]) && (i == 0 || input[i - 1] == ' ')){
			input[i] = toupper(input[i]);
		}
	}
	printf("Chuoi sau khi duoc viet hoa chu cai dau : %s",input);
	return 0;
}
