#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

int main(){
	int *n4,*n6,*n9,*cost;  
	//定义四个指针，分别用来申请四个动态数组
	
	n4 = (int *)malloc(20 * sizeof(int));
	n6 = (int *)malloc(20 * sizeof(int));
	n9 = (int *)malloc(20 * sizeof(int));
	cost = (int *)malloc(20 * sizeof(int));
	//用来申请四个int类型的动态数组，长度为20个int
	
	int i,j,k;
	int m; 
	//用于遍历数组以及存储
	
	for(i = 1; i <= 21; i++){
		for(j = 1; j <= (91 - 4*i) / 6; j++){    //只需要注意循环的边界即可 
			k = (100 - 4*i - 6*j) / 9;
			if(4*i + 6*j + 9*k == 100){
				cost[m] = 20 * i + 25 * j + 30 * k;
				n4[m] = i;
				n6[m] = j;
				n9[m] = k;
				printf("n4:%d\t n6:%d\t n9:%d\t cost:%d\n",n4[m],n6[m],n9[m],cost[m]);
				m++;
			}	
		}
	}  
	// 完成遍历与存储，输出计算结果 
	
	free(n4);
	free(n6);
	free(n9);
	free(cost);
	//使用完内存及时释放内存 
	 
	
	return 0; 
} 
