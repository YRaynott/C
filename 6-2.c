#include <stdio.h>
#include <stdlib.h>
#include <memory.h>

int gcd(int p,int q){
	if(p%q==0){
		return q;
	}else{
		return gcd(q,p%q);
	}
}

int main(void){
	int n, k, i, j, l, m;
	unsigned long long int a[67]={0}, b[67]={0}, c, e;
	while(scanf("%d %d",&n,&k)==2){
		if(n==k||k==0){
			printf("%d\n",1);
		}else if(n<k){
			printf("error\n");
		}else{
			for(i=0;i<n-k;i++){
				b[i]=(n-k-i);
			}for(j=0;j<n-k;j++){
				a[j]=(n-j);
				for(m=0;m<n-k;m++){
					c=gcd(a[j],b[m]);
					if(c>1){
						a[j]/=c;
						b[m]/=c;
					}
				}
			}for(e=1,l=0;l<n-k;l++){
				e*=a[l];
			}
			printf("%llu\n",e);
			memset(a,1,67*sizeof(int));
			memset(b,1,67*sizeof(int));
		}
		
	}
	return 0;
}
/*5 0
5 2
5 4
10 15
34 25
34 17
35 17
35 18
43 20*/
