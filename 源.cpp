
#include<iostream>
using namespace std;

//浅拷贝是指简单地复制对象的数据成员的值，包括指针类型的成员变量。这意味着新对象和原始对象将共享相同的内存地址，当一个对象修改了共享的资源时，另一个对象也会受到影响。这可能会导致潜在的错误和不可预测的行为。比如重复释放内存，由于共享内存，每个对象调用了析构函数一次
//深拷贝是指创建一个新的对象，并复制原始对象的所有数据成员的值，包括指针类型的成员变量。对于指针类型的成员变量，深拷贝将会分配新的内存空间，并将原始对象指针所指向的内容复制到新的内存空间中。这样，新对象和原始对象就拥有独立的内存空间，修改一个对象不会影响到另一个对象
//class MyClass {
//public:
//    int* data;
//
//    // 构造函数
//    MyClass(int value) {
//        data = new int;
//        *data = value;
//    }
//
//    // 拷贝构造函数 - 浅拷贝
//    MyClass(const MyClass& other) {
//        data = other.data;  // 简单地复制指针的值
//    }
//
//    // 深拷贝构造函数 - 深拷贝
//    MyClass(const MyClass& other) {
//        data = new int;
//        *data = *(other.data);  // 复制指针所指向的内容
//    }
//
//    // 析构函数
//    ~MyClass() {
//        delete data;  // 释放动态分配的内存
//    }
//};
//
//int main() {
//    MyClass obj1(10);
//    MyClass obj2 = obj1;  // 使用拷贝构造函数进行赋值
//
//    // 修改 obj1 的数据成员
//    *(obj1.data) = 20;
//
//    // 输出 obj2 的数据成员
//    std::cout << *(obj2.data) << std::endl;  // 若为浅拷贝，输出结果为 20；若为深拷贝，输出结果为 10
//
//    return 0;
//}
// 在上述示例中，MyClass 类使用了浅拷贝和深拷贝两种方式进行对象复制。若使用浅拷贝，则 obj1 和 obj2 共享相同的内存地址，修改 obj1 的数据会影响到 obj2。而若使用深拷贝，则 obj1 和 obj2 拥有独立的内存空间，修改一个对象不会影响到另一个对象。
// 



//class Penson {
//
//public:
//	Penson(int a,int b,int c): ma(a),mb(b),mc(c)//构造函数赋值，初始化列表
//	{
//
//	}
//	int ma;
//	int mb;
//	int mc;
//
//
//};
//int main()
//{
//	Penson p(10, 20, 30);
//	cout << p.ma << p.mb << p.mc << endl;
//	system("pause");
//	return 0;
//}

//class P {//成员变量和成员函数(不在类中)分开存储，静态变量不属于类对象上的
//public:
//	int a;
//	void kkk(P &b) {
//		this->a = b.a;
//
//	}
//
//};
//class P1 {
//
//};
//class P2
//{
//	int a;
//	static int b;
//};
//int P2::b = 2;
//class P3
//{
//	int a;
//	void f(){}
//};
//class P4
//{
//	void f() {}
//};
//int main() {
//
//	P a;
//	P1 b;
//	P2 c;
//	P3 d;
//	P4 e;
//	cout << sizeof(a) << sizeof(b) << sizeof(c) << sizeof(d) << sizeof(e) << endl;
//
//
//	system("pause");
//	return 0;
//}


// *this返回对象本身的注意事项
// this指针指向被调用的成员函数所属的对象
//class P {
//public:
//	int a;
//	void kkk(P& b) {
//		this->a = b.a;
//
//	}
//
//};
//
//class P1 {
//public:
//	int a;
//	P1 kkk(P1& b) {
//		this->a = b.a;
//		return *this;
//	}
//
//};
//class P2 {
//public:
//	int a;
//	P2& kkk(P2& b) {
//		this->a += b.a;
//		return *this;
//	}
//
//};
//
//void t() {
//	P a;
//	a.a = 10;
//	P b;
//	b.a = 10;
//	a.kkk(b).kkk(b);
//}
//void t1() {
//	P1 a;
//	a.a = 10;
//	P1 b;
//	b.a = 10;
//	a.kkk(b).kkk(b).kkk(b);
//	cout << a.a << endl;
//}
//void t2() {
//	P2 a;
//	a.a = 10;
//	P2 b;
//	b.a = 10;
//	a.kkk(b).kkk(b).kkk(b);
//	cout << a.a << endl;
//}
//int main() {
//	t1();
//	t2();
//
//	system("pause");
//	return 0;
//}



//class P//常对象和常函数
//{
//public:
//	int m_a;
//	mutable int m_b;//无视常函数和常对象的限制
//	//this本质是指针常量，格式为P*const this 指针指向不修改
//	
//	void func() const//常函数内不可以修改成员属性。相当于常量指针，指向的值不能修改。
//	{
//		//m_a = 10;
//		m_b = 10;
//	}
//	void fun() {
//
//	}
//};
//
//int main() {
//	P b;
//	b.fun();
//	b.func();
//	const P a;//相当于常量指针，只能调用常函数。因为普通函数可以修改属性，但常对象指向的值不能修改，所以不能调用普通函数
//	a.func();
//	a.fun();
//	a.m_a = 10;
//	a.m_b = 10;
//	system("pause");
//	return 0;
//}


//友元，让非类内的东西访问类内私有成员


//P::P() {
//
//}//类外写函数


