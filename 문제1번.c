////문제1번 17페이지
//#include <stdio.h>
//int main(void) 
//{
//	int i = 20;
//	int* pi = &i; //포인터 선언
//	int** dpi = &pi; //이중 포인터 선언
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

//문제1번 20페이지
//// file: pointerarray.c
//#include <stdio.h> 
//
//int main(void)
//
//{
//	//포인터 배열 변수 선언
//	int* pary[3] = { NULL };
//	int i, a = 10, b = 20, c = 30;
//
//	pary[0] = &a; //포인터 변수 1
//	pary[1] = &b; //포인터 변수 2
//	pary[2] = &c; //포인터 변수 3
//	for (i = 0; i < 3; i++)
//	{
//		scanf_s("%d", pary[i]);  // pary[i] 자체가 주소값 이므로 &없이 그대로 작성한다
//		printf("%d, %d, %d\n", a, b, c);
//	}
//
//	return 0;
// }

////문제 1번 23페이지
//#include <stdio.h>
//int main(void) 
//{
//	int a[] = { 8,2,8,1,3 };
//	int* p = a;
//
//	int ary[][4] = { 5,7,6,2,7,8,1,3 };
//	int(*ptr)[4] = ary; //열의 수가 4인 배열을 가리킴(포인터)
//	//int *ptr[4] = ary;  //포인터 배열
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
////문제 1번 32페이지
//#include <stdio.h> 
//
//void add(double*, double, double);
//void subtract(double*, double, double); //함수 선언
//
//int main(void) 
//{
//	double m, n, result = 0;
//	void(*pf)(double*, double, double) = NULL;
//
//	printf("+, - 를 수행할 실수 2개를 입력하세요. >> ");
//	scanf_s("%lf %lf", &m, &n);
//
//	//사칙연산을 수행
//
//	pf = add;
//	pf(&result, m, n); //add(&result, m, n);
//	printf("pf = %p, 함수 add() 주소 = %p\n", pf, add);
//	printf("더하기 수행: %lf + %lf == %lf\n\n", m, n, result);
//
//	pf = subtract;
//	pf(&result, m, n); //subtract(&result,m,n);
//	printf("pf = %p, 함수 subtract() 주소 = %p\n", pf, subtract);
//	printf("빼기 수행: %lf - %lf == %lf\n\n", m, n, result);
//
//	return 0;
//}
//
//void add(double* z, double x, double y)//함수 정의 
//{
//	*z = x + y;
//}
//
//void subtract(double* z, double x, double y) 
//{
//	*z = x - y;
//}