#include <iostream>
//Ethan Ma, Variable assignment, 2/11/26
using namespace std;

int main() {
    string s;
    cout << "Type any word" << endl;
    getline (cin, s);
    cout << s << endl;

    int int1;
    int int2;
    int int3;
    cout << "Enter a integer" << endl;
    cin >> int1;
    cout << "Enter another integer" << endl;
    cin >> int2;
    cout << "Enter another integer" << endl;
    cin >> int3;
    cout << int1*int2*int3;

    cout << "\n\nShopping calculator" << endl;;
    int items[3];
    int cost1 = 1;
    int cost2 = 2;
    int cost3 = 3;
    cout << "Enter amount bought of item 1, cost is $1 per item 1" << endl;
    cin >> items[0];
    cout << "Enter amount bought of item 2, cost is $2 per item 2" << endl;
    cin >> items[1];
    cout << "Enter amount bought of item 3, cost is $3 per item 3" << endl;
    cin >> items[2];
    cost1 = items[0]*cost1;
    cost2 = items[1]*cost2;
    cost3 = items[2]*cost3;
    cout << "Total bill is $" << cost1+cost2+cost3 << endl;

    cout << "\n\nWeather Report" << endl;;
    string name;
    int temp;
    string weather;
    int humidity;
    cout << "Enter name of city" << endl;
    cin.ignore();
    getline (cin, name);
    cout << "Enter the temperature as an integer" << endl;
    cin >> temp;
    cout << "Describe the current weather" << endl;
    cin.ignore();
   getline (cin, weather);
    cout << "Enter the humidity as an integer" << endl;
    cin >> humidity;
    cout << "It is " << temp << " degrees and " << humidity << "% humidity in the city of " << name << ". The current weather condition is described as: \"" << weather << "\"" << endl;

    cout << "\n\nPizza order" << endl;;
    int diameter;
    int toppings;
    int fee = 5;
    int pizzaCost;
    double tip;
    double cost;
    cout << "Enter diameter in inches of pizza ($1 per inch)" << endl;
    cin >> diameter;
    cout << "Enter the number of toppings (1$ per topping)" << endl;
    cin >> toppings;
    cout << "Enter the percent tip" << endl;
    cin >> tip;
    pizzaCost = diameter + toppings + fee;
    tip = tip/100+1;
    cost = pizzaCost*tip;
    cout << "Cost of order is: $" << cost << endl;
    return 0;
}