//class P1 {
//	P* p;
//	void func();
//};
//
//void P1::func() {
//	p->b = 10;//类做友元的作用
//}
//
//void c() {
//	P a;
//	a.b = 10;
//}
//
//class p2
//{
//	P*p;
//public:
//	void a();
//	void b();
//};
//void p2::a() {
//	p->b = 10;
//}
//
//class P {
//	friend void c();//全局函数做友元
//	friend class P1;//类做友元
//	friend void p2::a();//成员函数做友元.注意p2本体必须放在P前面，否则报错，或者先声明P类
//public:
//	int a;
//	P();
//private:
//	int b;
//};




//加法运算符重载
//class P
//{
//public:
//	int m_a;
//	int m_b;
//
//	P operator+(P& a)//成员函数作加号运算符重载,全局函数也可以，但要传两个参数，即两个加数；
//	{
//		P b;
//		b.m_a = this->m_a + a.m_a;
//		b.m_b = this->m_b + a.m_b;
//		return b;
//}
//
//};
//int main() {
//	P a;
//	a.m_a = 12;
//	a.m_b = 2;
//	P b;
//	b.m_a = 23;
//	b.m_b = 0;
//	a = a + b;
//	cout << a.m_a << a.m_b << endl;
//	system("pause");
//	return 0;
//}



//<<运算符重载
//class P {
//	friend ostream& operator<<(ostream& cout, P& p);
//public:
//	P(int a,int b) {
//		this->m_a = a;
//		this->m_b = b;
//	}
//private:
//	int m_a;
//	int m_b;
//};
//
//ostream& operator<<(ostream &cout,P &p) {//全局函数做左移运算符（<<）重载，可以实现自定义输出类型。
//
//	cout << "m_a=" << p.m_a<< "m_b=" << p.m_b;
//	return cout;
//}
//
//void t() {
//	P p(10,10);
//
//	cout<<p<<endl;//链式编程思想cout<<p返回了一个cout，然后cout<<endl.例如系统原始输出cout<<a<<b<<c<<endl,
//	//按照链式编程思想，cout先调用打印a的函数，函数返回结果，再调用打印b的函数，依次类推。
//	//打印a函数返回的结果应该就是cout，此时a已经打印出来了，返回的cout再调用打印b的函数，再返回cout调用c。
//}
//
//int main() {
//
//	t();
//	system("pause");
//	return 0;
//}

////++运算符重载
//
//class P {
//	friend P& operator++(P& a);
//	friend ostream& operator<<(ostream &out, P a);
//	friend P operator++(P& a, int);
//public:
//	P(int a, int b) {
//		this->m_a = a;
//		this->m_b = b;
//	}
//
//private:
//	int m_a;
//	int m_b;
//};
//
//ostream& operator<<(ostream &out,P a) {
//
//	cout<<a.m_a<<" " << a.m_b << endl;
//	return out;
//}
//
//P& operator++(P &a) {
//	
//	++a.m_a;
//	++a.m_b;
//	return a;
//
//}
//P operator++(P& a,int ) {//只能用int占位参数来区分前置++和后置++
//
//	P p=a;
//	a.m_a++;
//	a.m_b++;
//	return p;
//
//}
//
//void test() {
//	P p(10,1);
//	cout <<++p<< endl;
//	cout << p << endl;
//	cout << p++ << endl;
//	cout << p << endl;
//
//}
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}

////赋值运算符重载,必须是成员函数，不能是全局
//class P {
//public:
//	int* m_age;
//	P(int a) {
//		m_age = new int(a);
//	}
//	~P() {
//		if (m_age != NULL)
//		{
//			delete m_age;
//			m_age = NULL;
//		}
//	}
//	P& operator=(P& p) {
//
//		if (this->m_age != NULL)
//		{
//			delete this->m_age;
//			this->m_age = NULL;
//		}
//		this->m_age = new int(*p.m_age);
//		return *this;
//	}
//	
//};
//ostream& operator << (ostream & out, P &p)//必须用&p，否则会创建新的副本，该副本*m_age用的还是传过来的堆的地址，
////但是该副本的生命周期只有在ostream& operator<<函数中，函数结束就会释放*m_age，而本体的生命周期是在void t()中，所以当本体生命周期结束后，会导致二次释放*m_age，从而报错。
//
//{
//	cout << *p.m_age << endl;
//	return out;
//}
//void t() {
//	P a(10);
//	P b(20);
//	P c(30);
//	cout << a << b << c << endl;
//	c=b = a;
//	cout << a << b << c << endl;
//}
//
//int main() {
//
//	t();
//	system("pause");
//	return 0;
//}

//关系运算符重载，函数调用运算符重载，只能用成员函数实现

//class P {
//public:
//	P(string name,string sex,int age) {
//		this->name = name;
//		this->sex = sex;
//		this->age = age;
//
//	}
//	P() {
//
//	}
//	bool operator == (P&p) {
//
//		if ((p.name == this->name && p.age ==this->age) && p.sex == this->sex)
//		{
//			return true;
//		}
//		return false;
//
//	}
//	int operator()(int a) {//函数调用运算符重载
//
//		cout << "匿名对象" << endl;
//		return a;
//
//	}
//
//private:
//	string name;
//	string sex;
//	int age;
//};
//
//void t() {
//	P p1("zhu", "nv", 12);
//	P p2("zhu","nv",12);
//	P p3("zh","nan",12);
//	if (p1 == p2)
//	{
//		cout<<"p1和p2相等" << endl;
//	}
//	if(p1==p3)
//	{
//		cout << "p1和p3相等" << endl;
//	}
//	cout<<P()(10)<<endl;//匿名对象
//}
//
//int main()
//{
//	t();
//	system("pause");
//	return 0;
//}


