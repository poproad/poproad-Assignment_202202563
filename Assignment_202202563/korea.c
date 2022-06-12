//[평가항목 8]: 다중소스파일 사용

#include <stdio.h>
#include "korea.h"

struct  covid//[평가항목 5]: 구조체 사용
{
	char region[10];
	int total;
	int new;
};

struct covid list[18] =//[평가항목 3]: 배열 사용
{
	{"전국",1821,7382},
	{"경기", 495, 1690},
	{"서울", 363, 1160},
	{"부산", 109,417},
	{"경남", 109,440},
	{"인천", 107,278 },
	{"경북", 78,573 },
	{"대구", 76,396 },
	{"충남", 71,285 },
	{"전북", 60,272 },
	{"전남", 59,279 },
	{"충북", 55,246 },
	{"광주", 53,192 },
	{"강원", 52,360 },
	{"대전", 51,268 },
	{"울산", 38,297 },
	{"제주", 23,297 },
	{"세종", 13,82 }

};

int korea(int k)//[평가항목 2]: 함수 사용
{
	printf("%s\n", list[k].region);
	printf("누적 확진자 :약 %d만명\n", list[k].total);
	printf("신규 확진자:%d명\n", list[k].new);
	return 0;
}