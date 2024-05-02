#include<iostream>
#include<cmath>
using namespace std;
double distance(int x,int y, int a, int b) {
    int dx = x- a;
    int dy = y-b;
    return sqrt(pow(dx, 2) + pow(dy, 2));
}

int main() {
    int x, y, a, b;
    cout << "Enter the value of x:"<<endl;
    cin >> x;
    cout << "Enter the value of a:"<<endl;
    cin>>a;
    cout<<"Enter the value of y:"<<endl;
    cin>>y;
    cout<<"Enter the value of b:"<<endl;
    cin>>b;

    double solution = distance(x, y, a,b);

    cout << "The distance in between the points (x, y) and (a, b) is " << solution << '.' << endl;
    return 0;
}
