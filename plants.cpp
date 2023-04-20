#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int numberOfPlants;
    int temperature;
    double endOfWeek;

    cout <<  "Hello how many plants are we starting with? \n";
    cin >> numberOfPlants;

    double unsoldPlants = numberOfPlants;
    
    for (int day = 1; day <= 7; day++){
    cout << "Temperature for day " << day <<": ";
    cin >> temperature;
    if (temperature < 40)
         unsoldPlants = unsoldPlants - (unsoldPlants * 0.1);
         
    else if ((temperature >= 40) && (temperature < 60))
         unsoldPlants = unsoldPlants - (unsoldPlants * 0.3);
         
    else if ((temperature >= 60) && (temperature < 70 ))
         unsoldPlants = unsoldPlants - (unsoldPlants * 0.5);
         
    else if ((temperature >= 70) && (temperature < 80))
         unsoldPlants = unsoldPlants - (unsoldPlants * 0.6);
         
    else if (temperature >= 80)
         unsoldPlants = unsoldPlants - (unsoldPlants * 0.4);
         
    }
    endOfWeek = (numberOfPlants - unsoldPlants);
    cout << "Estimated number of plants to be sold this week " << round(endOfWeek);


    return 0;

}