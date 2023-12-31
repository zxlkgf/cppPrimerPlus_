// nested.cpp -- using a queue that has a nested class
#include <iostream>

#include <string>
#include "queuetp.hpp"

int main()
{
    using std::string;
    using std::cin;
    using std::cout;

    QueueTP<string> cs(5);
    string temp;

    while(!cs.isFully())
    {
        cout << "Please enter your name. You will be "
                "served in the order of arrival.\n"
                "name: ";
        getline(cin, temp);
        cs.enqueue(temp);
    }
    cout << "The queue is full. Processing begins!\n";

    while (!cs.isEmpty())
    {
        cs.dequeue(temp);
        cout << "Now processing " << temp << "...\n";
    }
    // cin.get();
    return 0; 
}	