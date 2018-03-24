#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>


struct plan {
	int n4,n6,n9;
	int cost;
}; 
//定义结构

int main(){
	struct plan *rs;
	//定义结构指针rs
	
	rs = (struct plan *)malloc(sizeof(int) * 80);
	//申请动态的结构数组 
	
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
				printf("n4:%d\t n6:%d\t n9:%d\t cost:%d\n",rs[m].n4,rs[m].n6,rs[m].n9,rs[m].cost);
				m++;
			}	
		}
	}
	//遍历并存储合适的值
	
	free(rs);
	//释放空间
	 
	return 0; 
} 
