#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
	int m, n, i, a, b, sum1[13]={0}, c, d, sum2[13]={0};
	scanf("%d%d",&m,&n);
	srand(m);
	for(i=0;i<n;i++){
	a=rand()%6+1;
	b=rand()%6+1;
	switch(a+b){
		case 2:sum1[2]+=1;break;
		case 3:sum1[3]+=1;break;
		case 4:sum1[4]+=1;break;
		case 5:sum1[5]+=1;break;
		case 6:sum1[6]+=1;break;
		case 7:sum1[7]+=1;break;
		case 8:sum1[8]+=1;break;
		case 9:sum1[9]+=1;break;
		case 10:sum1[10]+=1;break;
		case 11:sum1[11]+=1;break;
		case 12:sum1[12]+=1;break;
		}
	}
	printf("方法一\n");
	printf("2 出現過 %d 次\n",sum1[2]);
	printf("3 出現過 %d 次\n",sum1[3]);
	printf("4 出現過 %d 次\n",sum1[4]);
	printf("5 出現過 %d 次\n",sum1[5]);
	printf("6 出現過 %d 次\n",sum1[6]);
	printf("7 出現過 %d 次\n",sum1[7]);
	printf("8 出現過 %d 次\n",sum1[8]);
	printf("9 出現過 %d 次\n",sum1[9]);
	printf("10 出現過 %d 次\n",sum1[10]);
	printf("11 出現過 %d 次\n",sum1[11]);
	printf("12 出現過 %d 次\n",sum1[12]);
	for(i=0;i<n;i++){
	c=(int)(6*(double)rand()/(RAND_MAX))+1;
	d=(int)(6*(double)rand()/(RAND_MAX))+1;
	switch(c+d){
		case 2:sum2[2]+=1;break;
		case 3:sum2[3]+=1;break;
		case 4:sum2[4]+=1;break;
		case 5:sum2[5]+=1;break;
		case 6:sum2[6]+=1;break;
		case 7:sum2[7]+=1;break;
		case 8:sum2[8]+=1;break;
		case 9:sum2[9]+=1;break;
		case 10:sum2[10]+=1;break;
		case 11:sum2[11]+=1;break;
		case 12:sum2[12]+=1;break;
		}
	}
	printf("方法二\n");
	printf("2 出現過 %d 次\n",sum2[2]);
	printf("3 出現過 %d 次\n",sum2[3]);
	printf("4 出現過 %d 次\n",sum2[4]);
	printf("5 出現過 %d 次\n",sum2[5]);
	printf("6 出現過 %d 次\n",sum2[6]);
	printf("7 出現過 %d 次\n",sum2[7]);
	printf("8 出現過 %d 次\n",sum2[8]);
	printf("9 出現過 %d 次\n",sum2[9]);
	printf("10 出現過 %d 次\n",sum2[10]);
	printf("11 出現過 %d 次\n",sum2[11]);
	printf("12 出現過 %d 次\n",sum2[12]);
	return 0;
}
