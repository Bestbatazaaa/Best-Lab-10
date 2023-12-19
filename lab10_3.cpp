//cout << "Number of data = ";
//cout << "Mean = ";
//cout << "Standard deviation = ";

#include <iostream>
#include <iomanip>
#include <fstream>
#include <cmath>
using namespace std;

int main(){
    ifstream score;
    score.open("score.txt");
    string textline;
    double sum = 0.0;
    double sumpow = 0.0;
    int i = 0;
    while(getline(score,textline)){
        i++;
        sum = sum + atof(textline.c_str());
        sumpow = sumpow + pow(atof(textline.c_str()),2.0);
    }
    cout << "Number of data = " << i;
    cout << setprecision(3);
    double Mean = (1.0/i)*sum;
    cout << "\nMean = "<< Mean;
    cout << "\nStandard deviation = ";
    cout << sqrt((1.0/i)*sumpow-pow(Mean,2.0));
}