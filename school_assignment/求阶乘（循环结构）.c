#include "stdio.h"
/*
1023: C语言实验——求阶乘（循环结构）
时间限制: 1 Sec  内存限制: 12 MB
提交: 15  解决: 12
[提交] [状态] [讨论版] [命题人:外部导入]
题目描述

从键盘输入任意一个大于等于0的整数n，然后计算n的阶乘，并把它输出。 提示： 0！是 1 。

输入

输入任意一个大于等于0的整数n。

输出

输出n！

样例输入

3

样例输出

6

来源/分类
*/
int main() {
  int s=1,a,i;
  scanf("%d", &a);
  for ( i =1; i <= a; i++) {
    s *= i;
  }
  printf("%d\n", s);
  return 0;
}
