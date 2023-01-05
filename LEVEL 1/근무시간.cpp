#include <stdio.h>


int main(void)
{
	int A_H = 0, A_M = 0; //출근시간
	int P_H = 0, P_M = 0; //퇴근시간
	int sum = 0;

	for(int i = 0; i<5; i++){
		scanf("%d:%d %d:%d",&A_H,&A_M,&P_H,&P_M);
		sum += ((P_H-A_H)*60)+(P_M-A_M);
	}
	printf("%d",sum);
	return 0;
}
