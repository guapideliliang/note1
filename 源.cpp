
#include<iostream>
using namespace std;

//ǳ������ָ�򵥵ظ��ƶ�������ݳ�Ա��ֵ������ָ�����͵ĳ�Ա����������ζ���¶����ԭʼ���󽫹�����ͬ���ڴ��ַ����һ�������޸��˹������Դʱ����һ������Ҳ���ܵ�Ӱ�졣����ܻᵼ��Ǳ�ڵĴ���Ͳ���Ԥ�����Ϊ�������ظ��ͷ��ڴ棬���ڹ����ڴ棬ÿ�������������������һ��
//�����ָ����һ���µĶ��󣬲�����ԭʼ������������ݳ�Ա��ֵ������ָ�����͵ĳ�Ա����������ָ�����͵ĳ�Ա�����������������µ��ڴ�ռ䣬����ԭʼ����ָ����ָ������ݸ��Ƶ��µ��ڴ�ռ��С��������¶����ԭʼ�����ӵ�ж������ڴ�ռ䣬�޸�һ�����󲻻�Ӱ�쵽��һ������
//class MyClass {
//public:
//    int* data;
//
//    // ���캯��
//    MyClass(int value) {
//        data = new int;
//        *data = value;
//    }
//
//    // �������캯�� - ǳ����
//    MyClass(const MyClass& other) {
//        data = other.data;  // �򵥵ظ���ָ���ֵ
//    }
//
//    // ������캯�� - ���
//    MyClass(const MyClass& other) {
//        data = new int;
//        *data = *(other.data);  // ����ָ����ָ�������
//    }
//
//    // ��������
//    ~MyClass() {
//        delete data;  // �ͷŶ�̬������ڴ�
//    }
//};
//
//int main() {
//    MyClass obj1(10);
//    MyClass obj2 = obj1;  // ʹ�ÿ������캯�����и�ֵ
//
//    // �޸� obj1 �����ݳ�Ա
//    *(obj1.data) = 20;
//
//    // ��� obj2 �����ݳ�Ա
//    std::cout << *(obj2.data) << std::endl;  // ��Ϊǳ������������Ϊ 20����Ϊ�����������Ϊ 10
//
//    return 0;
//}
// ������ʾ���У�MyClass ��ʹ����ǳ������������ַ�ʽ���ж����ơ���ʹ��ǳ�������� obj1 �� obj2 ������ͬ���ڴ��ַ���޸� obj1 �����ݻ�Ӱ�쵽 obj2������ʹ��������� obj1 �� obj2 ӵ�ж������ڴ�ռ䣬�޸�һ�����󲻻�Ӱ�쵽��һ������
// 



//class Penson {
//
//public:
//	Penson(int a,int b,int c): ma(a),mb(b),mc(c)//���캯����ֵ����ʼ���б�
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

//class P {//��Ա�����ͳ�Ա����(��������)�ֿ��洢����̬����������������ϵ�
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


// *this���ض������ע������
// thisָ��ָ�򱻵��õĳ�Ա���������Ķ���
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



//class P//������ͳ�����
//{
//public:
//	int m_a;
//	mutable int m_b;//���ӳ������ͳ����������
//	//this������ָ�볣������ʽΪP*const this ָ��ָ���޸�
//	
//	void func() const//�������ڲ������޸ĳ�Ա���ԡ��൱�ڳ���ָ�룬ָ���ֵ�����޸ġ�
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
//	const P a;//�൱�ڳ���ָ�룬ֻ�ܵ��ó���������Ϊ��ͨ���������޸����ԣ���������ָ���ֵ�����޸ģ����Բ��ܵ�����ͨ����
//	a.func();
//	a.fun();
//	a.m_a = 10;
//	a.m_b = 10;
//	system("pause");
//	return 0;
//}


//��Ԫ���÷����ڵĶ�����������˽�г�Ա


//P::P() {
//
//}//����д����


