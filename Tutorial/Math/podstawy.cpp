#include <iostream>
#include <cmath>

int main()
{
    double  x = 3.14;
    double  y = 4;
    double  max, min, p, sq, ab, ro, ce, flo;
    
    max = std::max(x,y);
    min = std::min(x,y);
    // potegowanie
    p = pow(2, 4);
    // pierwiastkowanie
    sq = sqrt(9); 
    // wartosc absolutna
    ab = abs(-1337);
    // zaokrąglanie
    ro = round(x);
    //ZAWSZE zaokrąglanie w gore
    ce = ceil(x); 
    // zawsze zaokrąglanie w dol
    flo = floor(x); 
    
    std::cout << x << '\n';
    std::cout << y << '\n';
    std::cout << '\n' << '\n';
    std::cout << "_____________________________________________" << std::endl;
    std::cout << "Power: " << p << std::endl;
    std::cout << "Square: " << sq << std::endl;
    std::cout << "Absolut value: " << ab << std::endl;
    std::cout << "Rounded value: " << ro << std::endl;
    std::cout << "Value rounded up: " << ce << std::endl;
    std::cout << "Value rounded down: " << flo << std::endl;

    return 0;
}