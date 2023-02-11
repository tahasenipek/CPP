#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>

template<typename Stack>
class StackIterator
{
public:
	struct ValueType
	{
		typedef typename Stack::ValueType::type type;
	};

private:
	typename ValueType::type	*m_ptr;

	StackIterator();

public:
	StackIterator(typename ValueType::type *ptr)
		:	m_ptr(ptr)
	{
	}

	StackIterator(const StackIterator &stackiterator)
		:	m_ptr(stackiterator.m_ptr)
	{
	}

	~StackIterator()
	{
	}

	StackIterator &operator=(const StackIterator &stackiterator)
	{
		m_ptr = stackiterator.m_ptr;
		return (*this);
	}

	StackIterator &operator++(void)
	{
		m_ptr++;

		return (*this);
	}
	
	StackIterator operator++(int)
	{
		StackIterator iterator = *this;
		m_ptr++;

		return (iterator);
	}

	StackIterator &operator--(void)
	{
		m_ptr--;

		return (*this);
	}
	
	StackIterator operator--(int)
	{
		StackIterator iterator = *this;
		m_ptr--;

		return (iterator);
	}

	typename ValueType::type *operator->(void)
	{
		return (m_ptr);
	}

	typename ValueType::type &operator*(void)
	{
		return (*m_ptr);
	}

	bool operator==(const StackIterator &other) const
	{
		return (m_ptr == other.m_ptr);
	}

	bool operator!=(const StackIterator &other) const
	{
		return (m_ptr != other.m_ptr);
	}
};

template<typename T>
class MutantStack : public std::stack<T>
{
public:
	struct ValueType
	{
		typedef T type;
	};
	struct StkIterator
	{
		typedef StackIterator< MutantStack<T> > type;
	};

public:
	MutantStack() {};
	MutantStack(const MutantStack &mutantstack)
	{
		*this = mutantstack;
	}
	~MutantStack() {};
	MutantStack &operator=(const MutantStack &mutantstack)
	{
		std::stack<T>::operator=(mutantstack);
		return (*this);
	}

	typedef typename StkIterator::type iterator;

	iterator	begin()
	{
		return(&(this->top()) - this->size() + 1);
	}

	iterator	end()
	{
		return(&(this->top()) + 1);
	}
};


#endif