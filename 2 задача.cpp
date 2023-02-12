#include <iostream>
#include <list>
#include <ctime>
#include <stdlib.h>

using namespace std;
bool predicat(int y) {
	return(y >= 0);
}
int main() {
	list <int> l1;
	list <int>::iterator x;
	srand(time(NULL));
	for (int i = 0; i < 10; i++) {
		l1.push_back(rand() % 20 - 10);
	}
	for (x = l1.begin(); x != l1.end(); x++) {
		cout << *x << " ";
	}
	l1.remove_if(predicat);
	cout << endl << "Вывод без положительных чисел" << endl;
	for (x = l1.begin(); x != l1.end(); x++) {
		cout << *x << " ";
	}
}