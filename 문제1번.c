////����1�� 17������
//#include <stdio.h>
//int main(void) 
//{
//	int i = 20;
//	int* pi = &i; //������ ����
//	int** dpi = &pi; //���� ������ ����
//
//	printf("%p %p %p\n", &i, pi, *dpi);
//
//	*pi = i + 2; //// i = i + 2
//	printf("%d %d %d\n", i, *pi, **dpi);
//
//	**dpi = *pi + 2; //// i = i + 2
//	printf("%d %d %d\n", i, *pi, **dpi);
//
//	return 0;
//}

//����1�� 20������
//// file: pointerarray.c
//#include <stdio.h> 
//
//int main(void)
//
//{
//	//������ �迭 ���� ����
//	int* pary[3] = { NULL };
//	int i, a = 10, b = 20, c = 30;
//
//	pary[0] = &a; //������ ���� 1
//	pary[1] = &b; //������ ���� 2
//	pary[2] = &c; //������ ���� 3
//	for (i = 0; i < 3; i++)
//	{
//		scanf_s("%d", pary[i]);  // pary[i] ��ü�� �ּҰ� �̹Ƿ� &���� �״�� �ۼ��Ѵ�
//		printf("%d, %d, %d\n", a, b, c);
//	}
//
//	return 0;
// }

////���� 1�� 23������
//#include <stdio.h>
//int main(void) 
//{
//	int a[] = { 8,2,8,1,3 };
//	int* p = a;
//
//	int ary[][4] = { 5,7,6,2,7,8,1,3 };
//	int(*ptr)[4] = ary; //���� ���� 4�� �迭�� ����Ŵ(������)
//	//int *ptr[4] = ary;  //������ �迭
//
//	printf("%2d, %2d\n", *(p + 1), *(p + 4));
//	printf("%2d, %2d\n", p[0], p[4]);
//	printf("sizeof(a) = %d, sizeof(p) = %d\n", sizeof(a), sizeof(p));
//
//	printf("%2d, %2d\n", **ary, **ptr++);
//	printf("%2d, %2d\n", **(ary + 1), **(ptr++));
//	ptr = ary;
//	printf("%2d, %2d\n", *(ary[1] + 1), *(ptr[1] + 1));
//	printf("%2d, %2d\n", *(*(ary + 1) + 3), *(*(ptr + 1) + 3));
//	printf("sizeof(ary) = %d, sizeof(ptr) = %d\n",
//		sizeof(ary), sizeof(ptr));
//
//	return 0;
//}

//
////���� 1�� 32������
//#include <stdio.h> 
//
//void add(double*, double, double);
//void subtract(double*, double, double); //�Լ� ����
//
//int main(void) 
//{
//	double m, n, result = 0;
//	void(*pf)(double*, double, double) = NULL;
//
//	printf("+, - �� ������ �Ǽ� 2���� �Է��ϼ���. >> ");
//	scanf_s("%lf %lf", &m, &n);
//
//	//��Ģ������ ����
//
//	pf = add;
//	pf(&result, m, n); //add(&result, m, n);
//	printf("pf = %p, �Լ� add() �ּ� = %p\n", pf, add);
//	printf("���ϱ� ����: %lf + %lf == %lf\n\n", m, n, result);
//
//	pf = subtract;
//	pf(&result, m, n); //subtract(&result,m,n);
//	printf("pf = %p, �Լ� subtract() �ּ� = %p\n", pf, subtract);
//	printf("���� ����: %lf - %lf == %lf\n\n", m, n, result);
//
//	return 0;
//}
//
//void add(double* z, double x, double y)//�Լ� ���� 
//{
//	*z = x + y;
//}
//
//void subtract(double* z, double x, double y) 
//{
//	*z = x - y;
//}