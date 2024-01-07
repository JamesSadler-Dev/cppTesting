#include <iostream>

class MyClass{
    
    public:
        friend class myFriend;
        MyClass():
        myvar(123)
        {
            std::cout << "\ncreated\n";
        }

    private:
        int myvar;
};

class myFriend{
    public:
        myFriend(){
            this->friendclass.myvar = 1234;
        }
        int method(){
            std::cout << "done." << friendclass.myvar;
            friendclass.myvar += 1;
            return friendclass.myvar;
        }

    private:
        MyClass friendclass; //woohoo now we can have our friend class as a member
};


int main(){
    myFriend myF;
    myF.method();
    return 0;
}
