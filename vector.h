#pragma once

    template<typename T>
class vector
{
private:
    T* Data=nullptr;

    size_t size=0; //used memory
    size_t capacity=0; // available memory

public:
    vector() //constructor
    {
        ReAlloc(2);
    }

    ~vector(){delete[] Data;}//destructor

    vector &operator=(const vector &a){ //operator=
        if (this==&a)
        {
            return *this;
        }
        Data=a.Data;
        size=a.size;
        capacity=a.capacity;

        return *this;
    }

    void PushBack(const T& value) // add new element to back
    {
        if(size>=capacity)
        {
            ReAlloc(capacity * 2);
        }

        Data[size]=value;
        size++;
    }

    const T& operator[](size_t index)const //access at index
    {
        return Data[index];
    }

    T& operator[](size_t index) //access at index and edit
    {
        return Data[index];
    }

    size_t Size() const {return size;} //size of container

    size_t Capacity() const {return capacity;} //size of capacity

    void assign( size_t count, const T& value ){
        ReAlloc(count);
        for(int i=0;i<=count;i++)
        {
            Data[size]=value;
            size++;
           
        }
    }

    T& front() //access first element
    {
        return Data[0];
    }

    T& back() //access last element
    {
        return Data[size-1];
    }

    const T* data() const //pointer to container
    {
        return Data;
    }

    void shrink_to_fit() //set capacity=size
    {
        capacity=size;
    }

    void reserve( size_t new_cap )// increase the capacity of the vector
    {
        capacity=new_cap;
    }

    bool empty() const //check if container is empty
    {
        if(size==0)
        return true;
        else
        return false;
    }


private:
    void ReAlloc(size_t newCapacity) //increase capacity of container
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




