#include <stdio.h>
#include <stdlib.h>

int main(void){
	int i, j, m;
	const char *day[12]={"first","second","third","fourth","fifth","sixth","seventh","eighth","ninth","tenth","eleventh","twelfth"};
	const char *sentences[12]={"12 Drummers Drumming","11 Pipers Piping","10 Lords a Leaping","9 Ladies Dancing","8 Maids a Milking","7 Swans a Swimming","6 Geese a Laying","5 Golden Rings", "4 Calling Birds","3 French Hens","2 Turtle Doves","Partridge in a Pear Tree"};
	scanf("%d",&m);
	for(i=0;i<m;i++){
		printf("On the %s day of Christmas\n",day[i]);
		printf("my true love sent to me:\n");
		for(j=11-i;j<=11;j=j+1){
			if(j==11){
				if(i==0){
					printf("A ");
				}else{
					printf("and a ");
				}
			}printf("%s\n",sentences[j]);
		}
		if(i<m-1){
			printf("\n");
		}
	}
	return 0;
}
