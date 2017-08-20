#include <iostream>

template <class T>
T doCompare(T x, T y)
{
    //kontrol et eğer x y den büyük ise x'i
    //küçük ise y'yi döndür.
    return (x > y ) ? x : y;
}

int main()
{
    int x1 = 5, y1=10;
    float x2 = 4.331 , y2 = 4.330;
    char x3 = 'c',y3 = 'b';

    std::cout << "iki integer karsilastiriliyor" << std::endl;
    std::cout << "Sonuc: " << doCompare(x1,y1) << " büyüktür" << std::endl;

    std::cout << "iki float karsilastiriliyor" << std::endl;
    std::cout << "Sonuc: " << doCompare(x2,y2) << " büyüktür" << std::endl;

    std::cout << "iki karakter karsilastiriliyor" << std::endl;
    std::cout << "Sonuc: " << doCompare(x3,y3) << " büyüktür" << std::endl;
}
