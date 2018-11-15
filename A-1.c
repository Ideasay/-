#include<stdio.h>

int main(){
	int n4 , n6 , n9;
	int cost;
	int i = 1; 
	for(n4 = 1; n4 <= 21; n4++){
		for(n6 = 1; n6 <= (91 - 4*n4) / 6; n6++){    
			n9 = (100 - 4*n4 - 6*n6) / 9;
			if(4*n4 + 6*n6 + 9*n9 == 100){
				cost = 20 * n4 + 25 * n6 + 30 * n9;
				printf("%2d: 购买4屉%2d个，购买6屉%2d个，购买9屉%2d个，合计总价%2d元\n",i,n4,n6,n9,cost);
				i++;
			}	
		}
	} 
	return 0;
} 

