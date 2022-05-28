#pragma once

    template<typename T>
class vector
{
private:
    T* Data=nullptr;

    size_t size=0; //used memory
    size_t capacity=0; // available memory

public:
    vector()
    {
        // allocate
        ReAlloc(2);
    }

   // ~vector();
    void PushBack(const T& value)
    {
        if(size>=capacity)
        {
            ReAlloc(capacity * 2);
        }

        Data[size]=value;
        size++;
    }

    const T& operator[](size_t index)const
    {
        return Data[index];
    }

    T& operator[](size_t index)
    {
        return Data[index];
    }

    size_t Size() const {return size;}

private:
    void ReAlloc(size_t newCapacity)
    {

        T* newBlock = new T[newCapacity];

        if(newCapacity<size)
        {
            size=newCapacity;
        }   

        for(size_t i=0;i<size;i++)
        {
            newBlock[i]=Data[i];
        }
        delete[] Data;
        Data=newBlock;
        capacity=newCapacity;
    }
};