//class P1 {
//	P* p;
//	void func();
//};
//
//void P1::func() {
//	p->b = 10;//������Ԫ������
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
//	friend void c();//ȫ�ֺ�������Ԫ
//	friend class P1;//������Ԫ
//	friend void p2::a();//��Ա��������Ԫ.ע��p2����������Pǰ�棬���򱨴�����������P��
//public:
//	int a;
//	P();
//private:
//	int b;
//};




//�ӷ����������
//class P
//{
//public:
//	int m_a;
//	int m_b;
//
//	P operator+(P& a)//��Ա�������Ӻ����������,ȫ�ֺ���Ҳ���ԣ���Ҫ������������������������
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



//<<���������
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
//ostream& operator<<(ostream &cout,P &p) {//ȫ�ֺ����������������<<�����أ�����ʵ���Զ���������͡�
//
//	cout << "m_a=" << p.m_a<< "m_b=" << p.m_b;
//	return cout;
//}
//
//void t() {
//	P p(10,10);
//
//	cout<<p<<endl;//��ʽ���˼��cout<<p������һ��cout��Ȼ��cout<<endl.����ϵͳԭʼ���cout<<a<<b<<c<<endl,
//	//������ʽ���˼�룬cout�ȵ��ô�ӡa�ĺ������������ؽ�����ٵ��ô�ӡb�ĺ������������ơ�
//	//��ӡa�������صĽ��Ӧ�þ���cout����ʱa�Ѿ���ӡ�����ˣ����ص�cout�ٵ��ô�ӡb�ĺ������ٷ���cout����c��
//}
//
//int main() {
//
//	t();
//	system("pause");
//	return 0;
//}

////++���������
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
//P operator++(P& a,int ) {//ֻ����intռλ����������ǰ��++�ͺ���++
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

////��ֵ���������,�����ǳ�Ա������������ȫ��
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
//ostream& operator << (ostream & out, P &p)//������&p������ᴴ���µĸ������ø���*m_age�õĻ��Ǵ������Ķѵĵ�ַ��
////���Ǹø�������������ֻ����ostream& operator<<�����У����������ͻ��ͷ�*m_age���������������������void t()�У����Ե������������ڽ����󣬻ᵼ�¶����ͷ�*m_age���Ӷ�����
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

//��ϵ��������أ�����������������أ�ֻ���ó�Ա����ʵ��

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
//	int operator()(int a) {//�����������������
//
//		cout << "��������" << endl;
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
//		cout<<"p1��p2���" << endl;
//	}
//	if(p1==p3)
//	{
//		cout << "p1��p3���" << endl;
//	}
//	cout<<P()(10)<<endl;//��������
//}
//
//int main()
//{
//	t();
//	system("pause");
//	return 0;
//}


//���ּ̳з�ʽ��ע�⣺�������ּ̳ж����ܷ��ʸ���˽��Ȩ�޵�����
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
//class P1: public Person//�����̳�
//{
//public:
//	void func() {
//		a = 10;//�������ǹ���Ȩ�ޣ�����������Ȼ�ǹ���Ȩ��
//		b = 10;//�������Ǳ���Ȩ�ޣ�����������Ȼ�Ǳ���Ȩ��
//		//c = 10;//�����е�˽��Ȩ�ޣ������޷�����
//
//	}
//};
//
//class P2 : protected Person//�����̳�
//{
//public:
//	void func() {//��Ϊ����Ȩ�ޣ������޷�����
//		a = 10;
//		b = 10;
//		//c = 10;
//
//	}
//};
//
//class P3 : private Person//˽�м̳�
//{
//public:
//	void func() {//��Ϊ˽��Ȩ�ޣ������޷�����
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
//		//a = 10;//�޷�����
//	}
//};
//void t() {
//	P1 p;
//	p.a = 10;//����Ȩ�ޣ�������Է���
//	//p.b = 10;//����Ȩ�ޣ������޷�����
//	P2 b;
//	//b.a = 10;//����Ȩ�ޣ������޷�����
//		//b.b = 10;//����Ȩ�ޣ������޷�����
//	P3 c;
//	//b.a = 10;//˽��Ȩ�ޣ������޷�����
//	//b.b = 10;//˽��Ȩ�ޣ������޷�����
//}


