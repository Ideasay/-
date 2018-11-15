#include<stdio.h>

struct plan{
	int n4 , n6 , n9;
	int cost;
};


int main(){
	struct plan rs;
	int i = 1;
	for(rs.n4 = 1; rs.n4 <= 21; rs.n4++){
		for(rs.n6 = 1; rs.n6 <= (91 - 4*rs.n4) / 6; rs.n6++){    //只需要注意循环的边界即可 
			rs.n9 = (100 - 4*rs.n4 - 6*rs.n6) / 9;
			if(4*rs.n4 + 6*rs.n6 + 9*rs.n9 == 100){
				rs.cost = 20 * rs.n4 + 25 * rs.n6 + 30 * rs.n9;
				printf("%2d: 购买4屉%2d个，购买6屉%2d个，购买9屉%2d个，合计总价%2d元\n",i,rs.n4,rs.n6,rs.n9,rs.cost);
				i++;
			
			}	
		}
	} 
	return 0;
}
