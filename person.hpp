#pragma once
#include <iostream>
using namespace std;
#include<string>


template<class T>
class Person {
public:

	Person(T b);
	T a;

};
template<class T>
Person<T>::Person(T b)
{
	this->a = b;
	cout << "³É¹¦";

}