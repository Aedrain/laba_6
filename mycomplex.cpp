
/**
 * @file mycomplex.cpp
 * @brief ���������� ������ Complex.
 */

#include <iostream>
#include <cmath>
#include "mycomplex.h"

 /**
  * @brief ����������� ������ Complex.
  * @param aRe �������������� ����� ������������ �����.
  * @param aIm ������ ����� ������������ �����.
  */
Complex::Complex(double aRe, double aIm) {
    Re = aRe;
    Im = aIm;
}

/**
 * @brief ����������� ����������� ������ Complex.
 * @param aRval ������ ����������� ����� ��� �����������.
 */
Complex::Complex(const Complex& aRval) {
    Re = aRval.Re;
    Im = aRval.Im;
}

/**
 * @brief ���������� ������ Complex.
 * ������������� �������������� � ������ ����� � ����.
 */
Complex::~Complex() {
    Re = 0.0;
    Im = 0.0;
}

/**
 * @brief ������������� �������� �������������� � ������ ������ ������������ �����.
 * @param aRe �������������� ����� ������������ �����.
 * @param aIm ������ ����� ������������ �����.
 */
void Complex::Set(double aRe, double aIm) {
    Re = aRe;
    Im = aIm;
}

/**
 * @brief �������� ���������� � ���� double ��� ������ Complex.
 * @return ������ (���������� ��������) ������������ �����.
 */
Complex::operator double() {
    return abs();
}

/**
 * @brief ������������ ���������� �������� (������) ������������ �����.
 * @return ������ ������������ �����.
 */
double Complex::abs() {
    return sqrt(Re * Re + Im * Im);
}

// ... ������ ������ � ��������� ...

/**
 * @brief �������� ����� ������������ ����� �� ������.
 * @param stream ������� �����.
 * @param a ������ Complex ��� �����.
 * @return ������� ����� ����� �������� �����.
 */
istream& operator>>(istream& stream, Complex& a) {
    char tmp[256];
    stream >> a.Re >> a.Im >> tmp;
    return stream;
}

/**
 * @brief �������� ������ ������������ ����� � �����.
 * @param stream �������� �����.
 * @param a ������ Complex ��� ������.
 * @return �������� ����� ����� �������� ������.
 */
ostream& operator<<(ostream& stream, Complex& a) {
    stream << a.Re;
    if (!(a.Im < 0)) {
        stream << '+';
    }
    stream << a.Im << 'i';
    return stream;
}