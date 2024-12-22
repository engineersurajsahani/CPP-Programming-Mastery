#include <iostream>

using namespace std;

// Polymorphism :- 
// (1) Many Forms or Many ways to do a same task
// (2) Many Options or Many posibilities or Many Chances 

// Method Overriding :- The function which is present in parent class exactly 
//                      same function is also present in child class.

// Runtime Polymorphism :- The function call is resolved at runtime.

class A{
    public :
    
    void display(){
        cout<<"Class A"<<endl;
    }
};

class B : public A{
    public :
    
    void display(){
        cout<<"Class B"<<endl;
    }
};

class C : public A{
    public :
    
    void display(){
        cout<<"Class C"<<endl;
    }
};

class D : public B, public C{
    public :
    
    void display(){
        cout<<"Class D"<<endl;
    }
};

int main(){
   
   A a;
   B b;
   C c;
   D d;
   
   a.display();
   b.display();
   c.display();
   d.display();
   
   
}
