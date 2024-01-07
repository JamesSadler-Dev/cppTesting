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
        myFriend(){
            this->friendclass.myvar = 1234;
        }
        // has to be passed AN OBJECT OF friend class to then access its member
        int method(MyClass &other){
            std::cout << "done." << other.myvar;
            other.myvar += 1;
            return other.myvar;

    }

    private:
        MyClass friendclass;
};


int main(){
    MyClass hello;
    myFriend myF;
    
    return 0;
}
