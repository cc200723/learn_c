## 基础相关
### 1 以下程序运行结果为

```c
char s1[10]="12345",s2[10]="abc",s3[]="67";
strcpy(s1,s2);
strcat(s1,s3);
puts(s1);
```

语言中，反斜杠开头的字符被称为转义字符

可以用反斜杠后跟8进制或16进制数表示一个字符，格式为：

\nnn 后跟8进制，n的个数最小1个，最多三个

\xhh 后跟16进制，必须以小写x开头，h个数最小一个，最多两个

如'\101' 就相当于 十进制数65，也就是是字符'A'，用16进制转义就是'\x41'

### 2以下运算结果为1的是

```c
int a=34,b=5,c=6
/*A*/ a||b+c&&b-c
/*B*/ !(a>b)&&!c||1
/*C*/ a+b>c&&b==c
/*D*/ !(a+b==c)&&b+c/2
```

![运算优先级](https://gss2.bdstatic.com/-fo3dSag_xI4khGkpoWK1HF6hhy/baike/c0%3Dbaike80%2C5%2C5%2C80%2C26/sign=59a3e1017d3e6709aa0d4dad5aaef458/63d9f2d3572c11df57c9a205612762d0f703c2f8.jpg)

```c
/*A*/ 1||1&&1
 1
/*B*/ 0&&0||1
0||1
1
/*C*/ 1&&0
0
/*D*/ !0&&1
1&&1
1
```