//�̳��еĶ���ģ��
//��������ȴ��������Һ���ʧ
//class P {
//public:
//
//	P() {
//		m_a = 10;
//		cout << "P�Ĺ��캯��" << endl;
//	}
//	~P() {
//		cout << "P����������" << endl;
//	}
//	void func() {
//		cout << "����" << endl;
//	}
//	void func(int a) {
//		cout << "���������" << endl;
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
//		cout << "P1�Ĺ��캯��" << endl;
//	}
//	void func() {
//		cout << "����" << endl;
//	}
//	
//	~P1() {
//		cout << "P1����������" << endl;
//	}
//	int m_d;
//	int m_a;
//
//};
//
//void test1() {
//
//	cout << "P1�Ĵ�СΪ��" << sizeof(P1) << endl;//��������������(���˾�̬��Ա)�����̳��ˣ�ֻ��˽��Ȩ�޵����ԣ����ܷ��ʶ��ѣ����Ǳ��̳��ˣ�ռ���˿ռ�
//}
//
//void test2() {
//	P1 p;
//	cout << p.m_a << p.P::m_a << endl;//ͬ����Ա���������Ҫ��������
//	p.func();
//	//p.func(100);//���ܰ�����͸����е�ͬ����������ͬ�ĺ�����Ϊ�໥���ء����ǵü���������
//	p.P::func(100);
//	p.P::func();//����ͬ�������ͷ���ͬ������һ��Ҫ��������
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

////���ุ��ͬ����̬��Ա����
//class P {
//
//public:
//	int static m_a;
//	void static fun() {
//		cout << "����" << endl;
//	}
//};
//int P::m_a = 100;
//
//class P1:public P {
//public:
//	int static m_a;
//	void static fun() {
//		cout << "����" << endl;
//	}
//};
//int P1::m_a = 10;
//
//void test() {
//	P1 p1;
//	cout << p1.m_a << p1.P::m_a << endl;//�ͷǾ�̬��Ա����һ��������ͨ����������������
//	cout << P1::m_a << P::m_a <<P1::P::m_a<< endl;//�ڶ��͵������һ��
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

////��̳�
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
//	cout << p.m_a << p.P1::m_a << p.P::m_a << sizeof(p)<<endl;//���ײ������ʴ������⣬һ�㿪���в�ʹ��
//}
//
//int main() {
//	test();
//	system("pause");
//	return 0;
//}

//���μ̳У���ʯ�̳У�

//class P1 {
//public:
//	int m_a;
//};
//
//class P2 :virtual public P1{//����virtual
//
//};
//
//class P3 :virtual public P1{//����virtual,���Խ�����μ̳е����⣬���ּ̳н���̳�
//
//};
//
//class P :public P2, public P3//�������⣬P��̳�����m_a
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
//	p.m_a = 38;//������̳лᱨ��
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
////��̬��1.�ɶ���ǿ��������֯�߼�������
// //���������غ���������������ھ�̬��̬����������麯��ʵʱ�����Ƕ�̬��̬
//class P {
//
//public:
//	void virtual fun()//����virtualִ�еľ��������fun����Ϊ��̬��̬������ִ�е��Ǹ����fun��
// //��ͨ�����ǲ�ռ�����ڿռ�ģ������麯����������ָ���麯�����ָ�루ռ�����ڿռ䣬��СΪ4������ʱָ��ָ����麯��������Ÿ����fun�����ĵ�ַ
//	{
//		cout << "����" << endl;
//	}
//};
//class P1:public P
//{
//public:
//	void fun() {//������д�����fun������ʵ��������Ҳ�̳����麯����������д���麯�����ָ�룬ָ����Ǵ������fun�����ĵ�ַ���麯�����Ǹ����˼̳еģ���û���޸ĸ�����麯��ָ��
//		cout<<"����" << endl;
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


