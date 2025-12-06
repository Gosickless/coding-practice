#include"Array.h"

void InitMatrix(TSMatrix* M)
{
	int i, j, e, n = 1;
	printf("Please enter row,cow,element.\n");
	while (n <= M->tu)
	{
		scanf("%d%d%d", &i, &j, &e);
		if (i > M->mu || j > M->nu)
			printf("输入有误，请重新输入.\n");
		else
		{
			M->data[n].i = i;
			M->data[n].j = j;
			M->data[n].e = e;
			n++;
		}
	}
}

void CreatMatrix(TSMatrix* M)
{
	int mu, nu, tu = 0;
	printf("请输入矩阵的行、列及非零元元素.\n");
	scanf("%d%d%d", &mu, &nu, &tu);
	if (mu <= 0 || nu <= 0 || tu <= 0)
	{
		printf("输入错误.\n");
		return;
	}
	M->mu = mu;
	M->nu = nu;
	M->tu = tu;
	InitMatrix(M);
}

int need_row_sort(TSMatrix M)
{
	for (int i = 1; i < M.tu; i++)
		if (M.data[i].i > M.data[i + 1].i)
			return 1;
	return 0;
}//不足处为若仅有一个顺序不合要求，也要进行重新排序

int need_cow_sort(TSMatrix M)
{
	for (int i = 1; i < M.tu; i++)
		if (M.data[i].j > M.data[i + 1].j)
			return 1;
	return 0;
}

void swap_data(Triple* x, Triple* y)
{
	Triple temp = *x;
	*x = *y;
	*y = temp;
}

void SortByRow(TSMatrix* M)
{
	int a = need_row_sort(*M);
	if (!a)
		return;
	if (M->tu)
	{
		for (int i = 1; i <= M->tu; i++)
		{
			for (int j = i + 1; j <= M->tu; j++)
			{
				if (M->data[i].i > M->data[j].i || (M->data[i].i == M->data[j].i && M->data[i].j > M->data[j].j))
					swap_data(&M->data[i], &M->data[j]);
			}
		}
	}
}


void SortByCow(TSMatrix* M)
{
	if (!need_cow_sort(*M))
		return ;
	if (M->tu)
	{
		for (int i = 1; i <= M->tu; i++)
		{
			for (int j = i + 1; j <= M->tu; j++)
			{
				if ((M->data[i].j > M->data[j].j || (M->data[i].j == M->data[j].j) && M->data[i].i > M->data[j].i))
				{
					swap_data(&M->data[i], &M->data[j]);
				}
			}
		}
	}
}


void Display(TSMatrix M)
{
	int k = 1;
	SortByRow(&M);
	for (int i = 1; i <= M.mu; i++)
	{
		printf("|");
		for (int j = 1; j <= M.nu; j++)
		{
			if (M.data[k].i == i && M.data[k].j == j)
			{
				printf("%4d", M.data[k].e);
				k++;
			}
			else
				printf("   0");
		}
		printf("|\n");
	}
	printf("\n");
}

void AddMatrix(TSMatrix* M, TSMatrix* N, TSMatrix* O,int a=1,int b=1)
{
	int n = 1, m = 1, x = 1;
	if (M->mu != N->mu || M->nu != N->nu)
	{
		printf("ERROR.\n");
		return;
	}
	O->mu = M->mu;
	O->nu = M->nu;
	O->tu = 0;
	SortByRow(M);
	SortByRow(N);
	while (m <= M->tu && n <= N->tu)
	{
		if (M->data[m].i == N->data[n].i && M->data[m].j == N->data[n].j)
		{
			O->data[x].i = M->data[m].i;
			O->data[x].j = M->data[m].j;
			O->data[x++].e = a * M->data[m].e + b * N->data[n].e;
			m++;
			n++;
		}
		else if (M->data[m].i == N->data[n].i && M->data[m].j < N->data[n].j || M->data[m].i < N->data[n].i)
		{
			O->data[x].i = M->data[m].i;
			O->data[x].j = M->data[m].j;
			O->data[x++].e = a * M->data[m].e;
			m++;
		}
		else if (M->data[m].i == N->data[n].i && M->data[m].j > N->data[n].j || M->data[m].i > N->data[n].i)
		{
			O->data[x].i = N->data[n].i;
			O->data[x].j = N->data[n].j;
			O->data[x++].e = b * N->data[n].e;
			n++;
		}
	}
	while(m <= M->tu)
	{
		O->data[x].i = M->data[m].i;
		O->data[x].j = M->data[m].j;
		O->data[x++].e = a * M->data[m].e;
		m++;
	}
	while (n <= N->tu)
	{
		O->data[x].i = N->data[n].i;
		O->data[x].j = N->data[n].j;
		O->data[x++].e = b * N->data[n].e;
		n++;
	}
	O->tu = --x;
}

void TransposeMatrix(TSMatrix M, TSMatrix* T)
{
	T->mu = M.nu;
	T->nu = M.mu;
	T->tu = M.tu;
	int p, q, col, t;
	int num[50];
	int cpot[50];
	if (T->tu)
	{
		for (col = 1; col <= M.mu; col++)
			num[col] = 0;
		for (t = 1; t <= M.tu; t++)
			num[M.data[t].j]++;
		cpot[1] = 1;
		for (col = 2; col <= M.nu; col++)
			cpot[col] = cpot[col - 1] + num[col - 1];
		for (p = 1; p <= M.tu; p++)
		{
			col = M.data[p].j;
			q = cpot[col];
			T->data[q].i = M.data[p].j;
			T->data[q].j = M.data[p].i;
			T->data[q].e = M.data[p].e;
			cpot[col]++;
		}
	}
}

