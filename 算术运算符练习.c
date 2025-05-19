//#include <stdio.h>  
//int main()
//{
//    /*
//    
//       拆解一个三位数，将其拆其为个位，十位，百位，打印在控制台
//
//    */
//
//    // 1.键盘输入三位数
//    printf("请输入三位数：\n");
//    int num;
//    scanf("%d", &num);
//
//    // 2.拆分
//    int ge = num % 10;
//    int shi = num / 10 % 10;
//    int bai = num / 100 % 10;
//
//    // 3.输出打印
//    printf("个位数字是: %d\n", ge);
//    printf("十位数字是: %d\n", shi);
//    printf("百位数字是: %d\n", bai);
//
//    return 0;
//}