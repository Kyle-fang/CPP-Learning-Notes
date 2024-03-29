# CPP-Learning-Notes
## 程序设计
   - 程序设计：规划或安排一项任务或事件的执行顺序
   - 计算机程序：由计算机执行的指令集

### C++是C语言的继承，它既可以进行C语言的过程化程序设计，又可以进行以抽象数据类型为特点的基于对象的程序设计，还可以进行以继承和多态为特点的面向对象的程序设计
![a](https://gss3.bdstatic.com/7Po3dSag_xI4khGkpoWK1HF6hhy/baike/s%3D220/sign=ac919fcefa1fbe09185ec4165b610c30/0df431adcbef76099c6c392726dda3cc7cd99e27.jpg)
### 目录
   - [基本语法](https://github.com/Kyle-fang/CPP-Learning-Notes/blob/master/README.md#%E5%9F%BA%E6%9C%AC%E8%AF%AD%E6%B3%95)
   - [基本类型](https://github.com/Kyle-fang/CPP-Learning-Notes/blob/master/README.md#%E5%9F%BA%E6%9C%AC%E7%B1%BB%E5%9E%8B)
      - [转义序列](https://github.com/Kyle-fang/CPP-Learning-Notes/blob/master/README.md#%E8%BD%AC%E4%B9%89%E5%BA%8F%E5%88%97)
   - [变量](https://github.com/Kyle-fang/CPP-Learning-Notes/blob/master/README.md#%E5%8F%98%E9%87%8F)
### 基本语法
   ##### C++ 程序可以定义为对象的集合，这些对象通过调用彼此的方法进行交互。现在让我们简要地看一下什么是类、对象，方法、即时变量。  
   - 对象 ：对象具有状态和行为。例如：一只狗的状态 - 颜色、名称、品种，行为 - 摇动、叫唤、吃。对象是类的实例
   - 类 ：类可以定义为描述对象行为/状态的模板/蓝图。
   - 方法 ： 从基本上说，一个方法表示一种行为。一个类可以包含多个方法。可以在方法中写入逻辑、操作数据以及执行所有的动作。
   - 即时变量 ：每个对象都有其独特的即时变量。对象的状态是由这些即时变量的值创建的。
### 基本类型
类型|位|范围
---|:--:|---:
bool|
char|1个字节|-128 到 127 或者 0 到 255
unsigned char	| 1个字节 | 0 到 255
signed char	| 1个字节 | -128 到 127
int	| 4 个字节 |	-2147483648 到 2147483647
unsigned int | 4 个字节	| 0 到 4294967295
signed int	| 4 个字节	| -2147483648 到 2147483647
short int	| 2 个字节	| -32768 到 32767
unsigned short int	| 2 个字节	| 0 到 65,535
signed short int	| 2 个字节	| -32768 到 32767
long int	| 8 个字节	| -9,223,372,036,854,775,808 到 9,223,372,036,854,775,807
signed long int	| 8 个字节	| -9,223,372,036,854,775,808 到 9,223,372,036,854,775,807
unsigned long int	| 8 个字节	| 0 to 18,446,744,073,709,551,615
float	| 4 个字节	| +/- 3.4e +/- 38 (~7 个数字)
double	| 8 个字节	| +/- 1.7e +/- 308 (~15 个数字)
long double	| 16 个字节	| +/- 1.7e +/- 308 (~15 个数字)
wchar_t	| 2 或 4 个字节	| 1 个宽字
### 类型转换
   - 见代码
### 转义序列
   - '\a'   响铃<br/>
   - '\n'   换行符<br/>
   - '\r'   回车符<br/>
   - '\t'    水平制表符（Tab键）<br/>
   - '\b'   退格符（BackSpace键）<br/>    
   - '\\'   反斜线<br/>
   - "\'"   单引号<br/>
   - '\"'   双引号<br/>
   - '\0'   空字符<br/>
[这里是代码^^](https://github.com/Kyle-fang/CPP-Learning-Notes/blob/master/main.cpp)
## 变量
