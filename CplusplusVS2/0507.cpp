#include <iostream>
using namespace std;
class Adder {
protected:
	int add(int a, int b) { return a + b; }
};
class Subtractor {
protected:
	int minus(int a, int b) { return a - b; }
};class Multiplier {protected:	int multi(int a, int b) { return a * b;  }};// 다중 상속
class Calculator : public Adder, public Subtractor, public Multiplier {
public:
	int calc(char op, int a, int b);
};
int Calculator::calc(char op, int a, int b) {
	int res = 0;
	switch (op) {
	case '+': res = add(a, b); break;
	case '-': res = minus(a, b); break;
	case '*': res = multi(a, b); break;
	}
	return res;
}


int main() {
	Calculator handCalculator;
	cout << "2 + 4 = "
		<< handCalculator.calc('+', 2, 4) << endl;
	cout << "100 - 8 = "
		<< handCalculator.calc('-', 100, 8) << endl;
	cout << "10 * 2 = "
		<< handCalculator.calc('*', 10, 20) << endl;
}