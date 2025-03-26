#pragma once
#include <iostream>
#include <fstream>
#include <ios>
#include <cstring>
using namespace std;

#include <string.h>

//const int a = 7; //// ��������� ��� ������� ������� (�� ������������ � ������)
class AEROFLOT // ����� ��� �������� ������ � ������
{
    public: //��������� ������
    char destination[20]=""; // ����� ���������� (������ �� 20 ��������)   
    int flight_number=0;// ����� ����� (����� �����)
    char paircraft_type[10]="";// ��� �������� (������ �� 10 ��������)
    // ������������:
    AEROFLOT();// ����������� �� ���������

    AEROFLOT(const char* n, int f, const char* p);// ����������� � �����������

    AEROFLOT(AEROFLOT& m);// ����������� �����������
    static bool compNumber(AEROFLOT& a, AEROFLOT& b);
    static bool compDestination(AEROFLOT& a, AEROFLOT& b);

    friend ostream& operator<<(ostream& os, const AEROFLOT& m)// ���������� ���������� ��� �����/������:    
        {
        os<<m.destination<<" "<<m.flight_number<<" "<<m.paircraft_type<<" ";
        return os;
        } 
    
    friend istream& operator>>(istream& is, AEROFLOT& m)
        {
        is >> m.destination >> m.flight_number >> m.paircraft_type;
        return is;
        }
   
    bool operator<(const AEROFLOT& m)
    {
        return strcmp(destination, m.destination);
    }

    bool operator>(const AEROFLOT& m)
    {
        return strcmp(destination, m.destination);
    }
};