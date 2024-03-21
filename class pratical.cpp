#include<iostream>
using namespace std;

class Room {

private:
    double length;
    double width;
    double height;
public:
    //double length;
    //double width;
    //double height;

    double carea(double l, double w) {
        length = l;
        width = w;

        return length * width;

    }
    double volume(double l, double h, double w) {
        length = l;
        width = w;
        height = h;
        return length * width * height;
    }
    void getDim(double l, double w, double h){
     cout << "Give l,w,h of room: " << endl;
     cin >> l>>w>>h;
    
    }
};

int main()
{
    Room r1;
    double area;
    double vol;
    double ln,wd,ht;
    cout << "Length of room: " << endl;
    cin >> ln;
    cout << "Width of room: " << endl;
    cin >> wd;
    cout << "Height of room: " << endl;
    cin >> ht;

    area=r1.carea(ln,wd,ht);
    vol=r1.volume(ln,wd,ht);
    r1.getDim(ln,wd,ht);

    cout << "Area of room is: " << area << endl;
    cout << "Volume of room is: " << vol << endl;
    return 0;
}