#include <iostream>
#include <string>
#include <cctype>
using namespace std;


double mean(const double distance[], int size);
double min(const double distance[], int size);
double max(const double distance[], int size);





int main () {
    string names[8]   = {"Sirius", "Canopus", "Alpha Centauri", "Arcturus",  "Vega", "Rigel", "Procyon", "Betelgeuse"};
    double distance[8]     = {8.6, 310.0, 4.4, 37.0, 25.0, 860.0, 11.5, 640.0};
    double magnitude[8]    = {-1.46, -0.74, -0.27, -0.05, 0.03, 0.13, 0.34, 0.42};

 
    







    cout << "Mean distance = " << mean(distance, 8) << endl;
    cout << "Min distance = " << min(distance, 8) << endl;
    cout << "Max distance = " << max(distance, 8) << endl;

    return 0;



double mean(const double distance[], int size) {
    double sum = 0;
    for (int i = 0; i < size; i++) {
        sum += distance[i];
    }
    return sum / size;
}


double min(const double distance[], int size) {
    double smallest = distance[0];
    for (int i = 1; i < size; i++) {
        if (distance[i] < smallest) {
            smallest = distance[i];
        }
    }
    return smallest;
}

double max(const double distance[], int size) {
    double largest = distance[0];
    for (int i = 1; i < size; i++) {
        if (distance[i] > largest) {
            largest = distance[i];
        }
    }
    return largest;
}
return 0;

}





std::string constellation = "Sirius";
std::cout << constellation.length() << std::endl;  
std::cout << constellation[0] << std::endl; 


 std::string toupper(std:: Sirius);   



