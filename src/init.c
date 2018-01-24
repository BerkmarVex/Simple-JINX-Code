#include "main.h"

void initializeIO() {
}

void initialize() {
	initJINX(stdout);
	delay(100);
	taskCreate(JINXRun, TASK_DEFAULT_STACK_SIZE, NULL, (TASK_PRIORITY_DEFAULT));
	delay(100);
	one = encoderInit(QUAD_TOP_PORT, QUAD_BOTTOM_PORT, is_reversed);
}
