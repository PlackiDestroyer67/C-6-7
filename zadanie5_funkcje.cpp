//5. Napisz wartosc_bezwzgledna, która zwraca wartość bezwzględną liczby całkowitej.

#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;




  
    int wartosc_bezwzgledna(int x){
        if (x < 0) {
            int trzepek = x * -1;
            return trzepek;
        }
        else {
            int trzepek = x * -1;
            return trzepek;
        }
        
      
}




int main() {

    int a;
    cout << "Napisz  liczbe" << endl;
    cin >> a;
    
    
    wartosc_bezwzgledna(a);

    return 0;
}
