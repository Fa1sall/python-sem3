#include <iostream>
using namespace std;

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }
}
void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}
void merge(int arr[], int left, int middle, int right) {
    int n1 = middle - left + 1;
    int n2 = right - middle;
    int leftArray[n1];
    int rightArray[n2];

    for (int i = 0; i < n1; i++) leftArray[i] = arr[left + i];
    for (int i = 0; i < n2; i++) rightArray[i] = arr[middle + 1 + i];
    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (leftArray[i] <= rightArray[j]) {
            arr[k] = leftArray[i];
            i++;
        } else {
            arr[k] = rightArray[j];
            j++;
        }
        k++;
    }
    while (i < n1) {
        arr[k] = leftArray[i];
        i++;
        k++;
    }
    while (j < n2) {
        arr[k] = rightArray[j];
        j++;
        k++;
    }
}
void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        int middle = left + (right - left) / 2;
        mergeSort(arr, left, middle);
        mergeSort(arr, middle + 1, right);
        merge(arr, left, middle, right);
    }
}
int main() {
	cout << "Implementing selection sort, insertion sort and merge sort..."<<endl;
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int selectionSorted[n];
    copy(arr, arr + n, selectionSorted);
    selectionSort(selectionSorted, n);
    int insertionSorted[n];
    copy(arr, arr + n, insertionSorted);
    insertionSort(insertionSorted, n);

    int mergeSorted[n];
    copy(arr, arr + n, mergeSorted);
    mergeSort(mergeSorted, 0, n - 1);
    cout << "Selection Sort Result: ";
    for (int i = 0; i < n; i++) {
        cout << selectionSorted[i] << " ";
    }
    cout << endl;
    cout << "Insertion Sort Result: ";
    for (int i = 0; i < n; i++) {
        cout << insertionSorted[i] << " ";
    }
    cout << endl;

    cout << "Merge Sort Result: ";
    for (int i = 0; i < n; i++) {
        cout << mergeSorted[i] << " ";
    }
    cout<<"\n------Done By:-------"<<endl;
    cout<<"Faisal Irfan"<<endl;
    cout<<"220071601063"<<endl;
    cout<<"B.Tech CSE - A"<<endl;
    return 0;
}
