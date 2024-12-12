#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
	char str[100] = "Ngo Quang Anh";
	char input;
	printf("Nhap vao 1 ky tu : ");
	input = getchar();
	int length = strlen(str);
	for(int i = 0 ; i < length ; i++){
		str[i] = tolower(str[i]);
	}
	for(int i = 0 ; i < length ; i++){
		if(str[i] == input && str[i] != ' '){
			for(int j = i ; j < length ; j++){
				str[j] = str[j+1];
			}
			length--;
			i--;
		}
	}
	printf("Chuoi sau khi xoa la : %s",str);
}
