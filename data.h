#pragma once
#ifndef DATA_H
#define DATA_H

class CData {
private:
    double* m_a; // вказівник на змінну типу double

public:
    // Конструктор 
    CData();

    // Конструктор з параметром
    CData(double a);

    // Конструктор копії
    CData(const CData& other);

    // Деструктор
    ~CData();

    // Метод для встановлення значення
    void setA(double a);

    // Метод для отримання значення
    double getA() const;

    // Метод для перевірки діапазону
    bool checkA(double min, double max) const;
};

#endif
