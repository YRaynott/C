#include <stdio.h>
#include <stdlib.h>
#include <memory.h>

int main(void){
	int n, m, b[200]={0}, i, j, c, k, s[19900]={0};
    while(scanf("%d",&n)==1){
		for(m=0;m<n;m++){
    	scanf("%d",&b[m]);
    	}
    	for(i=0;i<n;i++){
        	for(j=i+1;j<n;j++){
            	s[j-1]=b[i]+b[j];
            	for(k=j;k<19900;k++){
                	if(s[j-1]==s[k]){
                    	c=1;
                	}
        		}
        	}
    	}if(c==1){
        	printf("No\n");
        }else{
        	printf("Yes\n");
    	}
    	c=0;
    	memset(b,0,200*sizeof(int));
    	memset(s,0,19900*sizeof(int));
	}
  return 0;
}
