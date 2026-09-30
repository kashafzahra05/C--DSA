#include <iostream>
using namespace std;

class MaxHeap
{
private:
    int arr[100];
    int size;

public:
    MaxHeap()
    {
        size = 0;
    }

    // Insert
    void insert(int value)
    {
        size++;
        int i = size;

        arr[i] = value;

        // Move upward
        while (i > 1 && arr[i] > arr[i / 2])
        {
            swap(arr[i], arr[i / 2]);
            i = i / 2;
        }
    }

    // Display
    void display()
    {
        for (int i = 1; i <= size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    // Delete maximum/root
    void deleteMax()
    {
        if (size == 0)
        {
            cout << "Heap is empty" << endl;
            return;
        }

        arr[1] = arr[size];
        size--;

        int i = 1;

        // Move downward
        while (i <= size)
        {
            int left = 2 * i;
            int right = 2 * i + 1;
            int largest = i;

            if (left <= size && arr[left] > arr[largest])
                largest = left;

            if (right <= size && arr[right] > arr[largest])
                largest = right;

            if (largest != i)
            {
                swap(arr[i], arr[largest]);
                i = largest;
            }
            else
            {
                break;
            }
        }
    }
};

int main()
{
    MaxHeap h;

    h.insert(50);
    h.insert(30);
    h.insert(40);
    h.insert(10);
    h.insert(20);
    h.insert(35);

    cout << "Max Heap: ";
    h.display();

    h.deleteMax();

    cout << "After Deletion: ";
    h.display();

    return 0;
}