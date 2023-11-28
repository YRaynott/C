#include <stdio.h>

int main(void){
	int i, n, a, b, c, d, e;
	double f;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d%d",&a,&b);
		c=a+b;
		d=a/b;
		e=a%b;
		f=(double)a/b;
		printf("%5d, %5d, %5d, %10.5f\n",c,d,e,f);
	}
	return 0;
}
