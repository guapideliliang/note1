#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

//第39级台阶，类似青蛙跳台问题，但是，总步数必须为偶数步
//int fib(int n,int count) {
//	if (n == 0)
//	{
//		if (count%2!=0)//为奇数，且n=0时说明这条线满足，因为n=0，相当于这步没有路程可走，所以实际走的路为偶数步
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
