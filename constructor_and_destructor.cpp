#include <iostream>

using namespace std;

// Constructor :- 
// (1) It is a special type of function which name is same as class name.
// (2) Without constructor we cannot create a object.
// (3) If we cannot create a constructor , then C++ Compiler will create a default constructor.
// (4) If we create a constructor , then C++ Compiler will not create a deafult constructor.
// (5) It is executed when object or instance is created of the class.

// Constructor Overloading :- 
// If a class contain more than one constructor with different number of parameter or different type of parameter
// is called Constructor Overloading.

// Destructor :- It is executed when object is deleted from the memory.

class A{
    
    public :
    
    string name;
    
    A(){
      cout<<"Default Constructor"<<endl;  
    }
    
    A(int a){
      cout<<"int a Parameterised Constructor"<<endl;  
    }
    
    A(int a,int b){
      cout<<"int a and int b Parameterised Constructor"<<endl;  
    }
    
    A(string name){
        this->name=name;
      cout<<this->name<<"  string name Parameterised Constructor"<<endl;  
    }
    
    ~A(){
      cout<<this->name<<"  Destructor called!!!"<<endl;  
    }
    
    
};

int main()
{
    A a=A("A");
    A b=A("B");
    A c=A("C");
    A d=A("D");
    
    return 0;
}
