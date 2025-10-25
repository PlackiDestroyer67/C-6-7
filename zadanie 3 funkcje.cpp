//3. Napisz funkcję srednia, która zwraca średnią dwóch liczb zmiennoprzecinkowych.

  
    int srednia(int a, int b){
    cout << a + b / 2 << endl;
    return a + b / 2;
}




int main() {

    int a, b;
    cout << "Napisz pierwsza liczbe" << endl;
    cin >> a;
    
    cout << "napisz druga liczbe " << endl;
    cin >> b;

    srednia(a, b);

    return 0;
}

