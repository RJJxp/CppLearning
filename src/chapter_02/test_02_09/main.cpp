#include <iostream>

std::string s;
int global_int;
int reused = 32;

int main(int argc, char* argv[]) {
    // int i1 = {3.15};
    // error: narrowing conversion of ‘3.1499999999999999e+0’ from ‘double’ to ‘int’ inside { } [-Wnarrowing]
    // int i1 = {3.15};
    //              ^
    int i2 = 3.41;

    double wage = 1231;
    double salary = wage = 13.413;

    std::cout 
              << "i2 is " << i2 << std::endl
              << "wage is " << wage << std::endl
              << "salary is " << salary << std::endl
              << "s is " << s << std::endl
              << "global int is " << global_int << std::endl;

    // ====================================================
    // 2.12
    // ==================================================== 
    double Double = 12;
    std::cout << Double << std::endl;
    int reused = 22;
    std::cout << "reused " << reused << std::endl
              << "::reused " << ::reused << std::endl;
 
    return 0;
}