#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

//class p {
//public:
//	int* m_age;//在堆区开辟空间
//	p() {
//		cout << "构造函数" << endl;
//	}
//	~p()
//	{
//		delete m_age;//释放堆空间
//		cout << "析构函数" << endl;
//	}
//	//p(const p& a)
//	//{
//	// this.m_age=p.m_age;
//	//	cout << "浅拷贝构造函数" << endl;
//	//}
//	//p(const p& a) {//深拷贝函数
//	//	
//	//	this->m_age = new int(*a.m_age);
//	//}
//};
//
//
//p t() {
//	p a;
//	return a;
//}
//void test01() {
//	p a1 = t();
//
//}
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}
//class Penson {
//
//public:
//	Penson(int a,int b,int c): ma(a),mb(b),mc(c)
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


//*this返回对象的注意事项
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
////void t() {
////	P a;
////	a.a = 10;
////	P b;
////	b.a = 10;
////	a.kkk(b).kkk(b);
////}
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
//	void func() const//常函数。相当于常量指针，指向的值不能修改。
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
//	const P a;//相当于常量指针，只能调用常函数,普通函数可以修改属性，但常对象指向的值不能修改
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