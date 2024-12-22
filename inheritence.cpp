#include <iostream>

using namespace std;

// Inheritence :- 
// The child class acquire the properties of parent class.

// Types of Inheritence :- 
// (1) Single Inheritence
// (2) Multilevel Inheritence 
// (3) Multiple Inheritence
// (4) Hierarchical Inheritence
// (5) Hybrid Inheritence 

class A{
    public :
    
    void display(){
        cout<<"Class A"<<endl;
    }
};

class B : public A{
    public :
    
    // void display(){
    //     cout<<"Class B"<<endl;
    // }
};

class C : public A{
    public :
    
    // void display(){
    //     cout<<"Class C"<<endl;
    // }
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
