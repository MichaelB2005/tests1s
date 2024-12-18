#include <iostream>
#include <iomanip>
using namespace std;


int main() {
    long long number;
    
    cout << "Введите целое число типа long long: ";
    cin >> number;

    // Указатель на число
    unsigned char* bytePointer = reinterpret_cast<unsigned char*>(&number);

    cout << "Содержимое каждого байта числа " << number << ":\n";
    
    // Выводим каждый байт
    for (size_t i = 0; i < sizeof(long long); ++i) {
        cout << "Байт "  << i << ": "  << setfill('0') << static_cast<int>(bytePointer[i])  << endl;
    }

    return 0;
}


