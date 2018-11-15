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
	//定义遍历和存储时候的索引
	
	                              
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
	//申请动态的结构数组 
	int i,max;
	max = drawer(rs);
	for(i=0;i<19;i++){
		printf("%2d: 购买4屉%2d个，购买6屉%2d个，购买9屉%2d个，合计总价%2d元\n",i+1,rs[i].n4,rs[i].n6,rs[i].n9,rs[i].cost);
	}
	return 0;
} 
