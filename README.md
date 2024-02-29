# 零基础学习编程
> 从C到C++，初级编程者应该掌握的基本技能。  
1. C/C++基本语法  
2. C++类设计
3. C/C++标准库

## 核心编程概念

### 函数
> *函数* 在编程概念中起到中枢的作用，往下包含变量声明、语句
、表达式、返回值等，往上涉及函数调用、结构模块、功能方法等

#### 函数组成
- 函数头
- 函数体

> ***函数头:*** 包括函数名和函数参数及返回值，  
> ***函数体:*** 在由花括号(\{})包含的程序语句构成

#### 语句类型
- 声明语句
- 赋值语句
- 函数调用
- 消息语句
- 返回语句

#### C/C++函数特点
- 不允许嵌套定义
- 先声明，后使用
- 必须有返回值（void也可看作是一种）
- 一般将声明放置在头文件中，实现放在cpp中，声明和定义分离
- main函数可以省略return 0；其他int类型返回值的函数不能省略
- 返回类型为void的函数，内部实现时可省略“return；”

### 类和对象

> 类是C语句中变量类型的扩展，并开放给程序员。程序员可以方便
的自定义不同类型，生成对象，初始化、赋值、发送消息等，完成
既定程序功能

#### 类组成
- 成员属性
- 成员函数

> 用 ***类(class)*** 来描述自然界中某种类别的物体，它们有些共性：状态和技能。
例如：***鸟*** 有羽毛、爪子、翅膀，会飞、叫、跑、吃、繁殖等。那么可以定义（生成）**bird**
类别的对象（类的实例）。

```c++
class bird {

public:
	void fly();
	void chirp();
	void run();
private:
	int color;
	int paw;
	int wing;
}
```
> 有了bird这个类，要描述具体某个鸟，它是什么颜色、翅膀什么样的，怎么叫的，会不会跑
等等属性和动作，就比较方便了。如果要让它叫、跑，就分别给它发消息。
```c++
bird bd;
bd.chirp();
bd.run();
```

成员函数应该遵从前面关于**函数**特性的规则。


### 基本数据类型
> 在编程语言设计之初，就预先定义基础数据类型。它们是用来表述世界的基本状态。一般程序语言
的基本数据类型包括：整形、浮点型、字符串。一般还提供组合数据类型：数组、
结构、枚举、记录（有点语言叫Record、Map、字典)等。

每一个表达式、每个变量、每个函数调用都有数据类型（void是一种特例）。编译器在做
语义检查时，主要是检查赋值语句左右两边的表达式类型是否匹配或满足隐式转换。
例如：把字符串对象赋值给整形变量，就会报错。

- 整型
- 浮点型  

**整型**，是以实数为基础，它是可数的，能够排序。C/C++将整型还细分多个子类型。
它的字面值如“3”、“5”、“-9”，还可在尾部添加u、l、ll字母等表示子类型。
**浮点型**，带小数点的数字，它的内部表示方式与整型不同，表示范围比较大，不可数。默认是
double类，字面值尾部添加f，表示float类型。

### 复合类型
> 以基本数据类型为原子构建更多元的数据类型，描述更复杂的真实世界对象，包括数组、结构、
枚举、共用体，还包括字符串和指针。它们都是在基本数据类型的基础上创建的。
```C++
// 声明一个int数组，它包含三个int数据，同时初始化它们
int arr [3] = {12, 365, 24}; 

// 上面的大括号内包含多个元素并通过赋值等号给数组赋值，只有在初始化时可用
// 下面的代码编译通不过
float f_arr[3];
f_arr[3] = { 3.14, 0.618, 2.718};

```

> 结构体内包含字符指针时，它的对象之间如何赋值操作？浅拷贝or深拷贝
### 指针
> 指针也是复合数据类型，如何理解？  
指针是变量，它的内容是另一个数据对象的地址。那么它的类型不就是“指针”类型吗？
为何要说它是复合数据类型，和谁复合呢？计算机中用来表示数据对象的地址，是指向数
据对象在内存中所占据的空间的第一个字节的地址。当控制器要读取内存值的时候，还要
知道读余下几个字节，才能一起构成数据对象，以及如何解释它们。  
所以，指针不能单独作为数据类型，还要加上它指向对象的数据类型，变成比如整数指针、
浮点数指针，两个整型输入作为参数，无返回值的函数指针...