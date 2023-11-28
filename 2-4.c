#include <stdio.h>

int main(void){
	int a, b, c, d, e;
	double f;
	while(1){
		scanf("%d%d",&a,&b);
		if((a==0&&b==0)){
			break;
		}
		c=a+b;
		d=a/b;
		e=a%b;
		f=(double)a/b;
		printf("%5d, %5d, %5d, %10.5f\n",c,d,e,f);
	}
	return 0;
}
