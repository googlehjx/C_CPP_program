#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main() {
	//srand(time(NULL)*4);
	int randArray[10] = {-1};
	int count = 0;
	srand(time(NULL));
	while (1) {
		int random = (rand()%100);
		int flag = -1;
		int i = 0;
		if (count == 0) {     // 数组中没有数，将随机数直接添加其中，并count++
			randArray[0] = random;
			count++;
		}
		if (count >= 10) {    // 数组已有10个合法数了，直接退出循环
			break;
		}
		while (i < count ) {   // count ∈[1, 9]， i ∈ [0, count-1]
			if (randArray[i] == random) {
				flag = 1;
				break;
			}
			else {
				i++;
			}
		}
		if (flag == -1) {
			randArray[count] = random;
			count++;
		}
	}

	for (int i = 0; i < 10; i++) {
		printf("%d ", randArray[i]);
	}
	putchar(10);

	return 0;
}