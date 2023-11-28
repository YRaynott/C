#include <stdio.h>
#include <stdlib.h>

int main(void){
	char h, t, z, chinesenum[][10]={"零","一","二","三","四","五","六","七","八","九"};
	int a;
	scanf("%d",&a);
	h=a/100;
	t=(a-100*h)/10;
	z=a-100*h-10*t;
	if(h==0){
		if(t==0){
			printf("%s\n",chinesenum[z]);
		}else if(t==1){
			if(z==0){
				printf("十\n");
			}else{
				printf("十%s\n",chinesenum[z]);
			}
		}else{
			if(z==0){
				printf("%s十\n",chinesenum[t]);
			}else{
				printf("%s十%s\n",chinesenum[t],chinesenum[z]);
			}
		}
	}else if(h==2){
		if(t==0){
			if(z==0){
				printf("兩百\n");
			}else{
				printf("兩百%s%s\n",chinesenum[t],chinesenum[z]);
			}
		}else if(t==1){
			if(z==0){
				printf("兩百一十\n");
			}else{
				printf("兩百一十%s\n",chinesenum[z]);
			}
		}else{
			if(z==0){
				printf("兩百%s十\n",chinesenum[t]);
			}else{
				printf("兩百%s十%s\n",chinesenum[t],chinesenum[z]);
			}
		}
	}else{
		if(t==0){
			if(z==0){
				printf("%s百\n",chinesenum[h]);
			}else{
				printf("%s百%s%s\n",chinesenum[h],chinesenum[t],chinesenum[z]);
			}
		}else if(t==1){
			if(z==0){
				printf("%s百一十\n",chinesenum[h]);
			}else{
				printf("%s百一十%s\n",chinesenum[h],chinesenum[z]);
			}
		}else{
			if(z==0){
				printf("%s百%s十\n",chinesenum[h],chinesenum[t]);
			}else{
				printf("%s百%s十%s\n",chinesenum[h],chinesenum[t],chinesenum[z]);
			}
		}
	}
	return 0;
}
