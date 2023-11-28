#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <memory.h>

int main(void){
	char a[500], c, d;
	int i, k, j, max, l, num, b[500];
	while(scanf("%s",a)==1){
		size_t length=strlen(a);
		for(i=0;i<length;i++){
			for(k=48,c='A',d='a';k<=57,c<='Z',d<='z';k++,c++,d++){
				if(a[i]==c){
					b[i]=c-55;
					num+=b[i];
					break;
				}else if(a[i]==d){
					b[i]=d-61;
					num+=b[i];
					break;
				}else if(a[i]==k){
					b[i]=k-48;
					num+=b[i];
					break;
				}
			}
		}
		
		for(j=0;j<length;j++){
			if(b[j]>=max){
				max=b[j];
			}
		}
		for(l=max;l<62;l++){
			if(num%l==0){
				printf("%d\n",l+1);
				break;
			}
		}
		if(l==62){
			printf("-1\n");
		}
		num=0;
		max=0;
		memset(a,0,500*sizeof(char));
		memset(b,0,500*sizeof(int));
	}
	return 0;
}
