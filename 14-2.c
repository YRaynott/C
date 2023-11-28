#include <stdio.h>
#include <stdlib.h>

unsigned long long int sum=0, ans=0;
int C[11][11];

void calculate(int t, int d, int sort[]);

void same(int start, int t, int d, int sort[]){
	int i;
	for(i=start;i<t;i++){
		sort[i]=d;
	}calculate(t,d,sort);
}

void nextsort(int sort[], int d, int k, int t){
	int start;
	if(sort[k]>1){
		sort[k]--;
		calculate(t,d,sort);
	}else{
		if(sort[k-1]>1){
			sort[k]=sort[k-1];
			sort[k-1]--;
			nextsort(sort,d,k,t);
		}else if(k-2>0&&sort[k-2]!=1){
		 start=k-2;
			if(d-1>0){
				same(start,t,d-1,sort);
				nextsort(sort,d-1,k,t);
			}
		}else if(sort[0]>1){
			sort[0]--;
			same(0,t,sort[0],sort);
			nextsort(sort,sort[0],k,t);
		}
	}
	return;
}

void calculate(int t, int d, int sort[]){
	int i, j=1, k=t-1;
	for(i=0;i<t;i++){
		j*=sort[i];
	}sum+=j;
	nextsort(sort,d,k,t);
}

int comb(int num, int d){
	if(C[num][d]==0){
		if(num==d||d==0){
			C[num][d]=1;
			return 1;
		}else{
			return C[num][d]=comb(num-1,d)+comb(num-1,d-1);
		}
	}else{
		return C[num][d];
	}
}

int stairs(int d){
	if(d==1){
		return 1;
	}
	return d*stairs(d-1);
}

int main(){
	int d, n, i, j;
	while(scanf("%d%d",&d,&n)==2){
		for(i=0;i<9+1;i++){
			for(j=0;j<d+1;j++){
				C[i][j]=0;
			}
		}
		if(d==10){
			ans=comb(9,d-1)*(d-1)*stairs(d-1);
		}else if(d==1){
			ans=comb(9,d)*stairs(d);
		}else{
			ans=comb(9,d)*stairs(d)+comb(9,d-1)*(d-1)*stairs(d-1);
		}
		int t=n-d;
		if(t==0){
			sum=1;
		}else if(t==1){
			int a;
			for(a=d;a>0;a--){
				sum+=a;
			}
		}else{
			int sort[t], start=0;
			same(start,t,d,sort);
			calculate(t,d,sort);
			sum--;
		}
		printf("%llu\n",sum*ans);
		sum=0;
	}
	return 0;
}
