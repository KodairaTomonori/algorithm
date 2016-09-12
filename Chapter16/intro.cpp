#include<iostream>
#include<vector>

struct Point {
  double x, y;
};


struct Segment {
  Point p1, p2;
};


typedef Point Vector;
typedef Segment Line;


class Circle {
  public:
    Point c;
    double r;
    Circle(Point c = Point(), double r = 0.0): c(c), r(r) {}
};


int main() {
  return 0;
}
