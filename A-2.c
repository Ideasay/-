#include<stdio.h>

struct plan{
	int n4 , n6 , n9;
	int cost;
};


int main(){
	struct plan rs;
	int i = 1;
	for(rs.n4 = 1; rs.n4 <= 21; rs.n4++){
		for(rs.n6 = 1; rs.n6 <= (91 - 4*rs.n4) / 6; rs.n6++){    //ֻ��Ҫע��ѭ���ı߽缴�� 
			rs.n9 = (100 - 4*rs.n4 - 6*rs.n6) / 9;
			if(4*rs.n4 + 6*rs.n6 + 9*rs.n9 == 100){
				rs.cost = 20 * rs.n4 + 25 * rs.n6 + 30 * rs.n9;
				printf("%2d: ����4��%2d��������6��%2d��������9��%2d�����ϼ��ܼ�%2dԪ\n",i,rs.n4,rs.n6,rs.n9,rs.cost);
				i++;
			
			}	
		}
	} 
	return 0;
}
