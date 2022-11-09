#include <iostream>

enum class month {
    jan = 1, feb = 2, mar = 3
};

enum class flag {
    A = 2, B = 8
};

int i = static_cast<int> (month::mar);

int main () {
    std::cout << i << '\n';
}
