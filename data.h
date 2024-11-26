#pragma once
#ifndef DATA_H
#define DATA_H

class CData {
private:
    double* m_a; // �������� �� ����� ���� double

public:
    // ����������� 
    CData();

    // ����������� � ����������
    CData(double a);

    // ����������� ��ﳿ
    CData(const CData& other);

    // ����������
    ~CData();

    // ����� ��� ������������ ��������
    void setA(double a);

    // ����� ��� ��������� ��������
    double getA() const;

    // ����� ��� �������� ��������
    bool checkA(double min, double max) const;
};

#endif
