# include<iostream>

using namespace std;

int main()
{
    int nr;
    cout << "Introduceti un numar intreg : " << endl;
    cin >> nr;
    if(nr >= 90 && nr <= 100)
        cout << "In interval" << endl;
    else
        cout << "Inafara intervalului" << endl;
    return 0;
}
