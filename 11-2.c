#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
	int k, e, i, l, m=1;
	char discard;
	while(scanf("%d%d",&k,&e)==2){
		int w[21]={0}, max=0, max_1=0;
		char key[21][71], excuse[21][71], text[21][71], ch;
		for(i=0;i<k;i++){
			scanf("%s",key[i]);
		}
		discard=getchar();
		for(i=0;i<e;i++){
			gets(text[i]);
			strncpy(excuse[i],text[i],sizeof(excuse));
			char *ptr;
			ptr=strtok(text[i], " \t.,!?&[](){}\"'/:;\n");
			while(ptr!=NULL){
				for(l=0;l<71&&ptr[l]!=0;l++){
					if((ptr[l]>='A')&&(ptr[l]<='Z')){
    					ptr[l]=ptr[l]-'A'+'a';
					}
				}
				for(l=0;l<k;l++){
					int s=strcmp(ptr, key[l]);
					if(s==0){
						w[i]++;
					}
				}
				ptr=strtok(NULL, " \t.,!?&[](){}\"'/:;\n");
			}
		}
		int max_t=w[0];
		l=0;
		for(i=1;i<e;i++){
			if(w[i]>max_t){
				max_t=w[i];
				l=i;
				max=i;
			}else if(w[i]==max_t){
				max=l;
				max_1=i;
			}
		}
		if(m>1){
			printf("\n");
		}
		printf("Excuse Set #%d\n",m);
		m++;
		if(w[max]==w[max_1]){
			printf("%s\n",excuse[max]);
			printf("%s\n",excuse[max_1]);
		}else{
			printf("%s\n",excuse[max]);
		}
	}
	return 0;
}
/*5 3
dog
ate
homework
canary
died
My dog ate my homework.
Can you believe my dog died after eating my canary... AND MY HOMEWORK?
This excuse is so good that it contain 0 keywords.
6 5
superhighway
crazy
thermonuclear
bedroom
war
building
I am having a superhighway built in my bedroom.
I am actually crazy.
1234567890.....,,,,,0987654321?????!!!!!!
There was a thermonuclear war!
I ate my dog, my canary, and my homework ... note outdated keywords?*/
