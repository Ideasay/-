/*��̬���䳣������*/
#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

int main(){
	int *n4,*n6,*n9,*cost;  
	//�����ĸ�ָ�룬�ֱ����������ĸ���̬����
	
	n4 = (int *)malloc(20 * sizeof(int));
	n6 = (int *)malloc(20 * sizeof(int));
	n9 = (int *)malloc(20 * sizeof(int));
	cost = (int *)malloc(20 * sizeof(int));
	//���������ĸ�int���͵Ķ�̬���飬����Ϊ20��int
	
	int i,j,k;
	int m = 0; 
	//���ڱ��������Լ��洢
	
	for(i = 1; i <= 21; i++){
		for(j = 1; j <= (91 - 4*i) / 6; j++){    //ֻ��Ҫע��ѭ���ı߽缴�� 
			k = (100 - 4*i - 6*j) / 9;
			if(4*i + 6*j + 9*k == 100){
				cost[m] = 20 * i + 25 * j + 30 * k;
				n4[m] = i;
				n6[m] = j;
				n9[m] = k;
				printf("%2d: ����4��%2d��������6��%2d��������9��%2d�����ϼ��ܼ�%2dԪ\n",m+1,n4[m],n6[m],n9[m],cost[m]);
				m++;
			}	
		}
	}  
	// ��ɱ�����洢����������� 
	
	free(n4);
	free(n6);
	free(n9);
	free(cost);
	//ʹ�����ڴ漰ʱ�ͷ��ڴ� 
	 
	
	return 0; 
} 
