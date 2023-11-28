#include <stdio.h>

int main(void){
	int n, i, max;
	scanf("%d%d",&n ,&max);
	for(i=1;i<n;i++){
		int a;
		scanf("%d",&a);
		if(a>max){
			max=a;
		}
	}printf("%d\n", max);
	return 0;
}
