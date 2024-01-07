#include <thread>
#include <mutex>
#include <iostream>

using std::string;
using std::cout;
using std::mutex;

void cool(string toPrint,mutex lock){
    std::lock_guard<mutex>
    cout << toPrint;  
}


int main()
{
    mutex myLock1;

    return 0;
}
