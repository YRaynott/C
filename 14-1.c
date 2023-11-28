#include <stdio.h>
#include <stdlib.h>

int comb_t, t, C[34][34];

int comb(int n, int k, int n1, int k1){
	if(C[n][k]==0){
		if(n==k||k==0){
			C[n][k]=1;
			return 1;
		}else{
			return C[n][k]=comb(n-1,k,n1,k1)+comb(n-1,k-1,n1,k1);
		}
	}else{
		if(n==n1&&k==k1){
			comb_t++;
		}
		return C[n][k];
	}
}

int count(int n, int k, int n1, int k1){
	if(n1==n&&k1==k)t++;
	if(n==k||k==0){
	}else{
		count(n-1,k,n1,k1);
		count(n-1,k-1,n1,k1);
	}return t;
}

int main(){
	int n, k, n1, k1, ans, i, j;
	while(scanf("%d%d%d%d",&n,&k,&n1,&k1)==4){
		for(i=0;i<n+1;i++){
			for(j=0;j<k+1;j++){
				C[i][j]=0;
			}
		}
		if(n<k){
			printf("error\n");
		}else{
			ans=comb(n,k,n1,k1);
			t=count(n,k,n1,k1);
			if(t>0){
				comb_t+=1;
			}
			printf("%d %d %d\n",ans,comb_t,t);
		}comb_t=t=0;
	}
	return 0;
}
/*5 2 1 1
32 1 3 2
33 28 4 2
10 15 1 1
26 13 7 4
(4,2)=(3,2)+(3,1)
=(2,2)+[(2,1)+(2,1)]+(2,0)
=(2,2)+2[(1,1)+(1,0)]+(2,0)
(5,3)=(4,3)+(4,2)
=(3,3)+(3,2)+(3,2)+(3,1)=(3,3)+2(3,2)+(3,1)
=(3,3)+2[(2,2)+(2,1)]+(2,1)+(2,0)=(3,3)+2(2,2)+3(2,1)+(2,0)
=(3,3)+2(2,2)+3[(1,1)+(1,0)]+(2,0)=(3,3)+2(2,2)+3(1,1)+3(1,0)+(2,0)*/