//三种继承方式。注意：不管那种继承都不能访问父类私有权限的属性
//class Person
//{
//public:
//	
//	int a;
//protected:
//	int b;
//private:
//	
//	int c;
//};
//
//
//
//class P1: public Person//公共继承
//{
//public:
//	void func() {
//		a = 10;//父类中是公共权限，到了子类仍然是公共权限
//		b = 10;//父类中是保护权限，到了子类仍然是保护权限
//		//c = 10;//父类中的私有权限，子类无法访问
//
//	}
//};
//
//class P2 : protected Person//保护继承
//{
//public:
//	void func() {//均为保护权限，类外无法访问
//		a = 10;
//		b = 10;
//		//c = 10;
//
//	}
//};
//
//class P3 : private Person//私有继承
//{
//public:
//	void func() {//均为私有权限，类外无法访问
//		a = 10;
//		b = 10;
//		//c = 10;
//
//	}
//};
//
//class P4 :public P3
//{
//	void fu() {
//		//a = 10;//无法访问
//	}
//};
//void t() {
//	P1 p;
//	p.a = 10;//公共权限，类外可以访问
//	//p.b = 10;//保护权限，类外无法访问
//	P2 b;
//	//b.a = 10;//保护权限，类外无法访问
//		//b.b = 10;//保护权限，类外无法访问
//	P3 c;
//	//b.a = 10;//私有权限，类外无法访问
//	//b.b = 10;//私有权限，类外无法访问
//}


//继承中的对象模型
//父类对象先创建，并且后消失
//class P {
//public:
//
//	P() {
//		m_a = 10;
//		cout << "P的构造函数" << endl;
//	}
//	~P() {
//		cout << "P的析构函数" << endl;
//	}
//	void func() {
//		cout << "父类" << endl;
//	}
//	void func(int a) {
//		cout << "父类的重载" << endl;
//	}
//	int m_a;
//protected:
//	int m_b;
//private:
//	int m_c;
//
//};
//
//class P1 : public P {
//public:
//	P1() {
//		m_a = 200;
//		cout << "P1的构造函数" << endl;
//	}
//	void func() {
//		cout << "子类" << endl;
//	}
//	
//	~P1() {
//		cout << "P1的析构函数" << endl;
//	}
//	int m_d;
//	int m_a;
//
//};
//
//void test1() {
//
//	cout << "P1的大小为：" << sizeof(P1) << endl;//父类中所有属性(除了静态成员)都被继承了，只是私有权限的属性，不能访问而已，但是被继承了，占用了空间
//}
//
//void test2() {
//	P1 p;
//	cout << p.m_a << p.P::m_a << endl;//同名成员，父类访问要加作用域
//	p.func();
//	//p.func(100);//不能把子类和父类中的同名，参数不同的函数视为相互重载。还是得加上作用域
//	p.P::func(100);
//	p.P::func();//调用同名函数和访问同名属性一样要加作用域
//
//
//	
//}
//int main()
//{
//	test1();
//	P1 p1;
//	system("pause");
//	return
//		0;
//}

////子类父类同名静态成员访问
//class P {
//
//public:
//	int static m_a;
//	void static fun() {
//		cout << "父类" << endl;
//	}
//};
//int P::m_a = 100;
//
//class P1:public P {
//public:
//	int static m_a;
//	void static fun() {
//		cout << "子类" << endl;
//	}
//};
//int P1::m_a = 10;
//
//void test() {
//	P1 p1;
//	cout << p1.m_a << p1.P::m_a << endl;//和非静态成员属性一样，都是通过加作用域来访问
//	cout << P1::m_a << P::m_a <<P1::P::m_a<< endl;//第二和第三结果一样
//	p1.fun();
//	p1.P::fun();
//	P1::P::fun();
//	P1::fun();
//}
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}

////多继承
//class P {
//public:
//	int m_a;
//	P()
//	{
//		m_a=10;
//	}
//};
//
//class P1 {
//public:
//	int m_a;
//	P1() {
//		m_a = 100;
//	}
//};
//
//class P2 :public P1,public P{
//
//public:
//	int m_a;
//	P2() {
//		m_a = 1000;
//	}
//
//};
//
//void test() {
//	P2 p;
//	cout << p.m_a << p.P1::m_a << p.P::m_a << sizeof(p)<<endl;//容易产生访问错误问题，一般开发中不使用
//}
//
//int main() {
//	test();
//	system("pause");
//	return 0;
//}

//菱形继承（钻石继承）

//class P1 {
//public:
//	int m_a;
//};
//
//class P2 :virtual public P1{//加上virtual
//
//};
//
//class P3 :virtual public P1{//加上virtual,可以解决菱形继承的问题，这种继承叫虚继承
//
//};
//
//class P :public P2, public P3//出现问题，P会继承两个m_a
//{
//public:
//	
//
//private:
//
//};
//
//void tset() {
//
//	P p;
//	p.P2::m_a = 18;
//	p.P3::m_a = 28;
//	p.m_a = 38;//不用虚继承会报错
//	cout << p.P2::m_a << endl;
//	cout << p.P3::m_a << endl;
//}
//
//int main() {
//	tset();
//	system("pause");
//	return 0;
//}

