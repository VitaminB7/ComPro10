#include <iostream>
#include <iomanip>
#include<fstream>
#include<cmath>
using namespace std;

int main(){
    ifstream source;
    string a;
    double sum=0,std=0,mean,sd;
    int i=0;
    source.open("score.txt");
    
    while(getline(source,a)){
    
    sum+=stod(a);    
    
    std+= pow(stod(a),2);
        
    i++;
    }
    source.close();

    
    cout << "Number of data = "<<i<<'\n';
    cout << setprecision(3);
    mean = sum/i;
    sd = (std/i)-pow(mean,2);
    cout << "Mean = "<<mean<<'\n';
    cout << "Standard deviation = "<<sqrt(sd);
    
    
    
}
