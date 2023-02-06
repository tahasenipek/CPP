#include "iter.hpp"


class Awesome
{
public:
Awesome( void ) : _n (42) { return; } 
int get(void) const { return this->_n; } 
private:
int _n;
};

std::ostream &operator<<(std::ostream &o, Awesome const &rhs) { o << rhs.get(); return o;}


int main()
{
    int tab[] = { 0, 1, 2, 3, 4 };
    Awesome tab2[5];

    iter(tab, 5, print);
    iter(tab2, 5, print);

    return 0;
}


/* int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int len = sizeof(arr) / sizeof(arr[0]);
    iter(arr, len, print);
    return 0;
} */