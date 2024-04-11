#include <iostream> 
#include <Windows.h>

void printarr(int arr[],int size) {
    for (int i = 0; i < size; i++) {
        std::cout << arr[i];
    }
}

void bubble(int arr[],int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                arr[j] = arr[j] + arr[j + 1];
                arr[j + 1] = arr[j] - arr[j + 1];
                arr[j] = arr[j] - arr[j + 1];
            }
        }
    }
}


using namespace std;
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int p;
    cout << "Введіть будь ласка число p ";
    cin >> p;
    int* arr = new int[p];

    for (int i = 0; i <= p; i++) {
        cout << "arr[" << i << " ] ";
        cin >> arr[i];
    }

    cout << "Створений масив для сортування: " << endl;
    printarr(arr, p);
    cout << endl;

    bubble(arr, p);

    cout << "Відсортований масив: " << endl;
    printarr(arr, p);

    delete[] arr;
}
