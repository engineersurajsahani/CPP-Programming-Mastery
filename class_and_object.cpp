#include <iostream>

using namespace std;

// Class :- 

// (1) Class is the blueprint or template for creating the object.
// (2) Class is the collection of objects.
// (3) Class is the user defined data type.

// Object :- 

// (1) Object is the instance or part of the class.
// (2) Object is any real world entity which having 3 things :-
//     (a) Identity 
//     (b) State / Variable / Data 
//     (c) Behaviour / Function / Work / Task

class Programming{
    
    public :
    
    int id;
    string name;
    string course;
};

int main(){
    
    Programming p;
    p.id=1;
    p.name="Suraj";
    p.course="C++ Programming";
    
    cout<<p.id<<" "<<p.name<<" "<<p.course<<endl;
    
    Programming q;
    q.id=2;
    q.name="Amit";
    q.course="C Programming";
    
    cout<<q.id<<" "<<q.name<<" "<<q.course;
    
    
}