////��̬�����ã�������.����������󿪱�ԭ�򣺶���չ���ţ����޸Ĺرա�
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

////���麯���ͳ�����  ���麯���﷨ virtual ����ֵ���� ������ (�����б�) 
////���������˴��麯��������Ϊ�����࣬�ص㣺�޷�ʵ�����������������д���麯������ȻҲ�ǳ�����
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
//		cout << "��ˮ" << endl;
//	}
//	virtual void Brew() {
//		cout << "���ݿ���" << endl;
//	}
//	void addToCup() {
//		cout << "���뱭��" << endl;
//	}
//	virtual void addIngredients() {
//		cout << "���Ǻ�ţ��" << endl;
//	}
//};
//
//class Tea :public makeDrinks {
//
//	void boilWater() {
//		cout << "���Ȫˮ" << endl;
//	}
//	virtual void Brew() {
//		cout << "���ݲ�Ҷ" << endl;
//	}
//	void addToCup() {
//		cout << "��������" << endl;
//	}
//	virtual void addIngredients() {
//		cout << "������" << endl;
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

////�������ʹ�������
//class Animal {
//public:
//	Animal() {
//		cout << "Animal���캯��" << endl;
//	}
//	/*virtual ~Animal()//����������Ҫ����Ҳ��Ҫʵ�֣����˴������������Ҳ���ڳ�������,ǿ�������ṩ�Լ����鹹������
//	{
//		cout << "Animal����������" << endl;
//	}*/
//	virtual ~Animal() = 0;
//};
//Animal::~Animal() {//���������������������ݣ�ֻ��������ʵ�֣�û�����ݴ��������ᱨ��
//	cout << "������������" << endl;
//}
//
//class Cat :public Animal {
//public:
//	Cat() {
//		cout << "Cat���캯��" << endl;
//		m_A = new int(10);
//	}
//	~Cat()
//	{
//		delete m_A;
//		cout << "Cat��������" << endl;
//	}
//	int*m_A;
//
//};
//
//void t() {
//	Animal* a = new Cat;
//	//����ָ����������ʱ�򲻻����������鹹���������£���������Ķ����ڴ治���ͷţ������ڴ�й¶
//	//����취���������������������������������ں�����ǰ���virtual�������������Ż�������������������
//	delete a;
//}
//
//int main() {
//	t();
//
//	system("pause");
//	return 0;
//}

//�ļ�����
#include<fstream>
//����ͷ�ļ�<fstream>
//
//�ļ����ͷ�Ϊ����
//�ı��ļ� : �ļ����ı���ascall����ʽ�洢�ڼ������
//�������ļ����ļ����ı��Ķ�������ʽ�洢�ڼ�����У��û�һ�㲻��ֱ�Ӷ�������
//
//
//�����ļ��������ࣺ
//1.ofstream��д���� oָ����out�����ڱ�������˵�����ļ�д���ݣ���������Ĺ��̣�������out
//2.ifstream�������� iָ����in�����ڱ�������˵�����ļ��ж�ȡ���ݣ����Ǵ��ļ���������������ݵĹ��̣�������in
//3.fstream����д�����������������ֹ���
//
//д�ļ����裺
//1.����ͷ�ļ�
//2.����������
//ofstream ofs��
//3.���ļ�
//ofs open��"�ļ�·��"���򿪷�ʽ��
//����Ҳ����ļ������ڵ�ǰĿ¼�´����ļ���
//�򿪷�ʽ��
//ios::in   Ϊ���ļ������ļ�
//ios::out   Ϊд�ļ������ļ�
//ios::ate   ��ʼλ�ã��ļ�β
//ios::app    ׷�ӷ�ʽд�ļ�
//ios::trunc  ����ļ�������ɾ�����ٴ���
//ios::binary  �����Ʒ�ʽ
//4.д����
//ofs << "д�������";
//5.�ر��ļ�
//ofs.close()
//
//
//���ļ����裺
//1.2.5����д�ļ�һ��
//3.���ļ����ж��ļ��Ƿ�򿪳ɹ�
//ifs.open("�ļ�·��",�򿪷�ʽ );
//4.������
//���ַ�ʽ��ȡ
#include<string>

