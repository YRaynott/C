#include <stdio.h>
 
int main(void)    
{
	int max, a, n, i;
	scanf("%d%d",&n,&max);
	for(i=1;i<n;i++){
		scanf("%d",&a);
		if(a>max)max=a;
	}printf("%d",max);
    return 0;    
}
