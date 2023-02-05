#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	 {
        Animal *arr[10];
		for (int i= 0; i < 10; i++)
		{
			if (i % 2 == 0)
				arr[i] = new Dog();
			else
				arr[i] = new Cat();
		}

        for (int i = 9; i >= 0; i--)
            delete arr[i];
    }
 	//system ("Leaks zoo");
    return 0;
}