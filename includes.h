#ifndef INCLUDES_H
#define INCLUDES_H


#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
#include <bitset>
#include <random>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <iomanip>
using namespace std;

struct colorful
{
    char font, background;
    colorful(string text = "  "){font=text[0]; background=text[1];}
};

void wait_seconds(int wait_time)
{
    long *start_time = new long;
    *start_time = time(0);

    while ((*start_time + wait_time) > time(0))
    {};

    delete start_time;
}

void wait_fast(int miliseconds)
{
    clock_t t = clock();
    miliseconds *= 10000;
    while(t + miliseconds > clock())
    {};
}

ostream& operator<<(ostream& os, const colorful color)
{
    os << "\033[";
    switch (color.font) {
    case 'r': os << "31"; break;
    case 'g': os << "32"; break;
    case 'o': os << "33"; break;
    case 'b': os << "34"; break;
    case 'p': os << "35"; break;
    case 'c': os << "36"; break;
    case 'y': os << "37"; break;
    case 'k': os << "30"; break;
    default: os << "39"; break;
    }
    os << "m\033[";
    switch (color.background) {
    case 'r': os << "41"; break;
    case 'g': os << "42"; break;
    case 'o': os << "43"; break;
    case 'b': os << "44"; break;
    case 'p': os << "45"; break;
    case 'c': os << "46"; break;
    case 'y': os << "47"; break;
    case 'k': os << "40"; break;
    default: os << "49"; break;
    }
    os << "m" ;
    return os;
}



#endif // INCLUDES_H
