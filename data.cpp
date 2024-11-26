#include "data.h"
#include <iostream>

// ����������� �� �������������
CData::CData() {
    m_a = new double(0.0); // �������� ���'��� � ������������ �������� 0
    std::cout << "The constructor is called by default" << std::endl;
}

// ����������� � ����������
CData::CData(double a) {
    m_a = new double(a);
    std::cout << "The constructor with the parameter is called" << std::endl;
}

// ����������� ��ﳿ
CData::CData(const CData& other) {
    m_a = new double(*other.m_a); // ������� ��������
    std::cout << "The copy constructor is called" << std::endl;
}

// ����������
CData::~CData() {
    delete m_a; // ��������� ���'���
    std::cout << "The destructor is called" << std::endl;
}

// ����� ��� ������������ ��������
void CData::setA(double a) {
    *m_a = a;
}

// ����� ��� ��������� ��������
double CData::getA() const {
    return *m_a;
}

// ����� ��� �������� ��������
bool CData::checkA(double min, double max) const {
    return (*m_a >= min && *m_a <= max);
}
