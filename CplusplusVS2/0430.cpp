//p.37

//#include <iostream>
//using namespace std;
//
//class Circle {
//private:
//	static int numOfCircles;
//	int radius;
//
//public: 
//	Circle(int r = 1);
//	~Circle() { numOfCircles--; }
//	double getArea() { return 3.14 * radius * radius;  }
//	static int getNumOfCircles() { return numOfCircles; }
//};




// chapter 10  p.7 

//#include <iostream>
//#include <string>
//using namespace std;



// 2���� ��鿡�� �� ���� ǥ���ϴ� Ŭ���� Point ����
//class Point {
//	int x, y; //�� �� (x,y) ��ǥ��
//public:
//	void set(int x, int y) { this->x = x; this->y = y; }
//	void showPoint() {
//		cout << "(" << x << "," << y << ")" << endl;}
//};


//class ColorPoint : public Point { // 2���� ��鿡�� �÷����� ǥ���ϴ� Ŭ���� ColorPoint.Point�� ��ӹ���
//	string color;// ���� �� ǥ��
//public:
//	void setColor(string color) { this->color = color; }
//	void showColorPoint();
//};
//void ColorPoint::showColorPoint() {
//	cout << color << ":";
//	showPoint(); // Point�� showPoint() ȣ��
//}
//int main() {
//	Point p; // �⺻ Ŭ������ ��ü ����
//	ColorPoint cp; // �Ļ� Ŭ������ ��ü ����
//	cp.set(3, 4); // �⺻ Ŭ������ ��� ȣ��
//	cp.setColor("Red"); // �Ļ� Ŭ������ ��� ȣ��
//	cp.showColorPoint(); // �Ļ� Ŭ������ ��� ȣ��
//}