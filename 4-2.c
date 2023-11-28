#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double f(double a, double b, double c, double d, double x){
	double y;
	y=a*x*x+b*x+c-cos(d*x);
	return y;
}

int main(void){
	double a, b, c, d, epsilon, x1, x2, x_mid, x_right, x_left, r, y_left, y_mid, y_right;
	scanf("%lf%lf%lf%lf%lf%lf%lf",&a,&b,&c,&d,&epsilon,&x1,&x2);
	if(x2>x1){
		x_right=x2;
		x_left=x1;
	}else{
		x_right=x1;
		x_left=x2;
	}
	while(1){
		x_mid=(x_left+x_right)/2;
		y_left=f(a,b,c,d,x_left);
		y_mid=f(a,b,c,d,x_mid);
		y_right=f(a,b,c,d,x_right);
		if(x_right-x_left<epsilon)break;
		else if(f(a,b,c,d,x_mid)*f(a,b,c,d,x_left)<0){
			x_right=x_mid;
		}else if(f(a,b,c,d,x_mid)*f(a,b,c,d,x_right)<0){
			x_left=x_mid;
		}else if(f(a,b,c,d,x_mid)==0){
			break;
		}
	}
	r=x_mid;
	printf("%.5f\n",r);
	return 0;
}
