/*
 *  Protected ტიპის ცვლადებზე და მეთოდებზე, კლასის ობიექტიდან პირდაპირი წვდომა აკრძალულია, ისევე როგორც private ტიპის
 *            ცვლადებზე და მეთოდებზე
 *  Protected ტიპის ცვლადებზე და მეთოდებზე, წვდომა შესაძლებელია მხოლოდ მემკვიდრე კლასებიდან და მეგობარი ფუნქციებიდანაც
 *  Private ტიპის ცვლადებზე და მეთოდებზე, წვდომა შეუძლებელია მემკვიდრე კლასებიდან და ასევე აკრძალულია ამ კლასის ობიექტიდან,
 *          შესაძლებელია მხოლოდ კლასის შიგნით და მეგობარი ფუნქციებიდან
 *  Public ტიპის ცვლადებზე და მეთოდებზე წვდომა შესაძლებელია ზოგადად, ანუ მემკვიდრე კლასებიდანაც და პირდაპირ ობიექტიდანაც
 */
#include <iostream>
#include <cmath>
using namespace std;

class Shape {
protected:
	int width, height;
public:
	void setWidth(int w) {
		width = w;
	}
	void setHeight(int h) {
		height = h;
	}
};

class Rectangle: public Shape {
public:
	int getArea() {
		return width*height;
	}
};

class Triangle: public Shape {
public:
	int getArea() {
		return 0.5*width*height;
	}
};

int main()
{
	Rectangle R;
	R.setWidth(3);
	R.setHeight(4);
	Triangle T;
	T.setWidth(3);
	T.setHeight(4);
	cout<<"Rectangle Area is: "<< R.getArea()<<endl;
	cout<<"Get triangle Area: "<<T.getArea()<<endl;
	return 0;
}
