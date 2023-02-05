#include <iostream>
    
    struct Data
    {
        int x;
        int y;
        char c;
        bool b;
    };

    uintptr_t   serialize(Data *ptr)
    {
        return (reinterpret_cast<uintptr_t>(ptr));
    }

    Data    *deserilaize(uintptr_t raw)
    {
        return (reinterpret_cast<Data *>(raw));
    }

int main()
{
    Data orinaldData;
    Data desetializedData;

    orinaldData.b = true;
    orinaldData.c = 'c';
    orinaldData.x = 3;
    orinaldData.y = 2;

    uintptr_t serialized = serialize(&orinaldData);
    if (orinaldData.c != desetializedData.c)
        std::cout << "Serialization is not succesful!!" << '\n';
    Data *deserialize = deserilaize(serialized);
    if (orinaldData.c != deserialize->c)
        std::cout << "2.Serialization is not succesful!!" << '\n';
    else
        std::cout << "Succesfull!!" << '\n';
    
    
    std::cout << "Seriliazation Finished !!" << '\n';
}