#include <stdio.h>

int main()
{
	int year, month, day;
	char* name;

	printf("년 월 일을 입력해주세요 : ");
	scanf("%d %d %d", &year, &month, &day);

	printf("이름을 입력해주세요 : ");
	scanf("%s", &name);

	printf("당신의 이름은 %s 오늘은 %d년 %d월 %d일이군요 알겠습니다.\n");


	return 0;
}
