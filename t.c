#include <stdio.h>

typedef struct{
	int binary[200];
	int check;
}min;

int main(){
	int var=0, minterm=0, dc=0;
	int arr[100];

	printf("변수의 개수 입력: \n");
	scanf("%d", &var);
	
	printf("minterm의개수 입력: \n");
	scanf("%d", &minterm);

	printf("don't care조건의 개수 입력: \n");
	scanf("%d", &dc);

	printf("minterm 번호 입력: \n");
	scanf("");

	printf("00000? %d", arr[0]);

		

	return 0;
}
