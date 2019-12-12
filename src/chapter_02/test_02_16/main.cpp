#include <iostream>

// ==========================================
// reference & pointer
// ==========================================


int main(int argc, char* argv[]) {
    int i = 10;
    int &r1 = i;
    double d = 3.1231;
    double &r2 = d;

    r2 = 22;
    r2 = r1;
    std::cout << "r2 is " << r2 << std::endl
              << "d is " << d << std::endl;
  
    
    int myint = 123;
    std::cout << "my int address is " << &myint << std::endl;
    int &myint_ref = myint;
    int *myint_pt = &myint_ref;
    std::cout << "*myint " << *myint_pt << std::endl;

    int jjj = 12312312;
    void *jjj_void = &jjj;
    std::cout << "jjj_void address is " 
              << jjj_void << std::endl
              << std::endl;
    std::cout << "convert void pointer jjj_void to int pointer" << std::endl 
              << "the address is " << (int *)jjj_void << std::endl
              << "the value is " << *(int *)jjj_void << std::endl 
              << std::endl;
    std::cout << "convert void pointer jjj_void to double pointer" << std::endl 
              << "the address is " << (double *)jjj_void << std::endl
              << "the value is " << *(double *)jjj_void << std::endl 
              << std::endl;
/*
    The output is as followed:

    jjj_void address is 0x7ffc2bc74da4

    convert void pointer jjj_void to int pointer
    the address is 0x7ffc2bc74da4
    the value is 12312312

    convert void pointer jjj_void to double pointer
    the address is 0x7ffc2bc74da4
    the value is 6.08309e-317

*/
    
    // ===============================
    // reference of a pointer
    // ===============================
    // There is no pointer of a reference
    // Because actually reference is not an object
    int *int_ptr = nullptr;
    // int &*int_ptr_ref = int_ptr;
    // The closest one affect on the variable
    int *&int_ptr_ref = int_ptr;
    int fjfj = 41231;
    int_ptr = &fjfj;
    std::cout << "int_ptr is " << *int_ptr << std::endl;
    *int_ptr_ref = 3241;
    std::cout << "int_ptr_ref is " << *int_ptr << std::endl;

    return 0;
}