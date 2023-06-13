#include "PmergeMe.hpp"

PmergeMe::PmergeMe(int ac, char** av)
{
    srand(time(NULL));
    for (int i = 1; i < ac; ++i)
    {
        int value = atoi(av[i]);
        if (value <= 0)
        {
            std::cerr << "Error: Invalid input value \"" << av[i] << "\". Only positive integers are allowed." << std::endl;
            exit(1);
        }
        inputDeque.push_back(value);
        inputList.push_back(value);
    }

    std::cout << "Before: ";
    DisplayHelper<std::deque<int> >::display(inputDeque);

    clock_t start1 = clock();
    mergeInsertSort(inputDeque);
    clock_t end1 = clock();
    double time1 = static_cast<double>(end1 - start1) / CLOCKS_PER_SEC * 1000;

    clock_t start2 = clock();
    mergeInsertSort(inputList);
    clock_t end2 = clock();
    double time2 = static_cast<double>(end2 - start2) / CLOCKS_PER_SEC * 1000;

    std::cout << "After: ";
    DisplayHelper<std::deque<int> >::display(inputDeque);

    std::cout << "Time to process a range of " << inputDeque.size() << " elements with std::deque container: " << time1 << " us" << std::endl;
    std::cout << "Time to process a range of " << inputList.size() << " elements with std::list container: " << time2 << " us" << std::endl;

    if (inputDeque == std::deque<int>(inputList.begin(), inputList.end()))
        std::cout << "The sorted sequences are equal." << std::endl;
    else
        std::cout << "The sorted sequences are not equal." << std::endl;
}

PmergeMe::PmergeMe(const PmergeMe& other)
{
    // Copy constructor implementation
    inputDeque = other.inputDeque;
    inputList = other.inputList;
}

PmergeMe& PmergeMe::operator=(const PmergeMe& other)
{
    if (this != &other)
    {
        // Assignment operator implementation
        inputDeque = other.inputDeque;
        inputList = other.inputList;
    }
    return *this;
}

PmergeMe::~PmergeMe()
{
    // Destructor implementation
}

template <typename Container>
void PmergeMe::mergeInsertSort(Container& arr)
{
    typename Container::iterator it1, it2;
    for (it1 = arr.begin(); it1 != arr.end(); ++it1)
    {
        int temp = *it1;
        it2 = it1;
        while (it2 != arr.begin() && *(std::prev(it2)) > temp)
        {
            *it2 = *(std::prev(it2));
            std::advance(it2, -1);
        }
        *it2 = temp;
    }
}