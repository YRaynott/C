#include <stdio.h>
#include <stdlib.h>
#include <memory.h>

int main(void){
	int room[100]={0}, nStudents, head=1, sum1, sum2, i, r, m, k, j;
	scanf("%d",&m);
	for(k=0;k<m;k++){
		scanf("%d",&nStudents);
		for(i=0; i<nStudents; i++){
 	 		scanf("%d",&r);
    		room[r]++;
		}
		for(sum1=i=0;i<100;i++){
    		sum1+=abs(i-head)*room[i];
		}
		for(head=2;head<101;head++){
    		for(sum2=i=0;i<100;i++){
    			sum2+=abs(i-head)*room[i];
			}
			if(sum1>sum2){
				sum1=sum2;
				sum2=0;
			}else{
				printf("%d\n",sum1);
				sum1=0;
				head=1;
				memset(room,0,100*sizeof(int));
				break;
			}
    	}
	}
	return 0;
}
