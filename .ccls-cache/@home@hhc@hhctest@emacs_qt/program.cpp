#include "iostream"
#include "lib/demo.h"
int main(int argc, char *argv[])
{
    std::cout << "hello world" <<std::endl;
    testClass hcx;
    hcx.testMesg();
    hcx.testAdd(45,23);
    hcx.testAdd(45,23);
    hcx.testMesg();
    hcx.testAdd(45, 32);
    hcx.testMesg();
    //this is a comment line.
    testClass wyx;
    wyx.testAdd(45, 23); 
    //add a line.
    return 0;
}