//void t() {
//	ofstream ofs;
//	ofs.open("test.txt", ios::out);
//	ofs << "��������"<<endl;
//	ofs << "�����̷�"<<endl;
//	ofs << "����Сѧ��"<<endl;
//	ofs.close();
//
//}
//void t1() {
//	ifstream ifs;
//	ifs.open("test.txt", ios::in);
//	if (!ifs.is_open())//�ж��ļ��Ƿ�򿪳ɹ����򿪳ɹ�����true
//	{
//		cout<<"�ļ���ʧ��" << endl;
//		return;
//	}
//	//���ֶ�ȡ��ʽ
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
//	//4.��̫�Ƽ��ã�һ��һ���ַ���,Ч�ʵ�
//	//char c;
//	//while ((c = ifs.get()) != EOF)//EOF =end of file  ���ļ�β�ı�ʶ
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

////�������ļ��������char����Ҫ��string������ִ��󡣵ײ���c����д��
//class Person {
//public:
//	char m_Name[64];
//	int m_Age;
//
//};
////д�ļ�
//void t() {
//	ofstream ofs("person.txt", ios::out | ios::binary);
//	Person p = { "����",18};
//	ofs.write((const char*)&p, sizeof(Person));
//
//	ofs.close();
//
//}
////���ļ�
//void t1() {
//	ifstream ifs("person.txt", ios::in | ios::binary);
//	
//	if (!ifs.is_open())
//	{
//		cout << "�ļ���ʧ��" << endl;
//		return;
//	}
//	Person p;
//
//	ifs.read((char*)& p, sizeof(Person));
//	cout << "������" << p.m_Name << "���䣺" << p.m_Age << endl;
//	ifs.close();
//}
//int main() {
//	//t();
//	t1();
//	system("pause");
//	return 0;
//}


//ģ��
//�﷨template<typename T>
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
//	//�Զ������Ƶ�
//	//Swap(a, b);
//	//��ʾָ������
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
//��ͨ�����ͺ���ģ�������
//��ͨ�������Է�����ʽת�� ������Ҫ�Ĳ�����int����������char���ͣ�����Ҳ���������У���Ϊascall��
//����ģ�����Զ������Ƶ����ܷ�����ʽת����������ʾָ�����Ϳ��Է�����ʽת��

//��ͨ�����ͺ���ģ��ĵ��ù���
//1.�������ģ�����ͨ����������ʵ�֣����ȵ�����ͨ����
//2.����ͨ����ģ������б���ǿ�Ƶ��ú���ģ��

//void t(int a, int b) {
//	cout << "��ͨ����" << endl;
//}
//
//template<class T>
//void t(T a, T b) {
//	
//	cout << "����ģ��" << endl;
//
//}
//int main()
//{
//	t(10, 10);
//	t<>(10, 10);//��ģ�����
//	return 0;
//
//	system("pause");
//}
//3.����ģ��Ҳ���Է�����������
//4.�������ģ����Բ������õ�ƥ�䣬���ȵ��ú���ģ�塣������Ĵ���Ϊ��������Ҫ���Ĳ�����char���ͣ������ú���ģ�壬��Ϊ��ͨ������Ҫ��ʽת���ſ���ʹ�ò�����

