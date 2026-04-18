/*
牛客网(https://www.nowcoder.com/)BC12 学生基本信息输入输出题
这里给出三种解法(因为作者目前刚刚学到 struct结构体), 因需要四舍五入精确至一位小数保留两位小数所以使用 float 数据类型
*/

//plan1
#include <stdio.h>
int main() {
    //定义变量
    int i;
    float a, b, c;    //float(单精度浮点数小数点后第二位四舍五入), 不可使用 double(双精度浮点数)类型
    scanf("%d; %f, %f, %f", &i, &a, &b, &c);
    //保留两位小数所以占位符(%f)中加.2: %.2f    
    printf("The each subject score of No. %.2d is %.2f, %.2f, %.2f.", i, a, b, c);
    return 0;
}

//plan2: 结构体
#include <stdio.h>
int main() {
    //定义结构体类型
    struct arr {
        int i;
        float a, b, c;
    };
    //定义结构体变量
    struct arr ar;
    scanf("%d; %f, %f, %f", &ar.i, &ar.a, &ar.b, &ar.c);
    printf("The each subject score of No. %.2d is %.2f, %.2f, %.2f.", ar.i, ar.a, ar.b, ar.c);
    return 0;
}

//plan3: 结构体指针
#include <stdio.h>
int main() {
    //定义结构体类型
    struct arr {
        int i;
        float a, b, c;
    };
    struct arr ar;
    struct arr *aa;
    aa = &ar;
    scanf("%d; %f, %f, %f", &aa->i, &aa->a, &aa->b, &aa->c);
    printf("The each subject score of No. %.2d is %.2f, %.2f, %.2f.", aa->i, aa->a, aa->b, aa->c);
    return 0;
}
