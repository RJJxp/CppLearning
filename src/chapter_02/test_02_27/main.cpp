#include <iostream>

// =========================================
// const
// =========================================


int main(int argc, char* argv[]) {
    double dval = 3.1415926;
    const int &c_ival = dval;

    // const int temp_ival = dval;
    // const int &c_ival = temp_ival;
    // Const Reference
    // So when you modify the value of dval
    // It will not effect c_ival

    // const int &c_ref <-----> const int
    //                  ------> double, int

    std::cout << "c_ival " << c_ival << std::endl;
    dval = 2.122;
    std::cout << "c_ival " << c_ival << std::endl;
    
    double &dval_ref = dval;
    dval_ref = 1.442;
    std::cout << "c_ival " << c_ival << std::endl;
    std::cout << "dval " << dval << std::endl;

    const double *d_ptr = &dval;
    
    // const int * pt_c_val ------> int val 
    //                      <-----> const int c_val
    // int *const c_pt <-----> &(int val)

    // const int dddd = 31;
    // error: cause c_pt is a int *
    // if the right one is a const
    // then the left must be a const

    // double dddd = 31;
    // error: wrong data type conversion

    int dddd = 31;
    int *const c_pt = &dddd;

    // int dd_val is ok
    // double dd_val, error: type conversion
    // 
    // const int *const c_pt_c_val <-----> &(const int val)
    //                             ------> &(int val)
    int dd_val = 13.33;
    const int *const c_pt_c = &dd_val;

    return 0;
}