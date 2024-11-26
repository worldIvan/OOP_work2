#include "data.h"
#include <iostream>

// Конструктор за замовчуванням
CData::CData() {
    m_a = new double(0.0); // виділяємо пам'ять і встановлюємо значення 0
    std::cout << "The constructor is called by default" << std::endl;
}

// Конструктор з параметром
CData::CData(double a) {
    m_a = new double(a);
    std::cout << "The constructor with the parameter is called" << std::endl;
}

// Конструктор копії
CData::CData(const CData& other) {
    m_a = new double(*other.m_a); // копіюємо значення
    std::cout << "The copy constructor is called" << std::endl;
}

// Деструктор
CData::~CData() {
    delete m_a; // звільняємо пам'ять
    std::cout << "The destructor is called" << std::endl;
}

// Метод для встановлення значення
void CData::setA(double a) {
    *m_a = a;
}

// Метод для отримання значення
double CData::getA() const {
    return *m_a;
}

// Метод для перевірки діапазону
bool CData::checkA(double min, double max) const {
    return (*m_a >= min && *m_a <= max);
}
