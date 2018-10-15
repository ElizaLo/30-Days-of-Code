#include <bits/stdc++.h>

using namespace std;


int main()
{
    double meal_cost;
    cin >> meal_cost;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int tip_percent;
    cin >> tip_percent;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int tax_percent;
    cin >> tax_percent;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    double tip = meal_cost * tip_percent / 100;
    double tax = meal_cost * tax_percent / 100;
    int total_cost = round(meal_cost + tip + tax);

    cout << total_cost;

    return 0;
}
