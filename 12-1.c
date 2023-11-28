#include <stdio.h>
#include <stdlib.h>
#include <math.h> 

void swap(int *a, int *b){
	int tmp=*a;
	*a=*b;
	*b=tmp;
}

void minimum(int value, int min[]){
	int i, j;
	for(i=0;i<10;i++){
		if(value<min[i]){
			for(j=10;j>i;j--){
				min[j]=min[j-1];
			}
			min[i]=value;
			break;
		}
	}
}

int check(int num[], int n){
	int i, k=0;
	static int conf[10];
	for(i=0;i<n;i++){
		if(num[i]==conf[i]){
			k++;
		}else{
			break;
		}
	}
	if(k==n){
		return 0;
	}
	for(i=0;i<n;i++){
		conf[i]=num[i];
	}
	return 1;
}

int divs(int num[], int n, int m, int min[]){
	int i, value=0;
	static int t=0;
	if(check(num,n)&&num[0]!=0){
		for(i=n-1;i>=0;i--){
			value+=num[i]*pow(10,n-1-i);
			if(value%m!=0){
				break;
			}
		}
		if(value%m==0){
			t++;
			minimum(value,min);
		}
	}
	return t;
}

int loop(int *num, int start, int end, int n, int m, int min[]){
	int i;
	static int t;
	if(start==end){
		t=divs(num,n,m,min);
	}
	for(i=start;i<=end;i++){
		swap(&num[start],&num[i]);
		loop(num,start+1,end,n,m,min);
		swap(&num[start],&num[i]);
	}
	return t;
}

int main(void){
	int n, m, i, t;
	int num[100]={0};
	static int min[10]={999999999};
	scanf("%d%d",&n,&m);
	for(i=0;i<10;i++){
		num[i]=i;
	}
	t=loop(num,0,9,n,m,min);
	printf("number of solutions=%d\n",t);
	if(t>10){
		for(i=0;i<10;i++){
			printf("%d\n",min[i]);
		}
	}else{
		for(i=0;i<t;i++){
			printf("%d\n",min[i]);
		}
	}
	return 0;
}
