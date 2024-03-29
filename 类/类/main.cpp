/*
	类：是面向对象程序设计的基础
	抽象数据类型（ADT）：仅关注其逻辑特性，将其实现细节推迟到以后完成
						抽象数据类型操作的类别：
												1.构造函数：
												2.转换函数：
												3.观察函数：
												4.析构函数：
												5.迭代函数：
	C++类：
			1.类成员：类的组成项，既可以是数据，也可是函数；
			2.类声明：
					class 类型名{
						访问修饰符：成员列表
							.
							.
							.
					}变量列表;

					访问修饰符：1.其是两个关键字之一：public 和 private；
							   2.public之后的数据和函数构成了公共接口，客户端可以直接访问（任何声明
							和处理类对象的软件都成为这个类的客户端）
							   3.private之后声明的类成员可看做是私有信息，客户端不能访问
							   4.C++无需按照固定顺序声明公共和私有类成员
							   5.默认情况下，类成员是私有的
							   6.结构体与类之间的区别：
													C++将结构体定义为所有成员（默认）均为公共成员的类
													而类的成员在默认情况下都是私有的
					类，对象和成员：
								1.类是一种类型，而不是一个对象；
								2.而由类创建出的具体数据值才是对象；
								3.实力化类已生成一个对象，对象是类的一个实例；
					构造函数:
							1.类的构造函数是类的一种特殊的成员函数，它会在每次创建类的新对象时执行。
							2.构造函数的名称与类的名称是完全相同的，并且不会返回任何类型，也不会返回 void。
							3.构造函数可用于为某些成员变量设置初始值。
					对对象的内置操作：
					类的作用域：
								

*/

/*
#include<iostream>
#include<string>
using namespace std;


class preson {
public:
	string name;
	int age;
	//成员函数可以定义在类定义内部，或者单独使用范围解析运算符 :: 来定义
	void Add_1(int age1) {
		age1++;
		cout << "age1 = " << age1 << endl;
	}
	preson();	//声明构造函数
};
//构造函数
preson::preson() {
	age = 0;
}
int main() {
	preson a, b;   //person可以被用来定义新的person类型的变量，声明了a，b两个类对象
	a.name = "tom";
	b.name = "jim";
	cout << "a name is " << a.name << endl;
	cout << "b name is " << b.name << endl;
	a.age = 18;
	a.Add_1(a.age);	//该函数不会改变a.age的值
	cout << "tom age is " << a.age << endl;
	system("pause");
	return 0;
}*/

/*
	信息隐藏：
			实施细节的封装和隐藏，使抽象对象的用户不用依赖这些细节，也不会错误的操作这些细节
	抽象屏障：
			对象周围的一堵不可见的墙，其封装了实现细节；这堵墙只能通过公共借口来突破
	用户编写头文件：
					当一个数据类型可在多个程序中用到，可将其放在一个单独的文件中（头文件），利用#include指令将文件内容插入到程序中
					1.若将头文件的名字放在尖括号中，预处理命令会在标准include目录中查找该文件，这个标准目录包含了C++系统提供的所有头文件
					2.若将头文件的名字放在双括号内，预处理命令则会在当前目录中查找该文件
	规格说明文件：
	
	实现文件：
*/

/*
#include<iostream>
#include"months.h"
using namespace std;
int main() {
	Months A = MAY;
	Month C;
	C.JAN = "星期一";
	int B = A;
	cout << B << endl;
	output_month(C.JAN);
	system("pause");
	return 0;
}*/

/*
	类的设计原则：
				1.封装：
*/

/*
	组合
*/