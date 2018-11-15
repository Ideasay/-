#include<stdio.h>
#include<stdlib.h>


int n4[20], n6[20], n9[20], cost[20]; 

void drawer(int *sol_num) {
	int i, j, k;                             //用来遍历的三个变量 
	int m = 0;                               //数组储存时的索引 
	for (i = 1; i <= 21; i++) {
		for (j = 1; j <= (91 - 4 * i) / 6; j++) {    //只需要注意循环的边界即可 
			k = (100 - 4 * i - 6 * j) / 9;
			if (4 * i + 6 * j + 9 * k == 100) {
				cost[m] = 20 * i + 25 * j + 30 * k;
				n4[m] = i;
				n6[m] = j;
				n9[m] = k;
				m++; 
			}
		}
	}
	*sol_num = m;
}

int main(){
	int a,max;
	drawer(&max);
	for(a = 0;a < max ;a++){
		printf("%2d: 购买4屉%2d个，购买6屉%2d个，购买9屉%2d个，合计总价%2d元\n",a+1,n4[a],n6[a],n9[a],cost[a]);
	}

} 

