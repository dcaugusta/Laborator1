# include<iostream>

using namespace std;

int main()
{
    int v;
    cout << "Introduceti varsta: " << endl;
    cin >> v;
    if(v <= 18)
        cout << "Persoana minora" << endl;
    else
        cout << "Persoana majora" << endl;
    return 0;
}
