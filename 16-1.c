#include <stdio.h>
#include <stdlib.h>

long long int max;
int test, ans[100];

void check(int t, int a[]){
	int i;
	long long k=1;
	k*=a[0];
	for(i=1;i<=t;i++){
		if(a[i]-a[i-1]>1){
			k*=a[i];
		}else{
			return;
		}
	}
	if(k>=max){
		test=i;
		max=k;
		for(i=0;i<test;i++){
			ans[i]=a[i];
		} 
	}
	return;
}

void split(int t, int a[]){
	int i, m;
	check(t,a);
	for(m=a[t],i=a[t-1]+1;2*i<m;i++){
		a[t]=i;
		a[t+1]=m-i;
		split(t+1,a);
	}
}

int main(){
	int r, j;
	scanf("%d",&r);
	for(j=0;j<r;j++){
		int a0[100], *a=a0+1, i;
		a[-1]=0;
		scanf("%d",&a[0]);
		if(a[0]<4){
			printf("%d 1 %d\n",a[0],a[0]);
		}else{
			split(0,a);
			printf("%lld %d",max,test);
			for(i=0;i<test;i++){
				printf(" %d",ans[i]);
			}printf("\n");
		}
		max=test=0;
	}
	return 0;
}
