// arraynew.cpp -- using the new operator for arrays
#include <iostream>


int main(int argc,char * argv[])
{
    using namespace std;
    double * p3 = new double[3];        // space for 3 doubles
    p3[0] = 0.2;
    p3[1] = 0.5;
    p3[2] = 0.8;
	cout << "p3[1] is " << p3[1] << endl;
    p3 = p3 + 1;                        // increment the pointer
	cout << "Now p3[0] is " << p3[0] << " and ";
	cout << "p3[1] is " << p3[1] << endl;
	p3 = p3 - 1;	                    // point back to beginning	指针向前移动一个位置
	delete[] p3;	                    // free the memory

    return 0;
}
