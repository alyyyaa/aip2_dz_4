//Создать два списка. Вывести их на экран. Вставить из второго списка в первый элементы, кратные k. Вывести первый список на экран.

#include <algorithm>
#include <list>
#include <iostream>
using namespace std;

int n;


bool predicat(int k) {
	return (k % n == 0);
}
int main()
{
	list <int> l1{1,2,3,4,5,6,7,8};
	list <int> l2{12,18,15,13};
	list<int>::iterator p;
	cout << "Введите К: ";
	cin >> n;
	l1.sort();
	for (p = l1.begin(); p != l1.end(); p++) {
		cout << *p << " ";
	}
	l2.sort();
	l2.remove_if(predicat);
	l1.merge(l2);
	cout << endl<< "Вывод еще раз" << endl;
	for (p = l1.begin(); p != l1.end(); p++) {
		cout << *p << " ";
	}
}