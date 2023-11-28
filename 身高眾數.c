#include <stdio.h>

int main(void){
	int k, n, height, max, i, maxheight=0;
	scanf("%d",&n);
	int count[230]={0};
	max=count[0];
	for(k=1;k<n;k++){
		scanf("%d",&height);
		count[height]+=1;
	}
	for(i=1;i<230;i++){
		if(count[i]>count[maxheight]){
			max=count[i];
			maxheight=i;
		}
	}printf("%d %d\n",maxheight,max);
	return 0;
}
