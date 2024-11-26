#include <iostream>
#include "data.h"

int main() {
    // Тестування класу CData
    CData data1; // виклик конструктора за замовчуванням
    data1.setA(25.5); // встановлюємо значення
    std::cout << "Value:" << data1.getA() << std::endl;

    // Перевірка діапазону
    if (data1.checkA(30.0, 20.0)) {
        std::cout << "Values ​​within range" << std::endl;
    }
    else {
        std::cout << "Value out of range!" << std::endl;
    }

    // Використання конструктора копії
    CData data2 = data1; // копіювання об'єкта
    std::cout << "Copy value: " << data2.getA() << std::endl;

    return 0;
}
