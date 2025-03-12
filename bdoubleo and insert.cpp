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


int main() {
    
    int a[] = {4,5,6,2,3,1,8,9,7,0};
    
    int length = 10;
    
    for (int i=0; i<length; i++){
         cout<<a[i]<<" "<<endl;
     }
    
    cout<<"\n"<<"*********************"<<"\n "<<endl;
    //Bubble sort
    for (int i=0; i<length; i++){
        for (int j = 0; j<length-1; j++){
         if(a[j]> (a[j+1])){
             int temp = a[j];
             a[j] = a[j+1];
             a[j+1] = temp;
            }   
        }
    }
    for (int i=0; i<length; i++){
         cout<<a[i]<<" "<<endl;
     }

    // Insertion sort 
    
    cout<<"\n"<<"*********************"<<"\n "<<endl;
    
    
    
    int b[] = {4,5,6,2,3,1,8,9,7,0};
    insertion_sort(b, length );
    
     for (int i=0; i<length; i++){
         cout<<a[i]<<" "<<endl;
     }

    return 0;
}