//ģ��ľ�����
//�Ա��������ݴ�С�ĺ���ģ�壬���ܱȽϽṹ�����͡����ǿ����þ��廯��ģ����
//struct MyStruct
//{
//	int age;
//};
//template<class T>
//void t(T a)
//{
//
//}
//template<> void t(MyStruct a)//�൱����չ�˺���ģ��Ĺ��ܣ����ڴ���ṹ����������
//{
//
//}
//
//int main()
//{
//	return 0;
//}


//��ģ��
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


//��ģ��ͺ���ģ�������
//1.��ģ��û���Զ������Ƶ���ʹ�÷�ʽ,���°汾֧��
//2.��ģ����ģ������п�����Ĭ�ϲ���������ģ�����°汾֧��



//��ģ���г�Ա��������ʱ��
//��ͨ���еĳ�Ա������һ��ʼ�Ϳ��Դ���
//��ģ���еĳ�Ա�����ڵ���ʱ�Ŵ���


//��ģ���������������
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
////1.ָ����������� --ֱ����ʾ�������������
//void t1(P<string,int>&p) {
//	cout << p.m_Age << p.m_Name;
//}
//void test1() {
//
//	P<string, int> p("1",1);
//	t1(p);
//}
//
////2.����ģ�廯   --�������еĲ�����Ϊģ����д���
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
////3.������ģ�廯   --�������������ģ�廯���д���
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


//��ģ����̳�,������ģ�壬�����ڼ̳��б���ָ���̳е�����

//template<class T>
//class P {
//public:
//	T a;
//    
//};
//
//class p1 :public P<int> {//�������м̳е����Ͷ�Ϊint
//
//
//};
//template<class T,class T2>//T2����ָ���Ӹ����м̳е�����
//class p2:public P<T2>{
//
//	T a1;
//};


//��ģ���Ա����������ʵ��
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
////���캯������ʵ��
//template<class T>
//MyClass<T>::MyClass(T A)
//{
//	this->a = A;
//}

//��ģ����ļ���д //�Լ�����޷�������ģ��ķ���
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

//#include"person.cpp"//��һ�ֽ���취������cpp�ļ������������õ�����ʵ�ֵ���Ϣ
//�ڶ��ֽ����������.h��.cpp�е�����д��һ�𣬽���׺����Ϊ.hpp
//#include"person.hpp"
//int main() {
//
//	Person<string> p("a");
//	return 0;
//	system("pause");
//
//}


////��ģ������Ԫ
//#include<string>
//
//template<class T>
//class P;
////����ʵ��
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
//	//ȫ�ֺ���������ʵ��
//	friend void Person(P<T> p)
//	{
//		cout << p.b;
//	}
//	//����ʵ��,��Ҫ�ñ�������ǰ֪�����Ĵ���
//	friend void PP<>(P<T> p);
//private:
//	T b;
//};
//void t() {
//	P<string> p("����");
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
//STL��Ϊ����������ֱ����������㷨�����������º��������������ռ���������

//��������һЩ�㷺���õ����ݽṹʵ�ֳ��������飬�������У����ϵ�
//������Ϊ����ʽ������ǿ��ֵ����������ʽ�����е�ÿ��Ԫ�ؾ��й̶���λ��
//����ʽ�������������ṹ����Ԫ��û���ϸ�������ϵ�˳���ϵ

//�㷨������֮�ⷨ
//��Ϊ�ʱ��㷨����ָ��������ڼ����������ڵ�Ԫ�ص����ݣ����翽�����滻��ɾ���ȵ�.
//�ͷ��ʱ��㷨�����ʱ��㷨�෴

//���������������㷨֮���ճ�ϼ������õ���˫���������������ʵ�����

//��������

