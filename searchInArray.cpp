#include<iostream>
using namespace std;



void minInData(int *arr, int size) {
    int min = arr[0];
    for(int i=1; i<size; i++){
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    cout << "min: " << min << endl;
}

void arrangeArray() {

}
int main() {

    cout << "Enter number of element in your Data : ";
    int n;
    cin >> n;
    int data [100];
    for (int i = 0; i < n; i++)
    {
        cin >> data[i];
    }

    cout << endl;
    minInData(data, n);

    
}