//
////多态。1.可读性强，代码组织逻辑清晰，
// //函数的重载和运算符的重载属于静态多态。派生类和虚函数实时运行是动态多态
//class P {
//
//public:
//	void virtual fun()//加上virtual执行的就是子类的fun，即为动态多态。不加执行的是父类的fun。
// //普通函数是不占用类内空间的，但是虚函数本质上是指向虚函数表的指针（占了类内空间，大小为4），此时指针指向的虚函数表里存着父类的fun函数的地址
//	{
//		cout << "父类" << endl;
//	}
//};
//class P1:public P
//{
//public:
//	void fun() {//子类重写父类的fun函数，实际上子类也继承了虚函数，由于重写，虚函数表的指针，指向的是存放子类fun函数的地址的虚函数表。是覆盖了继承的，并没有修改父类的虚函数指针
//		cout<<"子类" << endl;
//	}
//	
//};
//
//void test(P& p) {
//	p.fun();
//
//}
//
//int main() {
//	P1 p;
//	test(p);
//	system("pause");
//	return 0;
//}


////多态的运用：计算器.符合面向对象开闭原则：对扩展开放，对修改关闭。
//class AbstractCalculate {
//
//public:
//	virtual int getResult() {
//
//		return 0;
//	}
//	int m_a;
//	int m_b;
//
//};
//
//class Add :public AbstractCalculate {
//
//	virtual int getResult() {
//
//		return m_a + m_b;
//	}
//};
//class Sub :public AbstractCalculate {
//
//	virtual int getResult() {
//
//		return m_a - m_b;
//	}
//};
//class Mul :public AbstractCalculate {
//
//	virtual int getResult() {
//
//		return m_a / m_b;
//	}
//};
//void test() {
//
//	AbstractCalculate* a = new Add;
//	a->m_a = 100;
//	a->m_b = 100;
//	cout << a->getResult() << endl;
//	delete a;
//	AbstractCalculate* a1 = new Sub;
//	a1->m_a = 100;
//	a1->m_b = 100;
//	cout << a1->getResult() << endl;
//	delete a1;
//	AbstractCalculate* a2 = new Mul;
//	a2->m_a = 100;
//	a2->m_b = 100;
//	cout << a2->getResult() << endl;
//	delete a2;
//}
//
//int main() {
//	test();
//		system("pause");
//
//		return 0;
//}

////纯虚函数和抽象类  纯虚函数语法 virtual 返回值类型 函数名 (参数列表) 
////当类中有了纯虚函数，被称为抽象类，特点：无法实例化对象。子类必须重写纯虚函数，不然也是抽象类
//
//class makeDrinks {
//
//public:
//	virtual void boilWater() = 0;
//	virtual void Brew() = 0;
//	virtual void addToCup() = 0;
//	virtual void addIngredients() = 0;
//};
//
//class Coffee :public makeDrinks {
//	void boilWater() {
//		cout << "煮水" << endl;
//	}
//	virtual void Brew() {
//		cout << "冲泡咖啡" << endl;
//	}
//	void addToCup() {
//		cout << "倒入杯中" << endl;
//	}
//	virtual void addIngredients() {
//		cout << "加糖和牛奶" << endl;
//	}
//};
//
//class Tea :public makeDrinks {
//
//	void boilWater() {
//		cout << "煮矿泉水" << endl;
//	}
//	virtual void Brew() {
//		cout << "冲泡茶叶" << endl;
//	}
//	void addToCup() {
//		cout << "倒入盆中" << endl;
//	}
//	virtual void addIngredients() {
//		cout << "加柠檬" << endl;
//	}
//
//};
//void test(makeDrinks*a) {
//	a->boilWater();
//	a->Brew();
//	a->addToCup();
//	a->addIngredients();
//	delete a;
//}
//void t() {
//	test(new Coffee);
//	test(new Tea);
//}
//
//int main() {
//	t();
//		system("pause");
//	return 0;
//}

////虚析构和纯虚析构
//class Animal {
//public:
//	Animal() {
//		cout << "Animal构造函数" << endl;
//	}
//	/*virtual ~Animal()//纯虚析构需要声明也需要实现，有了纯虚析构这个类也属于抽象类了,强制子类提供自己的虚构函数。
//	{
//		cout << "Animal虚析构函数" << endl;
//	}*/
//	virtual ~Animal() = 0;
//};
//Animal::~Animal() {//纯虚析构函数必须有内容，只能在类外实现，没有内容纯虚析构会报错
//	cout << "纯虚析构函数" << endl;
//}
//
//class Cat :public Animal {
//public:
//	Cat() {
//		cout << "Cat构造函数" << endl;
//		m_A = new int(10);
//	}
//	~Cat()
//	{
//		delete m_A;
//		cout << "Cat析构函数" << endl;
//	}
//	int*m_A;
//
//};
//
//void t() {
//	Animal* a = new Cat;
//	//父类指针在析构的时候不会调用子类的虚构函数，导致，子类申请的堆区内存不能释放，导致内存泄露
//	//解决办法，将父类的析构函数变成虚析构函数，在函数名前面加virtual。变成虚析构后才会调用子类的析构函数。
//	delete a;
//}
//
//int main() {
//	t();
//
//	system("pause");
//	return 0;
//}

//文件操作
#include<fstream>
//包含头文件<fstream>
//
//文件类型分为两种
//文本文件 : 文件以文本的ascall码形式存储在计算机中
//二进制文件：文件以文本的二进制形式存储在计算机中，用户一般不能直接读懂他们
//
//
//操作文件的三大类：
//1.ofstream：写操作 o指的是out，对于编程软件来说，向文件写内容，就是输出的过程，所以是out
//2.ifstream：读操作 i指的是in，对于编程软件来说，从文件中读取内容，就是从文件向编程软件输入内容的过程，所以是in
//3.fstream：读写操作。包含上面两种功能
//
//写文件步骤：
//1.包含头文件
//2.创建流对象
//ofstream ofs；
//3.打开文件
//ofs open（"文件路径"，打开方式）
//如果找不到文件，会在当前目录下创建文件。
//打开方式：
//ios::in   为读文件而打开文件
//ios::out   为写文件而打开文件
//ios::ate   初始位置：文件尾
//ios::app    追加方式写文件
//ios::trunc  如果文件存在先删除，再创建
//ios::binary  二进制方式
//4.写数据
//ofs << "写入的数据";
//5.关闭文件
//ofs.close()
//
//
//读文件步骤：
//1.2.5步和写文件一样
//3.打开文件并判断文件是否打开成功
//ifs.open("文件路径",打开方式 );
//4.读数据
//四种方式读取
#include<string>

