#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
	char input[100];
	int letterCount = 0, numberCount = 0, specialCount = 0;
	printf("Nhap 1 chuoi bat ky : ");
	fgets(input,sizeof(input),stdin);
	for(int i = 0 ; i < strlen(input) ; i++){
		if(isalpha(input[i])){
			letterCount++;
		}else if(isdigit(input[i])){
			numberCount++;
		}else if(!isspace(input[i])){
			specialCount++;
		}
	}
	printf("So ky tu chu trong chuoi %s la : %d \n",input,letterCount);
	printf("So ky tu so trong chuoi %s la : %d \n",input,numberCount);
	printf("So ky tu dac biet trong chuoi %s la : %d \n",input,specialCount);
	return 0;
}
