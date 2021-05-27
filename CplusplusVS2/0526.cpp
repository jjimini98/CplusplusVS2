// Lecture 12 - p.21

//#include <iostream>
//using namespace std;
//
//template <class T>
//class MyStack {
//	int tos; 
//	T data[100];
//
//public:
//	MyStack();
//	void push(T element);
//	T pop();
//};
//
//template <class T>
//MyStack<T>::MyStack() { tos = -1;  } 
//
//template <class T>
//void MyStack<T>::push(T element){
//	if (tos == 99) { 
//		cout << "Stack is full"; 
//		return;  }
//	tos++; 
//	data[tos] = element; 
//}
//template <class T>
//T MyStack<T>::pop() {
//	T retData;
//	if (tos == -1) {
//		cout << "Stack is empty"; 
//		return 0; 
//	}
//	retData = data[tos--]; 
//	return retData;
//}
//
//
//int main() {
//	MyStack<int> iStack;
//	iStack.push(3);
//	cout << iStack.pop() << endl;
//
//	MyStack<double> dStack;
//	dStack.push(3.4);
//	cout << dStack.pop() << endl;
//
//	MyStack<char>* p = new MyStack <char>();
//	p->push('a');
//	cout << p->pop() << endl;
//	delete p; 
//}


// p.22 
//#include <iostream>
//#include <string>
//using namespace std;
//
//template <class T>
//class MyStack {
//	int tos;
//	T data[100];
//
//public:
//	MyStack();
//	void push(T element);
//	T pop();
//
//};
//
//template <class T>
//MyStack<T>::MyStack() {
//	tos = -1;
//}
//
//template <class T>
//void MyStack<T>::push(T element) {
//	if (tos == 99) {
//		cout << "Stack is full";
//		return; 
//	}
//	tos++;
//	data[tos] = element;
//}
//template <class T>
//T MyStack<T>::pop(){
//	T retData;
//	if (tos == -1) {
//
//		cout << "Stack is empty";
//		return 0; }
//	retData = data[tos--];
//	return retData;
//}
//
//
//class Point {
//	int x, y;
//public:
//	Point(int x = 0, int y = 0) { this->x = x; this->y = y; }
//	void show() { cout << "(" << x << "," << y << ')' << endl;}
//};
//
//int main() {
//	MyStack<int*> ipStack;
//	int* p = new int[3];
//	for (int i = 0; i < 3; i++) p[i] = i * 10; 
//	ipStack.push(p);
//	int* q = ipStack.pop();
//	for (int i = 0; i < 3; i++) cout << q[i] <<' ';
//	cout << endl;
//	delete[] p; 
//
//	MyStack<Point> pointStack;
//	Point a(2, 3) ,b;
//	pointStack.push(a);
//	b = pointStack.pop();
//	b.show();
//
//	MyStack<Point*> pStack; 
//	pStack.push(new Point(10, 20));
//	Point* pPoint = pStack.pop();
//	pPoint->show();
//
//
//	MyStack <string> stringStack;
//	string s = "C++";
//	stringStack.push(s);
//	stringStack.push("java");
//	cout << stringStack.pop() << ' ';
//	cout << stringStack.pop() << endl;
//
//}


// p.23

//#include <iostream>
//using namespace std;
//
//template <class T1, class T2>
//class GClass {
//	T1 data1;
//	T2 data2;
//
//public:
//	GClass();
//	void set(T1 a, T2 b);
//	void get(T1& a, T2& b);
//};
//
//template <class T1, class T2>