//void t() {
//	ofstream ofs;
//	ofs.open("test.txt", ios::out);
//	ofs << "快乐捞徐"<<endl;
//	ofs << "快乐捞峰"<<endl;
//	ofs << "快乐小学生"<<endl;
//	ofs.close();
//
//}
//void t1() {
//	ifstream ifs;
//	ifs.open("test.txt", ios::in);
//	if (!ifs.is_open())//判断文件是否打开成功，打开成功返回true
//	{
//		cout<<"文件打开失败" << endl;
//		return;
//	}
//	//四种读取方式
//	//1.
//	/*char a[1024] = { 0 };
//	while (ifs >> a)
//	{
//		cout << a << endl;
//	}*/
//	//2.
//	/*char a[1024] = { 0 };
//	while (ifs.getline(a,sizeof(a)))
//	{
//		cout << a << endl;
//	}*/
//	//3.
//	string a;
//	while (getline(ifs, a))
//	{
//		cout << a << endl;
//	}
//	//4.不太推荐用，一个一个字符读,效率低
//	//char c;
//	//while ((c = ifs.get()) != EOF)//EOF =end of file  是文件尾的标识
//	//{
//	//	cout << c;
//	//}
//
//}
//int main() {
//	//t();
//	t1();
//	system("pause");
//	return 0;
//}

////二进制文件。最好用char，不要用string，会出现错误。底层是c语言写的
//class Person {
//public:
//	char m_Name[64];
//	int m_Age;
//
//};
////写文件
//void t() {
//	ofstream ofs("person.txt", ios::out | ios::binary);
//	Person p = { "捞徐",18};
//	ofs.write((const char*)&p, sizeof(Person));
//
//	ofs.close();
//
//}
////读文件
//void t1() {
//	ifstream ifs("person.txt", ios::in | ios::binary);
//	
//	if (!ifs.is_open())
//	{
//		cout << "文件打开失败" << endl;
//		return;
//	}
//	Person p;
//
//	ifs.read((char*)& p, sizeof(Person));
//	cout << "姓名：" << p.m_Name << "年龄：" << p.m_Age << endl;
//	ifs.close();
//}
//int main() {
//	//t();
//	t1();
//	system("pause");
//	return 0;
//}


//模板
//语法template<typename T>
//template<typename T>
//void Swap(T& a, T& b)
//{
//	T temp = a;
//	a = b;
//	b = temp;
//}
//
//int main() {
//	int a = 2;
//	int b = 20;
//
//	//自动类型推导
//	//Swap(a, b);
//	//显示指定类型
//	Swap<int>(a, b);
//	cout << a<<b<< endl;
//	system("pause");
//	return 0;
//}
//template<class T>
//void mySwap(T& a, T& b)
//{
//	T temp = a;
//	a = b;
//	b = temp;
//}
//template<class T>
//void myprint(T arr[], int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		cout << arr[i];
//
//	}
//}
//template<class T>
//void mySort(T arr[], int len)
//{
//	
//	for (int i = 0; i < len; i++)
//	{
//		int max = i;
//		for (int  j= i+1;   j< len;  j++)
//		{
//			
//			if (arr[max] < arr[j])
//			{
//				max = j;
//			}
//		}
//		if (max != i)
//		{
//			mySwap(arr[i], arr[max]);
//		}
//	}
//
//
//}
//
//void test01() {
//	char array[] = "sefqav";
//	int num = strlen(array);
//	cout << num;
//	mySort(array, num);
//	myprint(array, num);
//
//}
//void test02()
//{
//	int array[6] = { 5, 36, 8, 7, 4, 5 };
//
//
//	mySort(array, 6);
//	myprint(array, 6);
//}
//int main()
//{
//
//	test01();
//	test02();
//	return 0;
//	system("pause");
//}
//普通函数和函数模板的区别
//普通函数可以发生隐式转换 比如需要的参数是int，但传的是char类型，函数也能正常运行，因为ascall码
//函数模板用自动类型推导不能发生隐式转换，但用显示指定类型可以发生隐式转换

//普通函数和函数模板的调用规则
//1.如果函数模板和普通函数都可以实现，优先调用普通函数
//2.可以通过空模板参数列表来强制调用函数模板

//void t(int a, int b) {
//	cout << "普通函数" << endl;
//}
//
//template<class T>
//void t(T a, T b) {
//	
//	cout << "函数模板" << endl;
//
//}
//int main()
//{
//	t(10, 10);
//	t<>(10, 10);//空模板调用
//	return 0;
//
//	system("pause");
//}
//3.函数模板也可以发生函数重载
//4.如果函数模板可以产生更好的匹配，优先调用函数模板。以上面的代码为例，假如要传的参数是char类型，则会调用函数模板，因为普通函数需要隐式转换才可以使用参数。

//模板的局限性
//对比两个数据大小的函数模板，不能比较结构体类型。但是可以用具体化的模板解决
//struct MyStruct
//{
//	int age;
//};
//template<class T>
//void t(T a)
//{
//
//}
//template<> void t(MyStruct a)//相当于扩展了函数模板的功能，用于处理结构体的特殊情况
//{
//
//}
//
//int main()
//{
//	return 0;
//}


