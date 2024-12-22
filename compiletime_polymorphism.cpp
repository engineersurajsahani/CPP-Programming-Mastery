#include <iostream>

using namespace std;

// Polymorphism :- 
// (1) Many Forms or Many ways to do a same task
// (2) Many Options or Many posibilities or Many Chances 

// Method Overloading :- If a class conatin more than one function with same name 
//                       but different number of parameters.

class Addition{
    
    public :
    
    void add(int a,int b){
        cout<<"Addition of a and b :- "<<a+b<<endl;
    }
    
    void add(int a,int b,int c){
        cout<<"Addition of a, b and c :- "<<a+b+c<<endl;
    }
    
    void add(int a,int b,int c,int d){
        cout<<"Addition of a, b, c and d :- "<<a+b+c+d<<endl;
    }
};

int main(){
   
   Addition a;
   a.add(4,5);
   a.add(4,5,6);
   a.add(4,5,6,7);
   
   
}
