#include <stdio.h>

typedef struct{
	int binary[200];
	int check;
}min;

int main(){
	int var=20, minterm=0, dc=0;

	printf("변수의 개수 입력: \n");
	scanf("%d", &var);

	int nArr[20] = { 0 };
	
	printf("minterm의개수 입력: \n");
	scanf("%d", &minterm);

	printf("don't care조건의 개수 입력: \n");
	scanf("%d", &dc);

	printf("minterm 번호 입력: \n");

	for(int i =0; i<minterm; i++){
		scanf("%d", );
	}
	
	for(int i=0; i<var; i++){
		printf("%d", nArr[var]);
	}
	printf("\n");

	return 0;
}
