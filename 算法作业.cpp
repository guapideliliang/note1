#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

//��39��̨�ף�����������̨���⣬���ǣ��ܲ�������Ϊż����
//int fib(int n,int count) {
//	if (n == 0)
//	{
//		if (count%2!=0)//Ϊ��������n=0ʱ˵�����������㣬��Ϊn=0���൱���ⲽû��·�̿��ߣ�����ʵ���ߵ�·Ϊż����
//		{
//			return 1;
//		}
//		return 0;
//	}
//	if (n == 1)
//	{
//		if (count % 2 == 0)
//		{
//		return 1;
//	}
//		return 0;
//	}
//	else
//	{
//		return fib(n - 1,count+1) + fib(n - 2,count+1);
//	}
//
//}
//
//int main()
//{
//	int a;
//		cin >> a;
//		cout << fib(a, 1);
//	return 0;
//	system("pause");
//}
// 
//int a(int n)
//{
//	int g;
//	if (n == 1)
//		g = 1;
//	else if(n%2==0)
//	{
//		g = a(n / 2) + 1;
//	}
//	else
//	{
//		g = a((n - 1) / 2) + a((n +1) / 2);
//
//	}
//	return g;
//}
//
//int main()
//{
//	cout<<a(9);
//
//	return 0;
//	system("pause");
//}
