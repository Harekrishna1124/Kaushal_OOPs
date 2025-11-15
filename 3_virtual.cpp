#include <string>
#include <iostream>
#include <vector>

class B {
private:
    int first_attribute;
    std::string second_attribute;

public:
    B(int f, const std::string s): first_attribute(f), second_attribute(s) {  // out(in) out = in;
        std::cout << "Hello from Base \n";
    }

    B(const B& other) {
        this->first_attribute = other.first_attribute;
        this->second_attribute = other.second_attribute;
    }



};

//Abstract Class
class Shape{
    public:
    virtual void print_shape() = 0; // Pure Virtual function
};

class Circle: public Shape {
    public:
    void print_shape() {
        std::cout << " Hii From Circle \n";
    }
};

class Rectangle: public Shape {
    public:

    void print_shape() {
        std::cout << " Hii From Rectangle \n";
    }
};

class Square: public Rectangle {
    public:
    void print_shape() {
        std::cout << " Hii From Square \n";
    }
};

/*
        Shape(Abstract)
        / \
       /   \
   Circle   Rectangle(pure virtual function)
                \
                 \
                Square.

*/

//int funct(float n)// fill in the blanks
//funct(5.6);

int main() {
    B b_obj(1,"Bye");

    
    B b_obj2(b_obj);    // Copy ka matlab same type of object ka use karke usi type ka object banana, yaha par b_obj ka type B hai aur jo obj ban raha hai b_obj2 uska bhi type B toh yaha par B ki madat se B ban raha hai is waale ko copy kahte hai aur yaha par copy constructor call hoga.

    //Shape obj **  not allowed.
    Circle cir;
    Square sq;
    Rectangle rec;

    std::vector<Shape*> vec = {&cir, &sq, & rec};
    for (auto &ele: vec) {
        ele->print_shape();
    }


}