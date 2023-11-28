#include <stdio.h>
#include <stdlib.h>

int main(){
	int i, j, m, n, times;
	while(scanf("%d%d",&i,&j)==2&&((i!=0)||(j!=0))){
		times+=1;
		char a[i+2][j+2];
		for(m=1;m<i+1;m++){
			for(n=1;n<j+1;n++){
				scanf(" %c",&a[m][n]);
			}
		}
		for(m=1;m<i+1;m++){
			for(n=1;n<j+1;n++){
				if(a[m][n]!='*'){
					a[m][n]='0';
				}
			}
		}
		for(m=1;m<i+1;m++){
			for(n=1;n<j+1;n++){
				if(a[m][n]<'0'){
					a[m-1][n-1]++;
					a[m][n-1]++;
					a[m+1][n-1]++;
					a[m-1][n]++;
					a[m+1][n]++;
					a[m-1][n+1]++;
					a[m][n+1]++;
					a[m+1][n+1]++;
				}
			}
		}
		if(times>1){
			printf("\n");
		}
		printf("Field #%d:\n",times);
		for(m=1;m<i+1;m++){
			for(n=1;n<j+1;n++){
				if(a[m][n]<'0'){
					printf("*");
				}else{
				printf("%c",a[m][n]);
				}
			}
			printf("\n");
		}
	}
	return 0;
}
/*4 4
*...
....
.*..
....
3 5
**...
.....
.*...
0 0*/
