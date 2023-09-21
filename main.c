#include <stdio.h>
#include <math.h>
#define a 5.0

int main(void) {
	//해결 방법 : 빗변을 구하는 공식이 a제곱 + b제곱 = 빗변 이므로
	//높이 = 제곱근(a 제곱 - a/2 제곱)

	//피타고라스의 정리만을 사용한 코드
	printf("%.14lf\n", (sqrt(a * a - a/2 * a/2) * a) / 2);
	//한 변의 길이가 a일 때 정삼각형의 넓이를 구하는 공식을 사용한 코드
	printf("%.14lf\n", sqrt(3) * (a * a) / 4);

	return 0;
}