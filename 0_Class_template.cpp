// Header file
// 1. Stage : Preprocessing
#include <string>
#include <iostream>

int global_var;     // Global and Static goes in Data Segment.

class class_name {
private:
    int id_;
    int sec_;
    std::string name_;
public:
    // class_name() = default; 
    class_name (int id, const std::string name) : id_(id) {      // All Attribute are initialized in initializer list.
        name_ = name;   //Copy Assignment Operator will be called
        id_ = id;
        // name_(name) === name_ = name;
        // id_(id) === id_ = id
    } 

    // Constructor Overloads    // Same name but different number of arguments, different  types
    class_name (int id, const std::string name, int sec): id_(id), name_(name), sec_(sec){
        std::cout << "Overload of Constructor \n";
    }

    // Order in Which Memory is Allocated / initialized in class 
    /*
        Event 1: Memory for object is allocated.
        Event 2: Contructor is called
        Event 3: Object will be inialized according to the initializer list. If there isn't anything for the attribute in the initializer list then?
        Event 4: All the copy assignment within the constructor is executed.
    */


};  //blueprint of object

// Object
// Constructor is a function which is called when Object is created 


// By default Access specifier of struct is public while for class it is private.
struct class_ {
    class_(){
        std::cout << "Hello from struct \n";

    }
};

void func() {
    std::cout << "Function \n";
}
 
/*
int val = 5 //101   short int(16 bit 2byte)
//int(4byte) int32_t(4byte)
short int (16bit)
int (32)        0|0000000000000000000000000000000 , 1|0000000000000000000000000000
long (64)

uint (32) {unsigned int} 0000000000000000000000000000000000000, range of unint = 2*(RANGE OF INT)
*/

/*
Process Memory Layout
0x1110101010
Code Segment
|
|
|
|
Data Segment
|
|
|
|
Heap
|
|
|
|
Stack
|
|
|
|
0x121222222
*/



int32_t main() {
    int a;  // First memory is allocated then it is initialized (To taken in future Placement new vs new)
    std::cout << a;

    class_ obj_struct();

    class_name obj(1,"Kaushal_lund");
    std::string my_name_;
    

    func(); // instruction pointer instruct to pont to func();

/*
// Copy vs Intialization
std::string ex = "Randi";   // Initialzation
ex = "Rand";    // Copy

*/    

}