//类模板
//#include<string>
//template<class NameType, class AgeType>
//class P
//{
//public:
//	P(NameType name,AgeType age) {
//		this->m_Age = age;
//		this->m_Name = name;
//	}
//	NameType m_Name;
//	AgeType m_Age;
//};
//int main()
//{
//	P<string,int> a("asda", 4);
//	return 0;
//	system("pause");
//
//}


//类模板和函数模板的区别
//1.类模板没有自动类型推导的使用方式,最新版本支持
//2.类模板在模板参数中可以有默认参数，函数模板最新版本支持



//类模板中成员函数创建时机
//普通类中的成员函数在一开始就可以创建
//类模板中的成员函数在调用时才创建


//类模板对象做函数参数
//
//
//#include<string>
//template<class T,class T1>
//class P {
//
//public:
//	P(T n, T1 a)
//	{
//		this->m_Age = a;
//		this->m_Name = n;
//	}
//	T m_Name;
//	T1 m_Age;
//
//};
////1.指定传入的类型 --直接显示对象的数据类型
//void t1(P<string,int>&p) {
//	cout << p.m_Age << p.m_Name;
//}
//void test1() {
//
//	P<string, int> p("1",1);
//	t1(p);
//}
//
////2.参数模板化   --将对象中的参数变为模板进行传递
//template<class T,class T1>
//void t2(P<T, T1>& p)
//{
//	cout << p.m_Age << p.m_Name;
//}
//void test2()
//{
//	P<string, int> p("2", 2);
//	t2(p);
//}
//
////3.整个类模板化   --将这个对象类型模板化进行传递
//template<class T>
//void t3(T & p)
//{
//	cout << p.m_Age << p.m_Name;
//}
//
//void test3() {
//	P<string, int> p("3", 3);
//	t3(p);
//}
//int main()
//{
//	test1();
//	test2();
//	test3();
//	return 0;
//	system("pause");
//}


//类模板与继承,父类是模板，子类在继承中必须指定继承的类型

//template<class T>
//class P {
//public:
//	T a;
//    
//};
//
//class p1 :public P<int> {//将父类中继承的类型定为int
//
//
//};
//template<class T,class T2>//T2用于指定从父类中继承的类型
//class p2:public P<T2>{
//
//	T a1;
//};


//类模板成员函数的类外实现
//
//template<class T>
//class MyClass
//{
//public:
//	T a;
//	MyClass(T A);
//	
//
//private:
//
//};
////构造函数类外实现
//template<class T>
//MyClass<T>::MyClass(T A)
//{
//	this->a = A;
//}

//类模板分文件编写 //以及解决无法调用类模板的方法
//template<class T>
//class Person {
//public:
//
//	Person(T b);
//	T a;
//
//};
//template<class T>
//Person<T>::Person(T b)
//{
//
//
//}

//#include"person.cpp"//第一种解决办法，包含cpp文件，让主函数得到函数实现的信息
//第二种解决方法，将.h和.cpp中的内容写在一起，将后缀名改为.hpp
//#include"person.hpp"
//int main() {
//
//	Person<string> p("a");
//	return 0;
//	system("pause");
//
//}


////类模板与友元
//#include<string>
//
//template<class T>
//class P;
////类外实现
//template<class T>
// void PP(P<T> p)
//{
//	cout << p.b;
//}
//
//
//template<class T>
//class P {
//
//public:
//	P(T a)
//	{
//		this->b = a;
//	}
//	
//	//全局函数，类内实现
//	friend void Person(P<T> p)
//	{
//		cout << p.b;
//	}
//	//类外实现,需要让编译器提前知道他的存在
//	friend void PP<>(P<T> p);
//private:
//	T b;
//};
//void t() {
//	P<string> p("快乐");
//	//Person(p);
//	PP(p);
//}
//
//int main()
//{
//	t();
//	
//	return 0;
//	system("pause");
//}


//STL
//STL分为六大组件，分别是容器，算法，迭代器，仿函数，适配器，空间配置器。

//容器：将一些广泛运用的数据结构实现出来：数组，链表，队列，集合等
//容器分为序列式容器：强调值的排序，序列式容器中的每个元素均有固定的位置
//关联式容器：二叉树结构，各元素没有严格的物理上的顺序关系

//算法：问题之解法
//分为质变算法：是指运算过程期间会更改区间内的元素的内容，例如拷贝，替换，删除等等.
//和非质变算法：与质变算法相反

//迭代器：容器与算法之间的粘合剂。常用的是双向迭代器和随机访问迭代器

//遍历方法

//#include <vector>
//#include<algorithm>
//void p(int val) {
//	cout<<val<<endl;
//}
//void test()
//{
//	vector<int> v;//创建vector容器
//	//向容器中插入数据
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	////通过迭代器访问容器中的元素
//	//vector<int>::iterator itBegin = v.begin();//起始迭代器
//	//vector<int>::iterator itEnd = v.end();//结束迭代器
//	////第一种遍历方式
//	//while (itBegin!=itEnd)
//	//{
//	//	cout << *itBegin << endl;
//	//	itBegin++;
//	//}
//	//第二种遍历方式
//	for (vector<int>::iterator itBegin = v.begin() ;  itBegin!= v.end(); itBegin++)
//	{
//		cout << *itBegin << endl;
//	}
//	//第三种遍历方式
//	for_each(v.begin(), v.end(),p);
//}
//
//int main()
//{
//	test();
//
//	return 0;
//
//}
// 

