#include<stdio.h>

struct plan{
	int n4, n6, n9;
	int cost;
};

int main(){
	struct plan rs[20];
	int i, j, k;                             //用来遍历的三个变量 
	int m = 0;                               //数组储存时的索引 
	for(i = 1; i <= 21; i++){
		for(j = 1; j <= (91 - 4*i) / 6; j++){    //只需要注意循环的边界即可 
			k = (100 - 4*i - 6*j) / 9;
			if(4*i + 6*j + 9*k == 100){
				rs[m].cost = 20 * i + 25 * j + 30 * k;
				rs[m].n4 = i;
				rs[m].n6 = j;
				rs[m].n9 = k;
				//遇到合适的值存储到数组中 
				printf("n4:%d\t n6:%d\t n9:%d\t cost:%d\n",rs[m].n4,rs[m].n6,rs[m].n9,rs[m].cost);
				m++;
			}	
		}
	} 
	return 0;
}


