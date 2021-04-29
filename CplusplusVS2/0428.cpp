// 큰 수를 리턴하는 다음 두 개의 big함수를 중복 구현하라

//#include <iostream>
//using namespace std;
//
//int big(int a, int b) {
//	if (a > b) { return a; }
//	else { return b; }}
//
//int big(int arr[], int size) {
//	int c = arr[0]; 
//	for (int i = 0; i < size; i++) 
//		if (c < arr[i]) c = arr[i];
//
//	return c; }
//
//
// 
//int main(void) {}



// sum() 중복 구현
//#include <iostream>
//using namespace std;
//
//int sum(int a, int b) {}


//디폴트 매개변수
#include <iostream>
using namespace std;

void f(char a = ' ') { cout << a * 10 << endl; }
//void f(char b = '%') { cout << b * 10 << endl; }
//void f(char c = '@') { cout << c * 10 << endl; }



int main(void) {

	f();
	f('%');
	f('@'); 
	
}