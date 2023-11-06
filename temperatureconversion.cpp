#include <iostream> 

using namespace std;

int main(){
    while (true){
        double temp;
        char unit;

        cout << "***** Temperature Converter *****" << endl;
        cout << "F = Fahrenheit" << endl;
        cout << "C = Celsius" << endl;
        cout << "K = Kelvin" << endl;
        cout << "What unit would you like to convert to? ";
        cin >> unit; 

        if(unit == 'F' || unit == 'f'){
            cout << "Enter the temperature in Celsius: ";
            cin >> temp;
            temp = (temp * 1.8) + 32.0;
            cout << "temperature is: " << temp << "F" << endl;
        }
        else if (unit == 'C' || unit == 'c'){
            cout << "Enter the temperature in Fahrenheit: ";
            cin >> temp;
            temp = (temp - 32.0) / 1.8;
            cout << "temperature is: " << temp << "C" << endl;
        }
        else{
            cout << "Please enter C or F" << endl;
        }
    }

return 0;
}