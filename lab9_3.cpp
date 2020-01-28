//cout << "Number of data = ";
//cout << "Mean = ";
//cout << "Standard deviation = ";

#include<iostream>
#include<fstream>
#include<cstdlib>
#include<cmath>
using namespace std;
int main()
{
    ifstream source("score.txt");
    int i=0,j=0;
    double avg = 0,SD,sum = 0;
    string textline;
    while(getline(source,textline))
    {
        avg += atof(textline.c_str());
        sum += pow((atof(textline.c_str())),2) ;
        i++;
    }
    avg = avg/i;
    SD = sqrt((sum/i)-pow(avg,2));
    cout << "Number of data = " << i << endl;
    cout << "Mean = " << avg << endl;
    cout << "Standard deviation = " << SD << endl;
    source.close();

    return 0;
}