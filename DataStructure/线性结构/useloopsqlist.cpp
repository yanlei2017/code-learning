#include <bits/stdc++.h>
using namespace std;
#include "loopsqlist.hpp"
int main(int argc, char const *argv[])
{

    loopsqlist yanleia, yanleib;
    bool creatoka = creatLoopsqlist(&yanleia, 5);
    bool creatokb = creatLoopsqlist(&yanleib, 5);

    bool printaok = printloopsqlist(&yanleia);
    bool printbok = printloopsqlist(&yanleib);

    yanleia = mergeloolSqlist(&yanleia, &yanleib);

    bool printallok = printloopsqlist(&yanleia);

    return 0;
}
