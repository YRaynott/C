#include <stdio.h>
#include <stdlib.h>

int row[9]/*0~8¦æ*/[10]/*1~9*/={}, col[9]/*0~8¦C*/[10]={}, block[9][10]={}, stop=0, s[81]={}, ans[81];

void check(int k){
	int a, b, i, j;
	if(k==81){
		stop++;
		if(stop==1){
			for(b=0;b<81;b++){
				ans[b]=s[b];
			}return;
		}
	}
	if(s[k]!=0){
		check(k+1);
	}else{
		for(a=1;a<=9;a++){
			i=k%9;
			j=k/9;
			if(col[j][a]||row[i][a]||block[(k/27)*3+(i/3)][a])continue;
			col[j][a]=row[i][a]=block[(k/27)*3+(i/3)][a]=1;
			s[k]=a;
			check(k+1);
			s[k]=0;
			col[j][a]=row[i][a]=block[(k/27)*3+(i/3)][a]=0;
		}
	}
}

void print(int ans[]){
	int i, j;
	for(i=0;i<9;i++){
		for(j=0;j<9;j++){
			printf(" %d",ans[i*9+j]);
		}printf("\n");
	}
}

int main(){
	int n, a, b, i, j, num;
	scanf("%d",&n);
	for(a=0;a<n;a++){
		scanf("%d, %d, %d",&i,&j,&num);
		s[i*9+j]=num;
		col[i][num]=1;
		row[j][num]=1;
		block[(i/3)*3+j/3][num]=1;
	}
	check(0);
	printf("number of solutions=%d\n",stop);
	if(stop==1){
		print(ans);
	}
	return 0;
}
/*30
0, 0, 7
0, 1, 8
0, 2, 9
0, 4, 2 
0, 8, 5
1, 0, 6
1, 5, 5
1, 7, 8
2, 7, 1
3, 0, 2
3, 3, 8
3, 7, 5
3, 8, 1
4, 2, 5
4, 3, 7
4, 5, 1
4, 6, 6
5, 0, 9
5, 1, 1
5, 5, 6
5, 8, 3
6, 1, 7
7, 1, 5
7, 3, 9
7, 8, 6
8, 0, 8
8, 4, 1
8, 6, 5
8, 7, 3
8, 8, 7*/
