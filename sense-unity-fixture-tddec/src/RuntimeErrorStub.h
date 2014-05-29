#ifndef __RUNTIMEERRORSTUB_H
#define __RUNTIMEERRORSTUB_H

#include <stdint.h>
#include "RuntimeError.h"

void RuntimeErrorStub_Reset(void);
const char * RuntimeErrorStub_GetLastError(void);
int RuntimeErrorStub_GetLastParameter(void);

#endif /* __RUNTIMEERRORSTUB_H */