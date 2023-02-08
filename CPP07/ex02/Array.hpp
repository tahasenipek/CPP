#ifndef ARRAY_HPP
#define ARRAY_HPP

#include "exception"
#include "iostream"

template <typename T>
class Array
{
    public:
        Array() : data_(nullptr), size_(0){};

        Array(unsigned int n): size_(n)
        {
            data_ = new T[n];
        }

        Array (const Array<T> &other) : size_(other.size_)
        {
            data_ = new T[size_];
            for (unsigned int i = 0; i < size_; i++)
            {
                data_[i] = other.data_[i];
            }
        }
        Array<T> &operator=(const Array<T> &other)
        {
            if (this != &other)
            {
                delete[] data_;
                size_ = other.size_;
                data_ = new T[size_];
                for(unsigned int i = 0; i < size_; i++)
                {
                    data_[i] = other.data_[i];
                }
            }
            return *this;
        }
        ~Array() {delete[] data_;}

        T &operator[](unsigned int index)
        {
            if (index >= size_)
            {
                throw std::out_of_range("Index out of bounds");
            }
            return data_[index];
        }

        unsigned int size() const {return size_;}
    private :
        T *data_;
        unsigned int size_;
};

#endif