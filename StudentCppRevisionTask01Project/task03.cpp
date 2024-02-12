#include "tasks.h"

bool task03(int a, int b, int c) {
	return a + b <= c || c + b <= a || a + c < b ? false : true;
}