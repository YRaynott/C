#include <stdio.h>
#include <stdlib.h>

int main(void){
	char h, t, z, chinesenum[][10]={"�s","�@","�G","�T","�|","��","��","�C","�K","�E"};
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
				printf("�Q\n");
			}else{
				printf("�Q%s\n",chinesenum[z]);
			}
		}else{
			if(z==0){
				printf("%s�Q\n",chinesenum[t]);
			}else{
				printf("%s�Q%s\n",chinesenum[t],chinesenum[z]);
			}
		}
	}else if(h==2){
		if(t==0){
			if(z==0){
				printf("���\n");
			}else{
				printf("���%s%s\n",chinesenum[t],chinesenum[z]);
			}
		}else if(t==1){
			if(z==0){
				printf("��ʤ@�Q\n");
			}else{
				printf("��ʤ@�Q%s\n",chinesenum[z]);
			}
		}else{
			if(z==0){
				printf("���%s�Q\n",chinesenum[t]);
			}else{
				printf("���%s�Q%s\n",chinesenum[t],chinesenum[z]);
			}
		}
	}else{
		if(t==0){
			if(z==0){
				printf("%s��\n",chinesenum[h]);
			}else{
				printf("%s��%s%s\n",chinesenum[h],chinesenum[t],chinesenum[z]);
			}
		}else if(t==1){
			if(z==0){
				printf("%s�ʤ@�Q\n",chinesenum[h]);
			}else{
				printf("%s�ʤ@�Q%s\n",chinesenum[h],chinesenum[z]);
			}
		}else{
			if(z==0){
				printf("%s��%s�Q\n",chinesenum[h],chinesenum[t]);
			}else{
				printf("%s��%s�Q%s\n",chinesenum[h],chinesenum[t],chinesenum[z]);
			}
		}
	}
	return 0;
}
