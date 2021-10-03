#include <iostream>
using namespace std;
#include <cmath>

int main() {
    double x=1;
    int counter = 0;
    int e;
    cout << "введите  погрешность E = 10^x  (-6<x<-2):";
    cin >> e;
    cout <<1-(sin(0.02)/0.02) <<"     " <<pow(10,e) <<endl;
    while (abs(1-(sin(x)/x))>pow(10,e)) {
        x/=2;
        counter+=1;
    }
    cout <<"x="<< x <<"количество итераций=" <<counter ;

    return 0;
}
