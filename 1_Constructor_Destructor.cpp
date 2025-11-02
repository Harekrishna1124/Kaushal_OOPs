#include <string>
#include <iostream>

class class_name{
    public:
    int b;
    int a;
    //CTOR
    class_name(int a,int b): a(a),b(b) {
        std::cout <<"CTOR " << std::endl;
    }
    //Default Copy Constructor copies the attribute value as it is. a = other.a, b = other.b, *ptr = other.*ptr


    // Copy CTOR
    class_name(class_name &other):a(other.a) {
        std::cout<<"Copy CTOR"<<std::endl;
    }

    int operator+(class_name &other){
        return other.a;
    }

    class_name& operator=(class_name &other){
        a = other.a;
        b = other.b;
        std::cout << "Assignment OPerator"<< std::endl;
        return *this;
    }

    void print() {
        std::cout <<" Hello from Class\n";
    }


    ~class_name(){
        std::cout << "DTOR" << std::endl;
    }
};
class_name function(int a,int b);

int main() {
    //class_name first_obj(); //Vexing Parse
    class_name first_obj{1,2}; //default contructor will be called.
    class_name second_obj = first_obj;  //copy constructor will be called. || Here Constructor will be called but not the default one, **Initialization**
    class_name *ptr = &second_obj;
    std::cout << ptr->a <<" "<< (*ptr).b<< std::endl;
    std::cout << second_obj.a <<" "<< second_obj.b<< std::endl;
    second_obj =  first_obj;    //Assignment not the initialization.

    // In the scope
    {
        class_name obje{4,5};
    }



    class_name obj1(1,2);
    class_name obj2(3,4);
    obj1.print();
    std::cout << obj1 + obj2 << std::endl;
    std::cout << obj2 + obj1 << std::endl;

    
    // int a = 5;
    // float f = 3.5;
    // double b = 6.1;
    // int *a_ptr = (&a);
    // int val = static_cast<int>(f);
    // // double *b_ptr = static_cast<double*>(&f);
    // std::cout << a_ptr <<" "<< a_ptr + 1 << std::endl;
    // std::cout << b_ptr <<" "<< b_ptr + 1 << std::endl;
    // int arr[] = {2,3,4};
}

// . (Access of object attributes from object)
// -> (Access of object attributes from the object pointer)

// Shallow Copy vs Deep Copy