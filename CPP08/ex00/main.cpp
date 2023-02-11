#include "easyfind.hpp"

int main()
{
	std::vector<int> vec;
	for (int i = 0; i < 10; i++)
		vec.push_back(i);

	std::cout << easyfind(vec, 3) << " ";
	std::cout << easyfind(vec, 8) << " ";
	std::cout << easyfind(vec, 15) << std::endl;

	std::array<int, 10> arr;
	for (int i = 0; i < 10; i++)
		arr[i] = i;

	std::cout << easyfind(arr, 3) << " ";
	std::cout << easyfind(arr, 8) << " ";
	std::cout << easyfind(arr, 15) << std::endl;

	std::list<int> list;
	for (int i = 0; i < 10; i++)
		list.push_back(i);

	std::cout << easyfind(list, 3) << " ";
	std::cout << easyfind(list, 8) << " ";
	std::cout << easyfind(list, 15) << std::endl;
	
	return (0);
}