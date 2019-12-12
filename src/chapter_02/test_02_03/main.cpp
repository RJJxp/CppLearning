#include <iostream>


int main(int argc, char* argv[]) {
    int iii = -32;
    unsigned ccc = 10;
    std::cout << iii + iii << std::endl;
    std::cout << iii + ccc << std::endl;
    std::cout << ccc + iii << std::endl;
    
    // dead loop
    // int count = 0;
    // for(unsigned char f = 10; f >= 0 && count < 100000; --f) {
    //     std::cout << "f is " << f << std::endl;
    //     count ++;
    //     std::cout << "count is " << count << std::endl;
    // }

    std::cout << "backslash\\  with 1-3 Octal digits" << std::endl;
    std::cout << "backslash\\x with hex digits" << std::endl;
    std::cout << "\7" << std::endl;
    std::cout << "\115" << std::endl;
    std::cout << "\x4d" << std::endl;
    std::cout << "Who goes with F\145rgus?\102" << std::endl;
    return 0;
}