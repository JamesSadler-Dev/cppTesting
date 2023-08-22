#include <iostream>

class MyClass{
    
    public:
        friend class myFriend;

        MyClass():
        myvar(123)
        {
            std::cout << "\ncreated";
        }

    private:
        int myvar;

};

class myFriend{

    public:
        // has to be passed AN OBJECT OF friend class to then access its member
        int method(MyClass &other){
            std::cout << "done." << other.myvar;
            other.myvar += 1;
            return other.myvar;
    }
};


int main(){
    MyClass hello;
    myFriend myF;
    
    std::cout << "\n"<< myF.method(hello) << "\n\n";
    return 0;
}
