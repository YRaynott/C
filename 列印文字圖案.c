#include <stdio.h>

int main(void){
	int i, j, n;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<i+3&&j<n;j++){
			printf("%c",'A'+(j+i)%n);
		}printf("\n");
	}
	return 0;
} 
