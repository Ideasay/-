#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>


struct plan {
	int n4,n6,n9;
	int cost;
}; 


int drawer(struct plan *rs){
	int i, j, k;                              
	int m = 0; 
	//��������ʹ洢ʱ�������
	
	                              
	for(i = 1; i <= 21; i++){
		for(j = 1; j <= (91 - 4*i) / 6; j++){    
			k = (100 - 4*i - 6*j) / 9;
			if(4*i + 6*j + 9*k == 100){
				rs[m].cost = 20 * i + 25 * j + 30 * k;
				rs[m].n4 = i;
				rs[m].n6 = j;
				rs[m].n9 = k;
				m++;
			}	
		}
	}
	return m;
}




int main(){
	struct plan *rs;
	rs = (struct plan *)malloc(sizeof(int) * 80);
	//���붯̬�Ľṹ���� 
	int i,max;
	max = drawer(rs);
	for(i=0;i<19;i++){
		printf("%2d: ����4��%2d��������6��%2d��������9��%2d�����ϼ��ܼ�%2dԪ\n",i+1,rs[i].n4,rs[i].n6,rs[i].n9,rs[i].cost);
	}
	return 0;
} 
