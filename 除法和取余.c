//#include <stdio.h>  
//
//int main() 
//{   
//    //除法
//    printf("%d\n" , 10 / 5); 
//
//    //取余
//    printf("%d\n" , 10 % 5);
//
//
//    //通用细节
//    //1，整数计算，结果一定是一个整数
//    printf("%d\n", 10 / 3);
//    //2，小数计算,结果一定是一个小数
//    printf("%.2lf\n", 10.0 / 2.0);
//    //3.整数和小数计算，结果一定是一个小数
//    printf("%.lf\n", 10 / 3.0);
//    //4，小数直接参与计算，结果可能不准确
//    printf("%lf\n", 3.3333333333 + 6.6666666666);     //10.000000
//
//
//    //除法细节
//    //1.不能除以0
//    
//    //取余细节
//    //1，运算数字必须全是整数
//    printf("%d\n", 10 % 4);
//    //2,获取的余数正负，是跟第一个数字保持一致的
//    printf("%d\n", 10 % 3);    //1
//    printf("%d\n", -10 % 3);    //-1
//    printf("%d\n", 10 % -3);    //1
//    //3.不能除以0
//
//
//
//    return 0;      
//};