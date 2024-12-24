//cout << "Number of data = ";
//cout << "Mean = ";
//cout << "Standard deviation = ";

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <fstream>

using namespace std;

int main(){
    ifstream source;
    string textline;
    int count = 0;
    float sum = 0, sum_2 = 0;
    source.open("score.txt");
    while (getline(source,textline))
    {
        sum += atof(textline.c_str());
        sum_2 += pow(atof(textline.c_str()),2);
        count++;
    }

    float mean = (sum/count);
    
    source.open("score.txt");
    cout << "Number of data = " << count << endl;
    cout << setprecision(3);
    cout << "Mean = " << mean << endl ;
    cout << "Standard deviation = " << sqrt((sum_2/count)-pow(mean,2));
}