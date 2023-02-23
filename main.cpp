#include <iostream>
#include <bitset>

int main() {

    for (int i = 0; i <= 255; i++) {
        std::string binary = std::bitset<8>(i).to_string(); //to binary
        unsigned long decimal = std::bitset<8>(binary).to_ulong(); // to decimal
        std::cout << "code: " << i << " char: " << (char) i << " binary: " << binary << " " << decimal << std::endl;
    }

    return 0;
}
