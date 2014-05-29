#ifndef __RUNTIMEERROR_H
#define __RUNTIMEERROR_H

#include <stdint.h>

void RuntimeError(const char * message, int parameter,
	const char * file, int line);

#define RUNTIME_ERROR(description, parameter)\
	RuntimeError(description, parameter, __FILE__, __LINE__)

#endif /* __RUNTIMEERROR_H */