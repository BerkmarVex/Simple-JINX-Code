#include "main.h"

char jixSend [20];
int x = 0;
char a;
void operatorControl() {

	initJINX(stdout);

	while (1) {
		sprintf(jixSend, "%d", x);
		writeJINXData("TEST", jixSend);
		x++;
		delay(20);
	}
}
