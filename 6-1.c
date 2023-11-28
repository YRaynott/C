#include <stdio.h>
#include <stdlib.h>

int main(void){
	int grade, classes, student, subjects, scores[2][3][5][3]={0}, sum=0, i;
	double average;
	const char *subject[3]={"國文", "英文", "數學"};
	for(grade=0;grade<2;grade++){
		for(classes=0;classes<3;classes++){
			for(student=0;student<5;student++){
				scanf("%d, %d, %d",&scores[grade][classes][student][0],&scores[grade][classes][student][1],&scores[grade][classes][student][2]);
			}
		}
	}
	grade=0;
	classes=0;
	student=0;
	subjects=0;
	for(subjects=0;subjects<3;subjects++){
		for(grade=0;grade<2;grade++){
			for(classes=0;classes<3;classes++){
				for(student=0;student<5;student++){
					sum+=scores[grade][classes][student][subjects];
				}
				average=sum/5.0;
				printf("%d年%d班學生%s成績平均為 %.2f\n",grade+1,classes+1,subject[subjects],average);
				sum=0;
			}
		}
	}
	return 0;
}
/*98 95 92
89 78 82
88 64 64
61 43 44
48 57 58

86 78 44
65 65 63
56 67 77
47 78 43
54 56 58

46 50 76
65 87 66
64 56 66
92 49 86
45 73 83

77 52 91
40 45 69
89 70 82
75 94 60
78 86 63

85 50 91
92 70 82
72 64 93
86 75 52
43 40 83

89 92 67
55 61 91
40 54 48
75 79 47
47 44 97*/
