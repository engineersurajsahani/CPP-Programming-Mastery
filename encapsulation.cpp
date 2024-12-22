#include <iostream>

using namespace std;

// Encapsulation :- 
// (1) Encapsulation means encapsulate the data variables inside the class.
// (2) To achieve Encapsulation , we make data variables private and for accessing these 
//     private data variable we create setter and getter function as a public.

class Programming{
    
    private :
    
    int id;
    string name;
    string course;
    
    public :
    
    // Setter Functions
    
    void setId(int id){
        this->id=id;
    }
    
    void setName(string name){
        this->name=name;
    }
    
    void setCourse(string course){
        this->course=course;
    }
    
    // Getter Functions 
    
    int getId(){
        return this->id;
    }
    
    string getName(){
        return this->name;
    }
    
    string getCourse(){
        return this->course;
    }
};

int main(){
    
    // Programming p;
    // p.id=1;
    // p.name="Suraj Sahani";
    // p.course="C++ Programming";
    
    // cout<<p.id<<" "<<p.name<<" "<<p.course<<endl;
    
    Programming q;
    q.setId(2);
    q.setName("Sangita");
    q.setCourse("C Programming");
    
    cout<<q.getId()<<" "<<q.getName()<<" "<<q.getCourse();
    
}
