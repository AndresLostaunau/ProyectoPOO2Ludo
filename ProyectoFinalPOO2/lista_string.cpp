#include <iostream>
using namespace std;

template<class T>
class ListaD {
private:
    int const CAPACITY = 1;
    int reserved;
    int size;
    T* items;
public:
    ListaD() {
        initialize();
    }

    void initialize() {
        reserved = CAPACITY;
        size = 0;
        items = new T[reserved];
    }

    void insert(T item) {
        if (size == reserved) {
            reserve();
        }
        items[size] = item;
        size++;
    }

    void reserve() {
        reserved += CAPACITY;
        T* array = new T[reserved];
        for (int i = 0; i < size; i++) {
            array[i] = items[i];
        }
        delete[] items;
        items = array;
    }

    T getItem(int index) {
        return items[index];
    }
    void printItems() {
        for (int i = 0; i < size; i++)
            cout << "list[" << i << "]= " << items[i] << endl;
    }

    T remove(int index) {
        T a = items[index];
        for (int i = index; i < size; ++i) {
            items[i] = items[i + 1];
        };
        size--;
        return a;
    }

    void removeAll()
    {
        delete[] items;
        initialize();
    }



    int find(T item) {
        for (int i = 0; i < size; i++) {
            if (items[i]==item) {
                return i;
            }
        }
        return -1;
    }

    bool exist(T item) {
        return find(item) != -1;
    }

    int getSize() {
        return size;
    }

    int getReserved(){
        return reserved;
    }

    ~ListaD() {
        delete[] items;

    }
};

