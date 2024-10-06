#include <iostream>
#include <iomanip>
using namespace std;

float taxCalculator(char,float);
main()
{
    cout<<"Enter the vehicle type code(M,E,S,V,T):";
    char vehicle_type;
    cin>>vehicle_type;

    cout<<"Enter the price of the vehicle:$";
    float price;
    cin>>price;
      
    float finalPrice = taxCalculator(vehicle_type,price);
    cout << "The final price on a vehicle of type " << vehicle_type << " after adding the tax is $";
    cout<< fixed << setprecision(2) <<finalPrice;
    
    return 0;



}

float taxCalculator(char vehicle_type,float price){
    float tax_rate;
    if (vehicle_type == 'M') {
        tax_rate = 0.06;
    }
     if (vehicle_type == 'E') {
        tax_rate = 0.08;
    }
     if (vehicle_type == 'S') {
        tax_rate = 0.10;
    }
     if (vehicle_type == 'V') {
        tax_rate = 0.12;
    }
     if (vehicle_type == 'T') {
        tax_rate = 0.15;
     }
    float tax_amount;
    tax_amount=price*tax_rate;
    return price + tax_amount;

}