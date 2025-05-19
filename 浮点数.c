//#include <stdio.h>
//
//int main()
//{
//	//1，float 浮点数类型（精确小数点后6位）  windows占用4个字节 （38位）
//	float a = 3.14F;
//	//精确到小数点后第2位，如果不写.2     会保留六位数字
//	printf("%.2f\n", a);
//
//
//
//	//2，double 浮点数类型（精确到小数点后15位）  windows占用8个字节 （308位）
//	double b = 1.78;
//	//%f是float的缩写，这用%lf写   精确的第二位
//	printf("%.2lf\n", b);
//
//
//
//	//3，long double 高精度小数 （精确到小数点后18到19位） 占8个字节
//	long double c = 3.1215926L;
//	printf("%.2lf\n", c);
//
//
//
//	//4，利用sizeof测量每一个数据占用多少个字节
//	printf("%zu\n", sizeof(float));
//	printf("%zu\n", sizeof(a));
//
//	printf("%zu\n", sizeof(double));
//	printf("%zu\n", sizeof(b));
//
//	printf("%zu\n", sizeof(long double));
//	printf("%zu\n", sizeof(c));
//
//
//
//	return 0;
//}