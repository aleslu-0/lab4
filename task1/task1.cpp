using namespace std;
#include <iostream>
#include <string>
#include <task1.h>

void Motorvehicle::print() {
    cout << "Diameters of tire: " << *tireDiameters << endl;
    cout << "Number of tires: " << numberOfTires << endl;
    engine.print();
    body.print();
    owner.print();
}
void Engine::print() {
    cout << "Size of engine: " << sizeInLitres << endl;
    cout << "Number of cylinders: " << numberOfCylinders << endl;
}
void Body::print() {
    cout << "Color: " << color << endl;
    cout << "Width: " << width << endl;
    cout << "Height: " << height << endl;
}
void Owner::print() {
    cout << "Name: " << name << endl;
    cout << "Address: " << address << endl;
    cout << "Allowed to drive: " << boolalpha << allowedToDrive;

}

int main()
{
    int amount;
    cout << "How many cars do you wish to make?: ";
    cin >> amount;
    //cin.ignore(1, '\n');
    
    Motorvehicle arrayCars[20];

    for (int k = 0; k < amount; k++) {
        string name, address;
        //float* dia = new float;
        int numberOfTires;
        float sizeInLitres;
        int numberOfCylinders;
        string color;
        float width, height;        
        bool allowedToDrive;

        cin.ignore(1, '\n');
        cout << "Enter name of car (string): ";
        getline(cin, arrayCars[k].owner.name);

        cout << "Enter address of car (string): ";
        getline(cin, arrayCars[k].owner.address);

        cout << "Enter diameters (float): ";
        cin >> *arrayCars[k].tireDiameters;

        cout << "Enter amount of tires (int): ";
        cin >> arrayCars[k].numberOfTires;

        cout << "Enter size of engine of litres (float): ";
        cin >> arrayCars[k].engine.sizeInLitres;

        cout << "Enter numbers of cylinders (int): ";
        cin >> arrayCars[k].engine.numberOfCylinders;

        cout << "Enter color of car (string): ";
        cin >> arrayCars[k].body.color;

        cout << "Enter width of car (float): ";
        cin >> arrayCars[k].body.width;

        cout << "Enter height of car (float): ";
        cin >> arrayCars[k].body.height;

        cout << "Enter if you're allowed to drive (1/0): ";
        cin >> arrayCars[k].owner.allowedToDrive;

        //Motorvehicle car(tireDiameters, numberOfCylinders, sizeInLitres, numberOfCylinders, color, width, height, name, address, allowedToDrive);
    }
    for (int i = 0; i < amount; i++) {
        cout << "Car: " << i << " has this stuff:\n ";
        cout << "----------------------------------------------------\n";
        arrayCars[i].print();
        cout << endl;
    }

    return 0;    
}
