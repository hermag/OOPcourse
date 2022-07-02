#include <iostream>
using namespace std;

class Shape 
{
    protected:
        int width;
        int height;
    public:
        void setWidth(int w)
        {
            width = w;
        }
        void setHeight(int h)
        {
            height = h;
        }
};

class PaintCost
{
    public:
        int getCost(int area) 
        {
            return area*70;
        }
};

class Rectangle: public Shape, public PaintCost {
    public:
        int getArea() {
            return (width * height);
        }
};

int main()
{
    Rectangle rect;
    int area;
    rect.setWidth(4);
    rect.setHeight(5);
    area = rect.getArea();
    cout<<"Total area: "<<rect.getArea()<<endl;
    cout<<"Total paint cost: GEL "<<rect.getCost(area)<<endl;
    return 0;   
}