#include <stdio.h>
#include <math.h>

int main(void){
	double a, b, x, y, det, x1, x2, y1, y2;
	FILE *fp;
	fp=fopen("input.txt","r");
	fscanf(fp,"%lf%lf",&a,&b);
	fclose(fp);
	det=64*a*a*a*a-4*(4*a*a+b*b)*(4*a*a-3*b*b);
	x1=(8*a*a+sqrt(det))/(8*a*a+2*b*b);
	x2=(8*a*a-sqrt(det))/(8*a*a+2*b*b);
	y1=a*(x1-1)/b;
	y2=a*(x2-1)/b; 
	if(x1>=x2){
		printf("(%.3f,%.3f), (%.3f,%.3f)\n",x1,y1,x2,y2);
	}else{
		printf("(%.3f,%.3f), (%.3f,%.3f)\n",x2,y2,x1,y1);
	}
	return 0;
}
