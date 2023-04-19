#ifndef POKEMON.HPP
#define POKEMON .HPP
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
using namespace std;

class Pokemon
{
private:
    string _name;
    string _color;
    int _attack_power;
    int _life;

public:
    // constructor
    Pokemon();
    Pokemon(string name, string color, int attack_power, int life);
    // destructor
    ~Pokemon();
    //getters
    string GetName();
    string GetColor();
    int GetAttackPower();
    int GetLife();

    //setters 
    void SetName(string name);
    void SetColor(string color);
    void SetAttackPower(int attack_power);
    void SetLife(int life);

    //Greeting
    void greeting();
    
    //methods
    void heal(int value);
    void evo(string name,string color);

};

#endif
