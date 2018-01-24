#ifndef MAIN_H_

#define MAIN_H_

#include <API.h>
#include "JINX.h"

#ifdef __cplusplus
extern "C" {
#endif

void initialize();

#define QUAD_TOP_PORT 1
#define QUAD_BOTTOM_PORT 2
#define is_reversed false
#define click

Encoder one;

void operatorControl();

#ifdef __cplusplus
}
#endif

#endif
