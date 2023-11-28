#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b){
	int tmp;
	tmp=*a;
	*a=*b;
	*b=tmp;
}

void quicksort(int data[],int start, int end){
	int rear=end, front=start+1;
	if(start>end)return;
	while(front<=rear&&front<=end&&rear>=start){
		while(rear>start&&data[rear]>=data[start]){
			rear--;
		}while(front<=end&&data[front]<data[start]){
			front++;
		}if(rear>front){
			swap(&data[front++],&data[rear--]);
		}
	}swap(&data[start],&data[rear]);
	printf("data[%d]=%d\n",rear,data[rear]);
	quicksort(data,start,rear-1);
	quicksort(data,rear+1,end);
}

int main(){
	int t, i;
	scanf("%d",&t);
	for(i=0;i<t;i++){
		int n, j, m;
		scanf("%d",&n);
		int data[n], start=0, end=n-1;
		for(j=0;j<n;j++){
			scanf("%d",&data[j]);
		}
		quicksort(data,start,end);
		for(j=0;j<n-1;j++){
			printf("%d ",data[j]);
		}printf("%d\n",data[n-1]);
	}
	return 0;
}
/*2
11
9 5 12 19 2 6 4 15 8 3 7
15
9 5 12 19 2 6 4 15 8 3 7 13 16 2 5*/
