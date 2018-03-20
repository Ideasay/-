#include<stdio.h>

int main(){
	int n4 , n6 , n9;
	int cost;
	for(n4 = 1; n4 <= 21; n4++){
		for(n6 = 1; n6 <= (91 - 4*n4) / 6; n6++){    //只需要注意循环的边界即可 
			n9 = (100 - 4*n4 - 6*n6) / 9;
			if(4*n4 + 6*n6 + 9*n9 == 100){
				cost = 20 * n4 + 25 * n6 + 30 * n9;
				printf("n4:%d\t n6:%d\t n9:%d\t cost:%d\n",n4,n6,n9,cost);
			}	
		}
	} 
	return 0;
} 





