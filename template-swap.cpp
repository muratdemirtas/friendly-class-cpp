#include <iostream>

template <class T>
//bu  degiskenleri alabilmek icin gosterge kullanıldı.
//T &x, T &y 'yi T x, T y ile denersen farkı anlarsınız.
void swap(T &x, T &y)
{
      T temp_value;
      temp_value = x;
      x = y;
      y = temp_value;
}

int main()
{
    int x1 = 5, y1=10;

    std::cout << "swapdan once x: " << x1 << " y: " << y1 << std::endl;
    swap(x1,y1);

    std::cout << "swapdan sonra x: " << x1 << " y: " << y1 << std::endl;
    return 0;
}
