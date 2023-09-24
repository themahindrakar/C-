#include <iostream>

template <class T>
class Array {
protected:
    size_t size;
    T* DynamicArray;
public:
    Array() : size( 0 ), DynamicArray( nullptr ) {}

    Array(size_t s) : size(s) {
        DynamicArray = new T[size];
        for ( size_t i = 0; i < size; i++) {
            std::cout << "Element " << i+1 << ": ";
            std::cin >> DynamicArray[i];

        }
    }

    void coutArray() const {
        for ( size_t i = 0; i < size; i++) {
            std::cout << DynamicArray[i] << " ";
        }
    }

    ~Array() {
        delete[]DynamicArray;
    }

    const T * getMin() const 
    {
        T *min = DynamicArray;

        for ( size_t i = 1; i < size; i++ ) 
        {
            if ( DynamicArray[i] < *min ) min = DynamicArray + i;
        }

        return min;
    }
};

int main() 
{
    Array<int> a( 5 );

    const int *min = a.getMin();

    if ( min != nullptr ) std::cout << "The minimum is equal to " << *min << '\n';

    return 0;
}