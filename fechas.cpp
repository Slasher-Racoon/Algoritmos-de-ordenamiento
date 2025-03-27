// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

void separar(int f[], int &d , int &m , int &a ){
    d = f[0];
    m = f[1];
    a = f[2];
}

int comparar(int f1[], int f2[]){
    int a,b,c;
    int d,e,f;
    
    separar(f1, a,b,c);
    separar(f2,d,e,f);
    waw
    if((c>f && a>d && b>e)){
        return 1;
    }else if(c==f && a==d && b==e){
        return 0;
    }else{
        return -1;
    }
}



int main() {
    int d, m, a; 
    int f1[] = {1,3,1999};
    int f2[] = {3,4,2000};
    
    comparar(f1, f2);
    
    
 
    return 0;
}
