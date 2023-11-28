#include <stdio.h>
#include <stdlib.h>

int main(void){
	int m, a, k, n, target, i, j, x, y, count;
	scanf("%d",&m);
	for(a=0;a<m;a++){
	scanf("%d%d",&n,&target);
	if(target<=n*n){
	for(k=0;k<n/2+1;k++){
	if((2*k-1)*(2*k-1)<target<=(2*k+1)*(2*k+1)){
		count=(2*k-1)*(2*k-1);
		x=n/2+k+1,y=n/2+k+1;
		for(i=1;i<=4;i++){
			for(j=0;j<2*k;j++){
				switch(i%4){
					case 0:y=y+1;break;
					case 1:x=x-1;break;
					case 2:y=y-1;break;
					case 3:x=x+1;break;
				}
				if(++count==target)
				printf("(%d,%d)\n",x,y);
				}
			}	
		}else{
			break;
		}
	}
	}
	}
	return 0;
}
