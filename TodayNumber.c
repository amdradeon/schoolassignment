#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int randomnumber();

int main(){

	srand((unsigned int)time(0));

	while(1){
		printf("오늘의 로또번호를 출력하시겠습니까?\n");


	}




	return 0;}

int randomnumber(){

	return rand()%45+1;
}