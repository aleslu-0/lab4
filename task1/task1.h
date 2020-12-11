#pragma once
using namespace std;
#include <iostream>
#include <string>

class Engine {
public:
    //fields
    float sizeInLitres;
    int numberOfCylinders;
    Engine() {
        sizeInLitres = 1.5;
        numberOfCylinders = 5;
    }
    Engine(float nSizeInL, int nNumbOfC) {
        sizeInLitres = nSizeInL;
        numberOfCylinders = nNumbOfC;
    }

    void print();
};

class Body {
public:
    //fields
    string color;
    float width, height;
    Body() {
        color = "red";
        width = 100.0;
        height = 75.0;
    }
    Body(string nColor, float nWidth, float nHeight) {
        color = nColor;
        width = nWidth;
        height = nHeight;
    }

    void print();
};

class Owner {
public:
    //fields
    string name, address;
    bool allowedToDrive;
    Owner() {
        name = "balex";
        address = "nowhere";
        allowedToDrive = true;
    }
    Owner(string nName, string nAddress, bool nAllToD) {
        nName = name;
        nAddress = address;
        nAllToD = allowedToDrive;
    }

    void print();
};

class Motorvehicle {
public:
    //fields
    Engine engine;
    Body body;
    Owner owner;
    float* tireDiameters;
    int numberOfTires;
    float *b = new float;

    Motorvehicle() {
        //tires
        tireDiameters = b;
        numberOfTires = 1;

        //engine
        engine.sizeInLitres = 0.0;
        engine.numberOfCylinders = 1;

        //body
        body.color = "";
        body.width = 0.0;
        body.height = 0.0;

        //owner
        owner.name = "";
        owner.address = "";
        owner.allowedToDrive = true;
    }
    ~Motorvehicle() {
        delete tireDiameters;
    }

    void print();
};