void DestroyMatrix(TSMatrix* M)
{
	if (M->mu == 0 || M->nu == 0) return;
	for (int i = 1; i <= M->tu; i++)
		M->data[i] = { 0,0,0 };
	M->mu = 0; 
	M->nu = 0;
	M->tu = 0;
}

void First_Row(TSMatrix M, int first[])
{
	int j = 1;
	first[1] = 1;
	for (int i = 1; i < M.mu; i++)
	{
		while (M.data[j].i == i)
			j++;
		first[i + 1] = j;
	}
}

void First_Cow(TSMatrix M, int first[])
{
	int j = 1;
	first[1] = 1;
	for (int i = 1; i < M.nu; i++)
	{
		while (M.data[j].j == i)
			j++;
		first[i + 1] = j;
	}
}

void MultiplyMatrix(TSMatrix M, TSMatrix N, TSMatrix* O)
{
	if (M.nu != N.mu || !M.tu || !N.tu)
	{
		printf("ERROR.\n");
		return;
	}
	SortByRow(&M);
	SortByCow(&N);
	int returnindex1[20] = { 0 };
	int returnindex3[20] = { 0 };
	First_Row(M, returnindex1);
	First_Cow(N, returnindex3);
	O->mu = M.mu;
	O->nu = N.nu;
	O->tu = 0;
	int index1 = 1, index2 = 1, index3 = 1, index4 = 1, k = 1;
	for ( index2=1;index2<=M.mu;index2++)
	{
		elemtype sum = 0;
		index3 = 1;
		for (index4 = 1; index4 <= N.nu; index4++)
		{
			index1 = returnindex1[index2];
			index3 = returnindex3[index4];
			while ( M.data[index1].i == index2 && N.data[index3].j == index4)
			{
				if (M.data[index1].j < N.data[index3].i)
					index1++;
				if (M.data[index1].j > N.data[index3].i)
					index3++;
				if (M.data[index1].j == N.data[index3].i)
				{
					sum += M.data[index1].e * N.data[index3].e;
					index1++, index3++;
				}
			}
			if (sum)
			{
				O->data[k].e = sum;
				O->data[k].i = index2;
				O->data[k++].j = index4;
			}
			sum = 0;
		}
	}
	O->tu = k - 1;
}

/*

//矩阵的乘法
int multiply_Matrix(Matrix M,Matrix N,Matrix &O){
	int i = 0, j = 0, k = 1; // i,j,k分别表示M,N,O三个矩阵的非零元素序号
	SortByLine(N);//排序功能没问题
	while(M.nu != N.mu){
		printf("由线性代数知,左边的列数和右边的行数需要相等,这两个都不相等这咋乘,给你打回去了!\n");
		if(M.mu == N.nu){
			printf("矩阵相乘顺序搞反了，左边行数等于右边列数!回去重新写过顺序!\n");
		}
		return 0;
	}
	if(!M.tu || !N.tu){
		printf("有一个矩阵是零矩阵!相乘得到的矩阵为零矩阵!\n");
		return 0;
	}
	//"左行右列"
	O.mu = M.mu;
	O.nu = N.nu;
	O.tu = 0;
	int index1 = 1, index2 = 1;
	//index1是矩阵M的遍历器；
	//index2辅助更新M矩阵元素遍历起点，其值为矩阵M中第一个行数等于当前i的元素下标的元素序号
	for (i = 0; i < O.mu; i++)
	{
		int index3 = 1, index4 = 1;
		// index3是矩阵N的遍历器;
		// index4辅助更新N矩阵元素遍历起点，其值为矩阵N中第一个列数等于当前j的元素下标的元素序号
		for (j = 0; j < O.nu; j++)//
		{
			int temp=0;//O在(i行,j列)处的值
				for(index1=index2;index1<=M.tu && M.data[index1].i==i; index1++)//debug-03:i起点有问题，应该为如果i从1开始，那么0就匹配不到了//在index1不越界且M的第index1个元素在第i行的前提下遍历M的元素
				{
					for(index3=index4; index3<=N.tu&&N.data[index3].j==j; index3++)
					//在index3不越界且N的第index3个元素在第j列的前提下遍历N的元素
					{
						if(M.data[index1].j==N.data[index3].i)//两个元素位置匹配相乘即可
						{
							temp=temp+M.data[index1].e*N.data[index3].e;//累加到temp上
							index4++;//记录一下元素
						}
						//不匹配的话，则继续看下一个元素
					}//for-04
					if(index1 == M.tu || M.data[index1+1].i != i)
					//当矩阵M的所有在第i行的元素遍历完成一遍后（index1==M.tu针对矩阵M的最后一行）
					{
						//当这一列所有元素遍历完成后,就直接交换到下一个元素,在for语句中会过掉第一个，直接从后一个元素开始
						// if(N.data[index3+1].j != j ){ //把这行删掉完美实现!!!
							// index3 = index4;//因为之前的元素可能还会选中
							index4 = index3;
						// }
						//此时N.data[index3].j=j+1，将该元素下标值复制到index4中，下次遍历下一列时无需从头开始
					}
				}//for-03
				if (temp)
				{
					O.data[k].i = i;
					O.data[k].j = j;
					O.data[k].e = temp;
					k++;
				}
				//当矩阵O的第i行求值完成后
				if(j == O.nu-1)
				{
					index2 = index1;
					// index1 = index2;
					//此时M.data[index1].i=i+1，将该下标值复制到index2中，下次遍历下一行时无需从头开始
				}
		} // for-02
		O.tu = k-1;
	} // for-01
	return 1;
}

*/