#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

//class p {
//public:
//	int* m_age;//�ڶ������ٿռ�
//	p() {
//		cout << "���캯��" << endl;
//	}
//	~p()
//	{
//		delete m_age;//�ͷŶѿռ�
//		cout << "��������" << endl;
//	}
//	//p(const p& a)
//	//{
//	// this.m_age=p.m_age;
//	//	cout << "ǳ�������캯��" << endl;
//	//}
//	//p(const p& a) {//�������
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

//class P {//��Ա�����ͳ�Ա�����ֿ��洢����̬����������������ϵ�
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


//*this���ض����ע������
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

//class P//������ͳ�����
//{
//public:
//	int m_a;
//	mutable int m_b;//���ӳ������ͳ����������
//	//this������ָ�볣������ʽΪP*const this ָ��ָ���޸�
//	
//	void func() const//���������൱�ڳ���ָ�룬ָ���ֵ�����޸ġ�
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
//	const P a;//�൱�ڳ���ָ�룬ֻ�ܵ��ó�����,��ͨ���������޸����ԣ���������ָ���ֵ�����޸�
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

