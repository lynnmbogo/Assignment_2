#ifndef TRIRECT_H
#define TRIRECT_H
#include <string>
#include "rectangle.h"

class Triangle : public Rectangle{

 public:

 Triangle(int h, int b) : Rectangle("Triangle", h, b){}

 Triangle() : Rectangle("Triangle"){}

 int area();

 };
 
 int Triangle::area();
 
#endif