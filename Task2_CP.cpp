#include <iostream>
#include <iomanip>
using namespace std;

string pyramidVolume(int,int,int,string);

main()
{
    cout<<"Enter the length of the pyramid (in meters):";
    int length;
    cin>>length;

    cout<<"Enter the width of the pyramid (in meters):";
    int width;
    cin>>width;

    cout<<"Enter the height of the pyramid (in meters):";
    int height;
    cin>>height;

    cout<<"Enter the desired output unit (millimeters,centimeters,meters,kilometers):";
    string output;
    cin>>output;
    
    cout<< fixed << setprecision(3) <<pyramidVolume(length,width,height,output);
    return 0;

}

string pyramidVolume(int length,int width,int height,string output) {
    float volume = (length * width * height) / 3;
    
    if (output == "millimeters") {
        return to_string(volume * 1e9) + " cubic millimeters";
    }
     if (output == "centimeters") {
        return to_string(volume * 1e6) + " cubic centimeters";
    }
     if (output == "meters") {
        return to_string(volume) + " cubic meters";
    }
     if (output == "kilometers") {
        return to_string(volume * 1e-9) + " cubic kilometers";
     }
}
