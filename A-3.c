#include<stdio.h>

int main(){
	int n4[20], n6[20], n9[20], cost[20];    //数组用来储存合适的结果 
	int i, j, k;                             //用来遍历的三个变量 
	int m = 0;                               //数组储存时的索引 
	for(i = 1; i <= 21; i++){
		for(j = 1; j <= (91 - 4*i) / 6; j++){    //只需要注意循环的边界即可 
			k = (100 - 4*i - 6*j) / 9;
			if(4*i + 6*j + 9*k == 100){
				cost[m] = 20 * i + 25 * j + 30 * k;
				n4[m] = i;
				n6[m] = j;
				n9[m] = k;
				//遇到合适的值存储到数组中 
				printf("n4:%d\t n6:%d\t n9:%d\t cost:%d\n",n4[m],n6[m],n9[m],cost[m]);
				m++;
			}	
		}
	} 
} 


