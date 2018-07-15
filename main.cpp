#include <iostream>

using namespace std;

class temp
{
public:

    float toCelsius(float temp)
    {
        float cTemp;
        cTemp = ((temp - 32) / 1.8);
        return cTemp;
    }

    float toFahrenheit(float temp)
    {
        float fTemp;
        fTemp = ((temp * 1.8 ) + 32);
        return fTemp;
    }
    float toKelvin(float temp)
    {
        float kTemp;
        kTemp = (temp + 273.15);
        return kTemp;
    }
};

int main()
{
    temp temperature;
    int choice;
    cout << "1. Celsius to Fahrenheit\n2. Fahrenheit to Celsius\n3. Celsius to Kelvin" << endl;
    cout << "Select operation: ";
    cin >> choice;
    switch(choice)
    {
    case 1:
        {
            float celsius, fahrenheit;
            cout << "Enter temperature: ";
            cin >> celsius;
            fahrenheit = temperature.toFahrenheit(celsius);
            cout << "The temperature is " << fahrenheit << " F";
            break;
        }
    case 2:
        {
            float celsius, fahrenheit;
            cout << "Enter temperature: ";
            cin >> fahrenheit;
            celsius = temperature.toCelsius(fahrenheit);
            cout << "The temperature is " << celsius << " C";
            break;
        }
    case 3:
        {
            float celsius, kelvin;
            cout << "Enter temperature: ";
            cin >> celsius;
            kelvin = temperature.toKelvin(celsius);
            cout << "The temperature is " << kelvin << " K";
            break;
        }
    default:
        {
            cout << "Incorrect option! Please enter 1 or 2.";
            break;
        }
    }
    return 0;
}
