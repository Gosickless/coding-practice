#include"Array.h"

int main()
{
	TSMatrix M1, M2, M3;
	CreatMatrix(&M1);
	SortByRow(&M1);
	Display(M1);
	CreatMatrix(&M2);
	Display(M2);
	SortByRow(&M2);
	AddMatrix(&M1, &M2, &M3, 1, 1);
	Display(M3);
	TransposeMatrix(M3, &M3);
	Display(M3);
	MultiplyMatrix(M1, M2, &M3);
	Display(M3);
	DestroyMatrix(&M3);
	return 0;
}