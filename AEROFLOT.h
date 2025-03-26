#pragma once
#include <iostream>
#include <fstream>
#include <ios>
#include <cstring>
using namespace std;

#include <string.h>

//const int a = 7; //// Константа для размера массива (не используется в классе)
class AEROFLOT // Класс для хранения данных о рейсах
{
    public: //публичный доступ
    char destination[20]=""; // Пункт назначения (строка до 20 символов)   
    int flight_number=0;// Номер рейса (целое число)
    char paircraft_type[10]="";// Тип самолета (строка до 10 символов)
    // Конструкторы:
    AEROFLOT();// Конструктор по умолчанию

    AEROFLOT(const char* n, int f, const char* p);// Конструктор с параметрами

    AEROFLOT(AEROFLOT& m);// Конструктор копирования
    static bool compNumber(AEROFLOT& a, AEROFLOT& b);
    static bool compDestination(AEROFLOT& a, AEROFLOT& b);

    friend ostream& operator<<(ostream& os, const AEROFLOT& m)// Перегрузка операторов для ввода/вывода:    
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