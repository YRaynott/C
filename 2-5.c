#include <stdio.h>

int main(void){
	int a, b, c, d, e;
	double f;
	while(scanf("%d%d",&a,&b)==2){
		c=a+b;
		d=a/b;
		e=a%b;
		f=(double)a/b;
		printf("%5d, %5d, %5d, %10.5f\n",c,d,e,f);
	}
	return 0;
}
