//2. Napisz funkcję iloczyn, która zwraca iloczyn dwóch liczb całkowitych.

    int iloczyn(int a, int b){
    cout << a * b << endl;
    return a * b;
}




int main() {

    int a, b;
    cout << "Napisz pierwsza liczbe" << endl;
    cin >> a;
    
    cout << "napisz druga liczbe " << endl;
    cin >> b;

    iloczyn(a, b);

    return 0;
}
