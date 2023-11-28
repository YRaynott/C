#include <stdio.h>
#include <stdlib.h>

long long int mid;

void square(long long int n, long long int left, long long int right){
	if(left<=right){
		mid=left+(right-left)/2;
		if(mid==0){
			return;
		}
		if(n/mid==mid&&n%mid==0){
			return;
		}else if(n/mid>mid){
			left=mid+1;
			square(n,left,right);
		}else{
			right=mid-1;
			square(n,left,right);
		}
	}else if(left>right){
		mid=0;
	}
	return;
}

int main(){
	int r, j;
	scanf("%d",&r);
	long long int n;
	for(j=0;j<r;j++){
		scanf("%lld",&n);
		long long int left=0, right=(n+1)/2;
		if(n==0){
			mid=0;
		}else if(n==1){
			mid=1;
		}else{
			square(n,left,right);
		}
		printf("%lld\n",mid);
	}
	return 0;
}
