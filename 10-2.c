#include <stdio.h>
#include <stdlib.h>

static int state=0;
int data[1000000];
void set(int seed){
    state = seed;
}

int next(){
    state = (state * 0x343FD + 0x269EC3) & 0x7FFFFFFF;
    return state >> 15; // maximum is 65535, minimum is 0
}

int compare(const void *a, const void *b){
	return*(int*)a-*(int*)b;
}

int main(void){
	int i, n, seed, times[65535], medium, A;
	while(scanf("%d%d",&n,&seed)==2){
		int times[65535]={0}, A=0;
		set(seed);
		for(i=0;i<n;i++){
			data[i]=next();
			times[data[i]]++; 
		}
		qsort(data,n,sizeof(int),compare);
		if(n%2==0){
			medium=data[n/2-1];
			A=data[n/2]-medium;
		}else{
			medium=data[n/2];
		}
		printf("%d %d %d\n",medium,times[medium],A+1);
	}
	return 0;
}
