#include "Base.hpp"

class A : public Base{};
class B : public Base{};
class C : public Base{};

Base    *generate(void)
{
    srand((unsigned) time(NULL));

	int random = rand() % 3;

    if (random == 0)
        return (new A);
    else if (random == 1)
        return (new B);
    else
        return (new C);
}

void    identify(Base *p)
{
    if (dynamic_cast<A*>(p))
        std::cout << "A" << '\n';
    else if (dynamic_cast<B*>(p))
        std::cout << "B" << '\n';
    else if (dynamic_cast<C*>(p))
        std::cout << "C" << '\n';

}

void    identify(Base &p)
{
    identify(&p);
}



int main()
{
    Base *p = generate();
    identify(p);

    delete p;
    return 0;
}