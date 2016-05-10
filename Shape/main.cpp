 #include <iostream>

 #include <string>
#include "shape.h"
#include "rectangle.h"
#include "triangle.h"
#include "square.h"
#include "trirect.h"


 class Shape{

 protected:

 std::string name;

 public:

 Shape(std::string name = "Amorphous Base Shape"): name(name){}

 std::string getName(){ return name; }

 };

 class Triangle : public Shape{

 public:

 Triangle(std::string name = "Nice Triangle!") : Shape(name){}
 
 Triangle tria;

 cout << tria.getName() << endl;


 };

 

 
 