//vector容器嵌套容器

//#include<vector>
//#include<algorithm>
//
//void test()
//{
//	vector<vector<int>> v;
//	vector<int>v1;
//	vector<int>v2;
//	vector<int>v3;
//	vector<int>v4;
//
//	for (size_t i = 0; i <4; i++)
//	{
//		v1.push_back(i + 1);
//		v2.push_back(i + 2);
//		v3.push_back(i + 3);
//		v4.push_back(i + 4);
//	}
//	v.push_back(v1);
//	v.push_back(v2); 
//	v.push_back(v3);
//	v.push_back(v4);
//	for (vector< vector<int>>::iterator it=v.begin();  it!= v.end(); it++)
//	{
//		for (vector<int>::iterator its = (*it).begin(); its != (*it).end(); its++)
//		{
//			cout<<*its<<" ";
//		}
//		cout << endl;
//	}
//
//}
//
//int main()
//{
//	test();
//
//	system("pause");
//	return 0;
//}

//string基本概念
//本质上是一个类，和char*的区别，char*是指针，string是一个类，类内封装了char*，管理这个字符串，是一个char*型的容器
//封装了很多方便的方法

//string的构造函数
//string()创建一个空字符串
//string(const char* s)使用字符串s初始化
//string(const string& str);使用一个string对象初始化另一个string对象
//string(int n,char c);使用n个字符c初始化
//#include<string>
//void test()
//{
//	string s1;
//	const char* str = "hello world";
//	string s2(str);
//	cout << s2 << endl;
//	string s3(s2);
//	string s4('a', 10);
//}
//
//int main()
//{
//	test();
//
//	return 0;
//
//}

//string 赋值操作

//void test()
//{
//	string str1 = "hello world";
//	cout << str1 << endl;
//
//	string str2 = str1;
//	cout << str2 << endl;
// 
//	//不能直接string str3 = 'a',会报错，大概是没有对应的构造函数
//	string str3;
//	str3 = 'a';
//	cout << str3 << endl;
// 
//	string str4;
//	str4.assign("asdasd");
//	cout << str4 << endl;
// 
//	string str5;
//	str5.assign("aabbccdd", 5);//前n个字符
//	cout << str5 << endl;
// 
//	string str6;
//	str6.assign(str5);
//	cout << str6 << endl;
// 
//	string str7;
//	str7.assign(10, 'w');
//	cout << str7 << endl;
//}
//
//int main()
//{
//	test();
//	return 0;
//}


//string字符串拼接

//void test() {
//	string str1 = "我";//运算符重载
//	str1 += "爱玩游戏";
//	string str2 = "Lol dnf";
//		str1 += str2;
//	cout << str1 << endl;
//
//	string str3 = "I";
//	str3.append(" love");
//		cout << str3 << endl;
//   str3.append("game abcde", 4);
//      cout << str3 << endl;
//
//	  str3.append(str2,3,3);//截取对应位置，第二个参数为开始位置。第三个参数为截取个数
//	  cout <<  str3 << endl;
//}
//
//int main() {
//
//	test();
//	return 0;
//}

//string查找和替换
//int find(const string& str, int pos = 0) const; //查找str第一次出现位置,从pos开始查找
//int find(const char* s, int pos = 0) const; //查找s第一次出现位置,从pos开始查找
//int find(const char* s, int pos, int n) const; //从pos位置查找s的前n个字符第一次位置
//int find(const char c, int pos = 0) const; //查找字符c第一次出现位置
//int rfind(const string& str, int pos = npos) const; //查找str最后一次位置,从pos开始查找
//int rfind(const char* s, int pos = npos) const; //查找s最后一次出现位置,从pos开始查找
//int rfind(const char* s, int pos, int n) const; //从pos查找s的前n个字符最后一次位置
//int rfind(const char c, int pos = 0) const; //查找字符c最后一次出现位置
//string& replace(int pos, int n, const string& str); //替换从pos开始n个字符为字符串str
//string& replace(int pos, int n, const char* s); //替换从pos开始的n个字符为字符串s
//void test() {
//	string str1 = "abcdefghde";
//	//查找
//	int pos = str1.find("de");//不存在则返回-1，存在则返回下标
//	cout << pos << endl;
//	cout << str1.rfind("de") << endl;
//	cout << str1.find("df", 7, 1) << endl;
//
//}
//void test2() {
//	string str1 = "abcdefghde";
//	str1.replace(1, 3, "1111");//从一号位置起3个字符替换为1111
//	cout << str1 << endl;
//
//}
//
//int main()
//{
//	test2();
//
//	//test();
//	return 0;
//	 }


//字符串比较

//void test()
//{
//	string str1 = "hello";
//	string str2 = "hello";
//	if (str1.compare(str2)==0)//相等返回0,一遇到不同的(1个字母)字母就返回，如果str1>str2返回1，反之返回-1
//	{
//
//	}
//}


//string字符存取

//void test()
//{
//	string str = "hello";
//	//通过[]访问单个字符。
//	for (int i = 0; i < str.size(); i++) {
//		cout << str[i] << " ";
//
//	}
//	//改变单个字符,也可以用at进行访问修改
//	str[0] = 'p';
//	cout << endl;
//	//通过at方式访问单个字符。
//	for (int i = 0; i < str.size(); i++) {
//		cout << str.at(i) << " ";
//
//	}
//	cout << endl;
//
//}
//
//int main() {
//	test();
//
//	system("pause");
//	return 0;
//}

//string插入和删除

