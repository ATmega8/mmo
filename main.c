#include "matrix.h"
#include "test.h"
#include "unity.h"

int main(void)
{
	UnityBegin("matrix test");
	RunMatrixTest();
	RunMatrixAddTest();
	RunMatrixSubTest();
	return(UnityEnd());
}

