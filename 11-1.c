#include <stdio.h>
#include <stdlib.h>

void rotate(char x[],int size){
	int i;
	char tmp=x[size-1];
	for(i=size-1;i>0;i--){
		x[i]=x[i-1];
	}
	x[0]=tmp;
}

void print(char x[],int size){
	int i;
	for(i=0;i<size-1;i++){
		printf("%d ",x[i]);
	}
	printf("%d\n",x[size-1]);
}

int check(char x[],int size){
	int i;
	for(i=size-1;i>=0;i--){
		if(x[i]!=i){
			return 1;
		}rotate(x,i);
	}
	return 0;
}

int compare(char x[],int size){
	int i, j, p=0;
	for(i=0;i<size;i++){
		for(j=i+1;j<size;j++){
			if(x[i]>x[j]){
				p++;
			}
		}
	}
	return p;
}

int main(void){
	int n, k, i, p;
	char data[n];
	while(scanf("%d%d",&n,&k)==2){
		for(i=0;i<n;i++){
			data[i]=i;
		}
		do{
		p=compare(data,n);
		if(p%k==0){
			print(data,n);
		}
		rotate(data,n);
		}while(check(data,n));
	}
	return 0;
}
/*0 1 2 3
3 0 1 2
2 3 0 1
1 2 3 0
2 0 1 3
3 2 0 1
1 3 2 0
0 1 3 2
1 2 0 3
3 1 2 0
0 3 1 2
2 0 3 1
1 0 2 3
3 1 0 2
2 3 1 0
0 2 3 1
2 1 0 3
3 2 1 0
0 3 2 1
1 0 3 2
0 2 1 3
3 0 2 1
1 3 0 2
2 1 3 0*/
