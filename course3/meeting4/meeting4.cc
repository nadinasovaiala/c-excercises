#include <iostream>
#include <memory>

struct MyType
{
    MyType() { std::cout << "def constructor" << std::endl; }
    MyType(int i) :x(i) {std::cout << "init constr, i=" << i << std::endl; }
    ~MyType() { std::cout << "destructor x=" << x << std::endl; }
    
    int x;
};

int main()
{
    std::array<char, sizeof(MyType)> buffer;
    
    new(buffer.data()) MyType(777); // placement new
    
    MyType* obj = reinterpret_cast<MyType*>(buffer.data());
    obj->~MyType();
    
}