//#include <vector>
//#include<algorithm>
//void p(int val) {
//	cout<<val<<endl;
//}
//void test()
//{
//	vector<int> v;//����vector����
//	//�������в�������
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	////ͨ�����������������е�Ԫ��
//	//vector<int>::iterator itBegin = v.begin();//��ʼ������
//	//vector<int>::iterator itEnd = v.end();//����������
//	////��һ�ֱ�����ʽ
//	//while (itBegin!=itEnd)
//	//{
//	//	cout << *itBegin << endl;
//	//	itBegin++;
//	//}
//	//�ڶ��ֱ�����ʽ
//	for (vector<int>::iterator itBegin = v.begin() ;  itBegin!= v.end(); itBegin++)
//	{
//		cout << *itBegin << endl;
//	}
//	//�����ֱ�����ʽ
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

//vector����Ƕ������

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

//string��������
//��������һ���࣬��char*������char*��ָ�룬string��һ���࣬���ڷ�װ��char*����������ַ�������һ��char*�͵�����
//��װ�˺ܶ෽��ķ���

//string�Ĺ��캯��
//string()����һ�����ַ���
//string(const char* s)ʹ���ַ���s��ʼ��
//string(const string& str);ʹ��һ��string�����ʼ����һ��string����
//string(int n,char c);ʹ��n���ַ�c��ʼ��
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

//string ��ֵ����

//void test()
//{
//	string str1 = "hello world";
//	cout << str1 << endl;
//
//	string str2 = str1;
//	cout << str2 << endl;
// 
//	//����ֱ��string str3 = 'a',�ᱨ�������û�ж�Ӧ�Ĺ��캯��
//	string str3;
//	str3 = 'a';
//	cout << str3 << endl;
// 
//	string str4;
//	str4.assign("asdasd");
//	cout << str4 << endl;
// 
//	string str5;
//	str5.assign("aabbccdd", 5);//ǰn���ַ�
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


//string�ַ���ƴ��

//void test() {
//	string str1 = "��";//���������
//	str1 += "������Ϸ";
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
//	  str3.append(str2,3,3);//��ȡ��Ӧλ�ã��ڶ�������Ϊ��ʼλ�á�����������Ϊ��ȡ����
//	  cout <<  str3 << endl;
//}
//
//int main() {
//
//	test();
//	return 0;
//}

//string���Һ��滻
//int find(const string& str, int pos = 0) const; //����str��һ�γ���λ��,��pos��ʼ����
//int find(const char* s, int pos = 0) const; //����s��һ�γ���λ��,��pos��ʼ����
//int find(const char* s, int pos, int n) const; //��posλ�ò���s��ǰn���ַ���һ��λ��
//int find(const char c, int pos = 0) const; //�����ַ�c��һ�γ���λ��
//int rfind(const string& str, int pos = npos) const; //����str���һ��λ��,��pos��ʼ����
//int rfind(const char* s, int pos = npos) const; //����s���һ�γ���λ��,��pos��ʼ����
//int rfind(const char* s, int pos, int n) const; //��pos����s��ǰn���ַ����һ��λ��
//int rfind(const char c, int pos = 0) const; //�����ַ�c���һ�γ���λ��
//string& replace(int pos, int n, const string& str); //�滻��pos��ʼn���ַ�Ϊ�ַ���str
//string& replace(int pos, int n, const char* s); //�滻��pos��ʼ��n���ַ�Ϊ�ַ���s
//void test() {
//	string str1 = "abcdefghde";
//	//����
//	int pos = str1.find("de");//�������򷵻�-1�������򷵻��±�
//	cout << pos << endl;
//	cout << str1.rfind("de") << endl;
//	cout << str1.find("df", 7, 1) << endl;
//
//}
//void test2() {
//	string str1 = "abcdefghde";
//	str1.replace(1, 3, "1111");//��һ��λ����3���ַ��滻Ϊ1111
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


//�ַ����Ƚ�

//void test()
//{
//	string str1 = "hello";
//	string str2 = "hello";
//	if (str1.compare(str2)==0)//��ȷ���0,һ������ͬ��(1����ĸ)��ĸ�ͷ��أ����str1>str2����1����֮����-1
//	{
//
//	}
//}


//string�ַ���ȡ

