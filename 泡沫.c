#include <stdio.h>
#include <memory.h>

int main(void){
	int nTests, iTest, i, n, j, data[100], tmp, nComp, nExch, k, y=1;
	scanf("%d",&nTests);
	for(iTest=0;iTest<nTests;iTest++){
		scanf("%d",&n);
		for(i=0;i<n;i++){
			scanf("%d",&data[i]);
		}
		for(i=0;i<n-1&&y>0;i++){
			y=0;
			for(j=n-2;j>=i;j--){
				nComp+=1;
				if(data[j]>data[j+1]){
					y+=1;
					nExch+=1;
					tmp=data[j];
					data[j]=data[j+1];
					data[j+1]=tmp;
					for(k=0;k<n-1;k++){
						printf("%d ",data[k]);
					}
					printf("%d\n",data[n-1]);
				}
			}
		}
		if(y==0){
			nExch-=1;
		}
		printf("%d %d\n",nComp,nExch+1);
		memset(data,0,100*sizeof(int));
		nComp=nExch=0;
		y=1;
	}
	return 0;
}
/*2
11
9 5 12 19 2 6 4 15 8 3 7
15
9 5 12 19 2 6 4 15 8 3 7 13 16 2 5*/
