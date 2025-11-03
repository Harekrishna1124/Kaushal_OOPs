#include <iostream>

class Base{
private:
    int priv;
protected:
    int prot{1};
public: //Access Specifier
    int var1;
    int var2;
    
    Base(int v1,int v2):priv(v1), var1(v1), var2(v2) {
        std::cout <<" Hello from Base"<<std::endl;
    }

    void print(std::string f) {
        std::cout << "Hello " << f << std::endl;
    }
};

                //Protected Private
class Derived: private Base {

public:
    int var1; 
    Derived(int x,int y):var1(x),Base(y,x) {
        std::cout<<"Hello from Derived"<<std::endl;
        std::cout<<prot<<std::endl;
    }

    void print(int i) {
        std::cout << "Hello " << i << std::endl;
    }
    
    using Base::print;

};

class Derived_Derived : public Derived {
    public:
    Derived_Derived(int x,int y): Derived(x,y){
        std::cout << var1 << std::endl;
    }
};

// Function Signature (name of function),(number of argument),(type of arguements)
int f(int a);
int f(double a);
    // void f(int a);   // Signature doesn't depends on the return type.


int main(){
    Base b{1,1};
    std::cout<<b.var1<<std::endl;
    Derived d{2,3};
    double dd = 2.3;
    d.print("hellow");    //Name hiding 
}