//void test()
//{
//	string str = "hello";
//	//ͨ��[]���ʵ����ַ���
//	for (int i = 0; i < str.size(); i++) {
//		cout << str[i] << " ";
//
//	}
//	//�ı䵥���ַ�,Ҳ������at���з����޸�
//	str[0] = 'p';
//	cout << endl;
//	//ͨ��at��ʽ���ʵ����ַ���
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

//string�����ɾ��

//string& insert(int pos, const char* s); //�����ַ���
//string& insert(int pos, const string& str); //�����ַ���
//string& insert(int pos, int n, char c); //��ָ��λ�ò���n���ַ�c
//string& erase(int pos, int n = npos); //ɾ����Pos��ʼ��n���ַ�


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


//string�Ӵ�

//string substr(int pos = 0, int n = npos) const; //������pos��ʼ��n���ַ���ɵ��ַ���


//void test()
//{
//	string str = "abcdef";
//	string subStr = str.substr(1, 3);
//	cout << subStr << endl;
//
//	//Ӧ�ó�������ȡ@ǰ����û���Ϣ
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
//vector��������̬�����飬��������
//���캯��
//vector<T> v; //����ģ��ʵ����ʵ�֣�Ĭ�Ϲ��캯��
//vector(v.begin(), v.end()); //��v[begin(), end())�����е�Ԫ�ؿ���������
//vector(n, elem); //���캯����n��elem����������
//vector(const vector& vec); //�������캯����
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
//	vector<int>v1;//�޲ι���
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//	print(v1);
//
//	vector<int>v2(v1.begin(), v1.end());//ͨ�����䷽ʽ���й���
//	print(v2);
//
//	vector<int>v3(10, 100);//10��100
//	print(v3);
//
//	vector<int>v4(v3);//��������
//	print(v4);
//}
//
//int main() {
//	test();
//
//	system("pause");
//	return 0;
//}

//vector��ֵ����

//vector& operator=(const vector& vec); //���صȺŲ�����
//assign(beg, end); //��[beg, end)�����е����ݿ�����ֵ������
//assign(n, elem); //��n��elem������ֵ������
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
//	//��ֵ operator=
//	vector<int> v2;
//	v2 = v1;
//	print(v2);
//	vector<int> v3;
//	v3.assign(v1.begin(), v2.end());//��[beg, end)�����е����ݿ�����ֵ������
//	print(v3);
//	vector<int> v4;//��n��elem������ֵ������
//	v3.assign(10, 100);
//}
//
//int main() {
//	test();
//
//	system("pause");
//	return 0;
//}



//vector�����ʹ�С�Ĳ���

//empty(); //�ж������Ƿ�Ϊ��.�շ���1
//capacity(); //����������
//size(); //����������Ԫ�صĸ���
//resize(int num); //����ָ�������ĳ���Ϊnum���������䳤������Ĭ��ֵ�����λ�á�
////���������̣���ĩβ�����������ȵ�Ԫ�ر�ɾ����
//resize(int num, elem); //����ָ�������ĳ���Ϊnum���������䳤������elemֵ�����λ�á�
////���������̣���ĩβ�����������ȵ�Ԫ�ر�ɾ��
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


//vector�����ɾ��

//push_back(ele); //β������Ԫ��ele
//pop_back(); //ɾ�����һ��Ԫ��
//insert(const_iterator pos, ele); //������ָ��λ��pos����Ԫ��ele
//insert(const_iterator pos, int count, ele); //������ָ��λ��pos����count��Ԫ��ele
//erase(const_iterator pos); //ɾ��������ָ���Ԫ��
//erase(const_iterator start, const_iterator end); //ɾ����������start��end֮���Ԫ��
//clear(); //ɾ������������Ԫ��
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


//vector���ݴ�ȡ

//at(int idx); //��������idx��ָ������
//operator[]; //��������idx��ָ������
//front(); //���������е�һ������Ԫ��
//back(); //�������������һ������Ԫ��



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

