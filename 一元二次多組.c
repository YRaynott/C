#include <stdio.h> 
#include <math.h>

int main(void){
	int n, i;
	scanf("%d",&n);
	for(i=0;i<n;i=i+1){
	double a, b, c, det, x1, x2, y=0;
	scanf("%lf%lf%lf",&a,&b,&c);
	det=b*b-4*a*c;
	if(a==0){
		printf("不是拋物線\n");
	}else
	if(det<0){
		printf("沒有實根\n");
	}else{
		x1=(-b+sqrt(det))/(2*a);
		x2=(-b-sqrt(det))/(2*a);
		printf("%.3f, %.3f\n",x1,x2);
	}
	
}
return 0;
}
