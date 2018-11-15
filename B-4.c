#include<stdio.h>
#include<stdlib.h>

struct plan{
	int n4,n6,n9,cost;
}; 

struct plan rs[50];

void drawer(int *max) {
	int i, j, k;
	int m = 0;                               //���鴢��ʱ������ 
	for(i = 1; i <= 21; i++){
		for(j = 1; j <= (91 - 4*i) / 6; j++){    //ֻ��Ҫע��ѭ���ı߽缴�� 
			k = (100 - 4*i - 6*j) / 9;
			if(4*i + 6*j + 9*k == 100){
				rs[m].cost = 20 * i + 25 * j + 30 * k;
				rs[m].n4 = i;
				rs[m].n6 = j;
				rs[m].n9 = k;
				//�������ʵ�ֵ�洢�������� 
				m++;
			}	
		}
	} 
	*max = m;
	
}

int main(){
	int a,max;
	drawer(&max);
	for(a = 0;a < max ;a++){
		printf("%2d: ����4��%2d��������6��%2d��������9��%2d�����ϼ��ܼ�%2dԪ\n",a+1,rs[a].n4,rs[a].n6,rs[a].n9,rs[a].cost);
	}
	return 0;
} 

