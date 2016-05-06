// MatrixMultiplicationOpenMp.cpp : main project file.

#include "stdafx.h"

using namespace System;

int main(array<System::String ^> ^args)
{
	int tenNums[10];

#pragma omp parallel for
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", i);	// View the order of execution
		tenNums[i] = i;
	}
	printf("\n");
	for (int i = 0; i < 10; i++)
		printf("%d\n", tenNums[i]);


	system("pause");	// Halt the program
	return 0;
}

// Links:
// http://supercomputingblog.com/openmp/getting-started-with-openmp-on-visual-studio/
// http://supercomputingblog.com/openmp/openmp-tutorial-the-basics/

