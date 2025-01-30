#include <iostream>

using namespace std;

class Assignment1
{
private:
    float celcius;
    float fahrenheit;

public:
    Assignment1()
    {
        celcius = 0.0;
        fahrenheit = 0.0;
    }

    void celciusInput()
    {
        cout << "Enter the temperature in Celcius : ";
        cin >> celcius;
    }

    void calculateF()
    {
        fahrenheit = 1.8 * celcius + 32.0;
        cout << "Temperature in Fahrenheit : " << fahrenheit << endl;
    }
};

int main()
{
    Assignment1 obj;

    obj.celciusInput();
    obj.calculateF();

    return 0;
}