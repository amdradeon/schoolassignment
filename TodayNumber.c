#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int randomnumber();

int main(){

	srand((unsigned int)time(0));

	while(1){
		printf("������ �ζǹ�ȣ�� ����Ͻðڽ��ϱ�?\n");


	}




	return 0;}

int randomnumber(){

	return rand()%45+1;
}