#include <iostream>
using namespace std;
int main(){
    string greet;
    cout << "chose Mr. / Mrs. / Miss. :" << endl;
    cin >> greet;
    string name;

    cin.ignore();
    cout << "What is your name?" << endl;
    getline(cin,name);
    
    int age;
    cout << "What is your age?" << endl;
    cin >> age;
    string website = "https://parivahan.gov.in/" ;

    if(age>=18){
        cout << greet << name << ", you are eligible for driving license." << endl;
        cout << website << endl;
    } 
    return 0;
}