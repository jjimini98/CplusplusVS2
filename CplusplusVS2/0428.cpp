// ū ���� �����ϴ� ���� �� ���� big�Լ��� �ߺ� �����϶�

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



// sum() �ߺ� ����
//#include <iostream>
//using namespace std;
//
//int sum(int a, int b) {}


//����Ʈ �Ű�����
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