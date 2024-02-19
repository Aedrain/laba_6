```cpp
/**
 * @file mycomplex.h
 * @brief ������������ ���� � ����������� ������ Complex.
 */

#ifndef _MY_COMPLEX_H_
#define _MY_COMPLEX_H_

#include <iostream>

 /**
  * @brief ����� Complex ������������ ����������� �����.
  */
    class Complex {
    double Re; /**< �������������� ����� ������������ �����. */
    double Im; /**< ������ ����� ������������ �����. */

    public:
        /**
         * @brief ����������� ������ Complex.
         * @param aRe �������������� ����� ������������ �����.
         * @param aIm ������ ����� ������������ �����.
         */
        Complex(double aRe = 0, double aIm = 0);

        /**
         * @brief ����������� ����������� ������ Complex.
         * @param aRval ������ ����������� ����� ��� �����������.
         */
        Complex(const Complex&);

        /**
         * @brief ���������� ������ Complex.
         */
        ~Complex();

        /**
         * @brief ������������� �������� �������������� � ������ ������ ������������ �����.
         * @param aRe �������������� ����� ������������ �����.
         * @param aIm ������ ����� ������������ �����.
         */
        void Set(double aRe, double aIm = 0);

        /**
         * @brief �������� ���������� � ���� double ��� ������ Complex.
         * @return ������ (���������� ��������) ������������ �����.
         */
        operator double();

        /**
         * @brief ������������ ���������� �������� (������) ������������ �����.
         * @return ������ ������������ �����.
         */
        double abs();

        /**
         * @brief �������� ����� ������������ ����� �� ������.
         * @param stream ������� �����.
         * @param a ������ Complex ��� �����.
         * @return ������� ����� ����� �������� �����.
         */
        friend istream& operator>>(istream&, Complex&);

        /**
         * @brief �������� ������ ������������ ����� � �����.
         * @param stream �������� �����.
         * @param a ������ Complex ��� ������.
         * @return �������� ����� ����� �������� ������.
         */
        friend ostream& operator<<(ostream&, const Complex&);

        /**
         * @brief �������� �������� ����������� �����.
         * @param aRval ������ ����������� �����.
         * @return ��������� �������� ����������� �����.
         */
        Complex operator+(const Complex&);

        /**
         * @brief �������� ��������� ����������� �����.
         * @param aRval ������ ����������� �����.
         * @return ��������� ��������� ����������� �����.
         */
        Complex operator-(const Complex&);

        /**
         * @brief �������� �������� ������������ ����� � ������������� �����.
         * @param aval ������������ �����.
         * @return ��������� �������� ������������ � ������������� �����.
         */
        Complex operator+(const double&);

        /**
         * @brief �������� �������� ������������� ����� � ������������ �����.
         * @param aval ������������ �����.
         * @param aRval ����������� �����.
         * @return ��������� �������� ������������� � ������������ �����.
         */
        friend Complex operator+(const double&, const Complex&);

        /**
         * @brief �������� ��������� ������������� ����� �� ������������ �����.
         * @param aRval ������������ �����.
         * @return ��������� ��������� ������������� ����� �� ������������ �����.
         */
        Complex operator-(const double&);

        /**
         * @brief �������� ��������� ������������ ����� �� ������������� �����.
         * @param aval ������������ �����.
         * @param aRval ����������� �����.
         * @return ��������� ��������� ������������ ����� �� ������������� �����.
         */
        friend Complex operator-(const double&, const Complex&);

        /**
         * @brief �������� ��������� ����������� �����.
         * @param aRval ������ ����������� �����.
         * @return ��������� ��������� ����������� �����.
         */
        Complex operator*(const Complex&);

        /**
         * @brief �������� ��������� ������������ ����� �� ������������ �����.
         * @param aRval ������������ �����.
         * @return ��������� ��������� ������������ ����� �� ������������ �����.
         */
        Complex operator*(const double&);

        /**
         * @brief �������� ��������� ������������� ����� �� ����������� �����.
         * @param aval ������������ �����.
         * @param aRval ����������� �����.
         * @return ��������� ��������� ������������� ����� �� ����������� �����.
         */
        friend Complex operator*(const double&, const Complex&);

        /**
         * @brief �������� ������� ������������ ����� �� ������������ �����.
         * @param aRval ������������ �����.
         * @return ��������� ������� ������������ ����� �� ������������ �����.
         */
        Complex operator/(const double&);

        /**
         * @brief �������� �������� � ������������� ������������ �����.
