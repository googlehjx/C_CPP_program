# 表达式
- 赋值表达式
- 算术表达式
- 逻辑表达式
- 函数调用表达式
- 消息表达式  

# 语句
- 声明语句（变量、函数、类）
- 返回语句
- 循环语句

**表达式**与**语句**的区别：
> 表达式有值，语句只是执行动作。所以从逻辑上应该是“赋值语句”，而不是表达式。
因为:
```C++
	int a;
	a = 5;
```
上面代码片段，第一句是声明语句，它没有值，就是需要一个空间存储整型，并给这个空间
命名为“a”。同样第二句，就在叫a的空间上赋给整数5。也没有值。
再举例说明表达式：
```C++
	int a = 5;
	int b = 6;
	a + b;
```
两个整型变量a和b，利用加法符号进行求和，结果是11，也是整型。它是有值的，也有类型。
函数声明是语句，没有值；返回调用是表达式，有值，且是函数定义中描述的返回类型，
如果不是就出错了。
