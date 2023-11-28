#include <stdio.h>
#include <stdlib.h>

void input(int *, char *,int *, char *,int *, char *,int *);
int add(int, int, int, int);
int subtract(int, int, int, int);
int multiply(int, int, int, int);
int divide(int, int, int, int);

int main() {
	int s1, m1, s2, m2, s3, m3, d;
	char b1, c, b2, a;
	do{
		input(&s1,&b1,&m1,&c,&s2,&b2,&m2);
		switch(c){
			case '+':
				s3=add(s1,m1,s2,m2);
				m3=m1*m2;
				break;
			case '-':
				s3=subtract(s1,m1,s2,m2);
				m3=m1*m2;
				break;
			case '*':
				s3=multiply(s1,m1,s2,m2);
				m3=m1*m2;
				break;
			case '/':
				s3=divide(s1,m1,s2,m2);
				m3=m1*s2;
				break;
		}
		d=gcd(s3,m3);
		s3/=d;
		m3/=d;
		if(m3>0){
			printf("%d%c%d %c %d%c%d = %d%c%d\n",s1,b1,m1,c,s2,b2,m2,s3,b1,m3);
		}else{
			printf("%d%c%d %c %d%c%d = %d%c%d\n",s1,b1,m1,c,s2,b2,m2,-s3,b1,-m3);
		}
		scanf(" %c",&a);
		s3=m3=0;
	}while(a=='y'||a=='Y');
	return 0;
}

void input(int *s1Addr,char *b1Addr, int *m1Addr, char *cAddr, int *s2Addr, char *b2Addr, int *m2Addr){
	int s1, m1, s2, m2;
	char b1, c, b2;
	scanf("%d %c%d %c%d %c%d", s1Addr, b1Addr, m1Addr, cAddr, s2Addr, b2Addr, m2Addr);
	return;
}

int add(int s1, int m1, int s2, int m2){
	int s3;
	s3=(s1*m2)+(s2*m1);
	return s3;
}

int subtract(int s1, int m1, int s2, int m2){
	int s3;
	s3=(s1*m2)-(s2*m1);
	return s3;
}

int multiply(int s1, int m1, int s2, int m2){
	int s3;
	s3=s1*s2;
	return s3;
}

int divide(int s1, int m1, int s2, int m2){
	int s3;
	s3=s1*m2;
	return s3;
}

int gcd(int s3,int m3){
	if(s3>=m3){
		if(s3%m3==0){
			return m3;
		}else{
			return gcd(m3,s3%m3);
		}
	}else{
		if(m3%s3==0){
			return s3;
		}else{
			return gcd(s3,m3%s3);
		}
	}
}
/*2/3+5/9
y
2 / 3-1/ 6
y
2 /3
 *
9 / 8
n*/
