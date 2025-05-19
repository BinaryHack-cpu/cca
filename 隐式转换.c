//#include <stdio.h>  
//
//int main() 
//{        
//
//    /*
//    
//        隐士转换两条规则：
//            取值范围小的，和取值范围大的计算，小的会自动生成大的再进行计算
//            short char类型进行计算时候，先升级为int,再进行计算
//    
//    */
//
//    /*
//       类型大小(从大到小)
//
//          double
//          float
//          long long
//          long
//          int
//          short
//          char  
//
//    */
//
//    // 规则1
//    int a = 10;
//    double b = 12.3;
//    double c = a + b;
//
//    // 规则2
//    short d = 10;
//    short f = 20;
//    int e = 30;
//
//    return 0;
//
//
//}