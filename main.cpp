# include<iostream>

using namespace std;

int main()
{
    int a,b;
    cout << "Introduceti primul numar " << endl;
    cin >> a;
    cout << "Introduceti al doile numar " << endl;
    cin >> b;
    if(a <= b)
        cout << "Ordine crescatoare " << endl;
    else
        cout << "Ordine descrescatoare " << endl;
    return 0;
}
