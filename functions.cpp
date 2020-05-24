#include <iostream>

// using namespace std;

int increment(int x) {
    return x + 100;
}

// double increment(double x) {
//     return x + 1;
// }

// char increment(char x) {
//     return x + 1;
// }

template <typename T>
T increment(T x) {
    return x + 1;
}

template <typename T1, typename T2>
T1 char2int(T2 symbol) {
    return symbol;
}

int main() {
    std::cout << increment(10) << std::endl;
    std::cout << increment<int>(10) << std::endl;
    std::cout << increment<long>(10) << std::endl;
    std::cout << increment(10.5) << std::endl;
    std::cout << increment<float>(10.5) << std::endl;
    std::cout << increment('A') << std::endl;

    std::cout << char2int<int, char>('A') << std::endl;


    return 0;
}
