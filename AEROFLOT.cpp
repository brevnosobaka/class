#include "AEROFLOT.h"
AEROFLOT::AEROFLOT() : flight_number(0) {
    strcpy_s(destination, "");
    strcpy_s(paircraft_type, "");
}

AEROFLOT::AEROFLOT(const char* n, int f, const char* p)
{
    strcpy_s(destination, n);
    strcpy_s(paircraft_type, p);
    flight_number = f;
}

AEROFLOT::AEROFLOT(AEROFLOT& m) {
    strcpy_s(destination, m.destination);
    strcpy_s(paircraft_type, m.paircraft_type);
    flight_number = m.flight_number;
}

bool AEROFLOT::compNumber(AEROFLOT& a, AEROFLOT& b)
{
    return a.flight_number<b.flight_number;
}

bool AEROFLOT::compDestination(AEROFLOT& a, AEROFLOT& b)
{
    
    return strcmp(a.destination, b.destination) < 0;
    
}
