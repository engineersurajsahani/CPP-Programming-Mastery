#include <iostream>

using namespace std;

class Mobile{
    
    virtual void camera()=0;
    virtual void storage()=0;
    virtual void keypad()=0;
    virtual void ram()=0;
};

class Samsung : public Mobile{
    
    public :
    
    void camera(){
        cout<<"200 MP"<<endl;
    }
    
    void storage(){
        cout<<"16 GB"<<endl;
    }
    
    void keypad(){
        cout<<"Touch Screen"<<endl;
    }
    
    void ram(){
        cout<<"8 GB"<<endl;
    }
};

int main()
{
    // Mobile m;
    
    Samsung s;
    s.camera();
    s.storage();
    s.keypad();
    s.ram();

    return 0;
}
