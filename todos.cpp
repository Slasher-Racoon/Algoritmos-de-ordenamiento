// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

void insertion_sort(int a[], int length){
    for (int i=1; i<length; i++){
        int key = a[i];
        int j = i -1;
        while( j >= 0 && a[j]> key){
            a[j+1] = a[j];
            j = j-1;
        }
        
        a[j +1]= key;
        
    }
}

void bubble(int a[], int length){
    for (int i=0; i<length; i++){
        for (int j = 0; j<length-1; j++){
         if(a[j]> (a[j+1])){
             int temp = a[j];
             a[j] = a[j+1];
             a[j+1] = temp;
            }   
        }
    }
}

void print(int a[], int length){
    for (int i=0; i<length; i++){
         cout<<a[i]<<" ";
     }
    cout<<"\n ";
}

void select_sort(int a[], int length){
    int minimo;
    int index;
    for (int i = 0; i < length - 1; i++) {
        minimo = a[i];
        index = i;
        for (int j = i + 1; j < length; j++) {
            if (a[j] < minimo) {
                minimo = a[j];
                index = j;
            }
        }
        if (index != i) {
            int temp = a[i];
            a[i] = a[index];
            a[index] = temp;
        }
    }
}

int partition(int a[], int low, int high) {
    int pivot = a[high];
    int i = low - 1;

    for (int j = low; j <= high - 1; j++) {
         if (a[j] < pivot) {
            i++;
            swap(a[i], a[j]);
        }
    }
    
    swap(a[i + 1], a[high]);
    return i + 1;
}

void quickSort(int a[], int low, int high) {
    if (low < high) {
        int pi = partition(a, low, high);
        quickSort(a, low, pi - 1);
        quickSort(a, pi + 1, high);
    }           
}


int main() {
    
    int a[] = {4,5,6,2,3,1,8,9,7,0};
    cout<<"\n"<<"*********lista no organizada************"<<"\n "<<endl;
    int length = sizeof(a)/ sizeof(a[0]) ;
    print(a, length);
    
    cout<<"\n"<<"*********Bubble sort************"<<"\n "<<endl;
    //Bubble sort
    bubble(a, length);
    print(a, length);


    // Insertion sort 

    int b[] = {8,9,1,3,2,4,6,7,5,0};
    
    cout<<"\n"<<"*********lista no organizada************"<<"\n "<<endl;
    print(b, length);
    cout<<"\n"<<"**********Insertion sort ***********"<<"\n "<<endl;
    insertion_sort(b, length );
    print(b, length);

    //selection sort 
    cout<<"\n"<<"*********lista no organizada************"<<"\n "<<endl;
    
    int c[] = {8,5 ,4 ,0, 3, 2, 1, 9, 6 ,7};
    
    print(c, length);
    cout<<"\n"<<"***********select_sort**********"<<"\n "<<endl;
    select_sort(c, length);
    print(c, length);
    
    
    // Quick-Sort
    int d[] = {10,7,8,9,1,5,2,3,4,6,0};
    
    cout<<"\n"<<"*********lista no organizada************"<<"\n "<<endl;
    int lengths = sizeof(d)/ sizeof(d[0]) ;
    
    print(d, lengths);
    
    cout<<"\n"<<"*********quick sort************"<<"\n "<<endl;
    quickSort(d, 0, lengths - 1);
    
    for (int i = 0; i < lengths; i++) {
        cout << d[i] << " ";
    }
    
    
    
    return 0;
}
