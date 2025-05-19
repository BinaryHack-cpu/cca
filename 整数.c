//#include <stdio.h>  
//
//int main() 
//{    
//    //1.定义short、int、long、long long四种类型的变量
//    //格式：  数据类型 变量名 = 数据值；
//
//    // short  2个字节
//    short a = 3453;
//    printf("%d\n",a);
//
//    //int 4个字节
//    int b = 1244;
//    printf("%d\n", b);
//
//    //long   4个字节
//    long c = 1234L;
//    printf("%ld\n", c);
//     
//    //long long   8个字节
//    long long d = 14455LL;
//    printf("%lld\n", d);
//
//    // 2.用sizeof测量每一个类型占多少个字节
//    // short
//    printf("%zu\n", sizeof(short));
//    printf("%zu\n", sizeof(a));
//
//    //3 有符号整数和无符号整数定义情况（了解）
//
//    // signed有符号，正数和负数
//    signed int e = -111;
//    //int e = 111;   上下两个都一样
//    printf("%d\n", e);
//
//    // unsigned无有符号，正数
//    unsigned num1 = 65555;
//    printf("%d\n", num1);
//
//
//    return 0;      
//}