//string& insert(int pos, const char* s); //插入字符串
//string& insert(int pos, const string& str); //插入字符串
//string& insert(int pos, int n, char c); //在指定位置插入n个字符c
//string& erase(int pos, int n = npos); //删除从Pos开始的n个字符


//void test()
//{
//	string str = "hello";
//	str.insert(1, "111");
//
//	cout << str << endl;
//	str.erase(1, 3);
//	cout << str << endl;
//	str.insert(1, 4, 'c');
//	cout << str << endl;
//
//}
//
//int main() {
//	test();
//
//	system("pause");
//	return 0;
//}


//string子串

//string substr(int pos = 0, int n = npos) const; //返回由pos开始的n个字符组成的字符串


//void test()
//{
//	string str = "abcdef";
//	string subStr = str.substr(1, 3);
//	cout << subStr << endl;
//
//	//应用场景，获取@前面的用户信息
//	string email = "hello@sina.com";
//	int pos = email.find("@");
//	string username = email.substr(0, pos);
//	cout << "username: " << username << endl; 
//
//}
//int main() {
//	system("pause");
//	test();
//	return 0;
//}
#include<vector>
//vector容器，动态的数组，单端数组
//构造函数
//vector<T> v; //采用模板实现类实现，默认构造函数
//vector(v.begin(), v.end()); //将v[begin(), end())区间中的元素拷贝给本身。
//vector(n, elem); //构造函数将n个elem拷贝给本身。
//vector(const vector& vec); //拷贝构造函数。
// 
// 
//void print(vector<int> v1) 
//{
//	for (vector<int> ::iterator it = v1.begin(); it != v1.end(); it++)
//	{
//		cout << *it;
//	}
//	cout << endl;
//}
//
//
//void test()
//{
//	vector<int>v1;//无参构造
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//	print(v1);
//
//	vector<int>v2(v1.begin(), v1.end());//通过区间方式进行构造
//	print(v2);
//
//	vector<int>v3(10, 100);//10个100
//	print(v3);
//
//	vector<int>v4(v3);//拷贝构造
//	print(v4);
//}
//
//int main() {
//	test();
//
//	system("pause");
//	return 0;
//}

//vector赋值操作

//vector& operator=(const vector& vec); //重载等号操作符
//assign(beg, end); //将[beg, end)区间中的数据拷贝赋值给本身。
//assign(n, elem); //将n个elem拷贝赋值给本身。
//void print(vector<int> v)
//{
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it;
//	}
//	cout << endl;
//}
//
//void test()
//{
//	vector<int> v1;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//	print(v1);
//	//赋值 operator=
//	vector<int> v2;
//	v2 = v1;
//	print(v2);
//	vector<int> v3;
//	v3.assign(v1.begin(), v2.end());//将[beg, end)区间中的数据拷贝赋值给本身。
//	print(v3);
//	vector<int> v4;//将n个elem拷贝赋值给本身。
//	v3.assign(10, 100);
//}
//
//int main() {
//	test();
//
//	system("pause");
//	return 0;
//}



//vector容量和大小的操作

//empty(); //判断容器是否为空.空返回1
//capacity(); //容器的容量
//size(); //返回容器中元素的个数
//resize(int num); //重新指定容器的长度为num，若容器变长，则以默认值填充新位置。
////如果容器变短，则末尾超出容器长度的元素被删除。
//resize(int num, elem); //重新指定容器的长度为num，若容器变长，则以elem值填充新位置。
////如果容器变短，则末尾超出容器长度的元素被删除
//void print(vector<int> v) {
//
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it;
//	}
//	cout << endl;
//
//}
//
//
//void test()
//{
//	vector<int> v(10, 1);
//	cout << v.empty() << " " << v.capacity()<<" " << v.size() << endl;
//	print(v);
//	v.resize(15, 0);
//	
//	cout << v.empty() << " " << v.capacity() << " " << v.size() << endl;
//	print(v);
//	v.resize(5);
//	cout << v.empty() << " " << v.capacity() << " " << v.size() << endl;
//	print(v);
//}
//
//int main() {
//	test();
//
//	system("pause");
//	return 0;
//}


//vector插入和删除

//push_back(ele); //尾部插入元素ele
//pop_back(); //删除最后一个元素
//insert(const_iterator pos, ele); //迭代器指向位置pos插入元素ele
//insert(const_iterator pos, int count, ele); //迭代器指向位置pos插入count个元素ele
//erase(const_iterator pos); //删除迭代器指向的元素
//erase(const_iterator start, const_iterator end); //删除迭代器从start到end之间的元素
//clear(); //删除容器中所有元素
//void print(vector<int> &v)
//{
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it<<" ";
//
//
//	}
//	cout << endl;
//}
//void test()
//{
//	vector<int> v(5, 0);
//	v.push_back(1);
//	v.push_back(2);
//	v.push_back(3);
//	v.push_back(4);
//	v.insert(v.begin(), 80);
//	print(v);
//	v.insert(v.begin(), 5, 7);
//	print(v);
//	v.erase(v.begin());
//	print(v);
//	v.erase(v.begin() + 1, v.begin() + 3);
//	print(v);
//
//	v.clear();
//	print(v);
//
//}
//int main() {
//	test();
//
//	system("pause");
//	return 0;
//}


//vector数据存取

//at(int idx); //返回索引idx所指的数据
//operator[]; //返回索引idx所指的数据
//front(); //返回容器中第一个数据元素
//back(); //返回容器中最后一个数据元素



void test()
{

}

int main() {
	test();

	system("pause");
	return 0;
}

//void test()
//{
//
//}
//
//int main() {
//	test();
//
//	system("pause");
//	return 0;
//}

