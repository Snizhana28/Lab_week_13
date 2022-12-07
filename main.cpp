#include <iostream>
using namespace std;

///Л.тиждень 13. №2.5

template <typename T>T* initArray(int size)
{
    return new T[size];
}
template <typename T>void randArray(T* arr, int size)
{
    for (size_t i = 0; i < size; i++)
    {
        *(arr + i) = rand() % 10;
    }
}
template <typename T>void printArray(T* arr, int size)
{
    for (size_t i = 0; i < size; i++)
    {
        cout << *(arr + i) << "\t";
    }
    cout << endl;
}
template <typename T>void sumaArray(T* arr, int size)
{
    int suma = 0;
    for (size_t i = 0; i < size; i++)
    {
        suma += *(arr + i);
    }
    cout << "Suma : " << suma << endl;
}
template <typename T>void deleteArray(T*& arr)
{
    delete[] arr;
    arr = nullptr;
}


int main()
{
    srand(time(0));
    int size;
    cout << "Enter size->";
    cin >> size;
    auto arr = initArray<int>(size);
    randArray<int>(arr, size);
    printArray<int>(arr, size);
    sumaArray<int>(arr, size);
    deleteArray(arr);
	return 0;
}