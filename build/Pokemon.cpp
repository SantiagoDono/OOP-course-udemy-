#include "Pokemon.hpp"
#include "Constantes.hpp"
using namespace std;
// constructor by default
Pokemon::Pokemon()
{
    this->_name = UNNAMED;
    this->_color = NO_COLOR;
    this->_attack_power = DEFAULT_ATTACK;
    this->_life = DEFAULT_LIFE;
}
// constructor with parameters
Pokemon::Pokemon(string name, string color, int attack_power, int life)
{
    this->_name = name;
    this->_color = color;
    this->_attack_power = attack_power;
    this->_life = life;
}
// getters
string Pokemon::GetName()
{
    return this->_name;
}
string Pokemon::GetColor()
{
    return this->_color;
}

int Pokemon::GetAttackPower()
{
    return this->_attack_power;
}
int Pokemon::GetLife()
{
    return this->_life;
}

// setters
void Pokemon::SetName(string name)
{
    this->_name = name;
}
void Pokemon::SetColor(string color)
{
    this->_color = color;
}
void Pokemon::SetAttackPower(int attack)
{
    this->_attack_power + attack;
}
void Pokemon::SetLife(int life)
{
    this->_life = life;
}
void Pokemon::greeting()
{
    cout << "Hello,i'm the Pokemon: " << this->GetName() << endl
         << "Im available to be used." << endl;
}

void Pokemon::heal(int value){
    int actualHealth = this->GetLife();
    actualHealth += value;
    if(actualHealth <= MAX_LIFE){
        this->SetLife(actualHealth);
        
    }else{
        this->SetLife(MAX_LIFE);
    }
}

void Pokemon::evo(string name, string color){
    this->SetName(name);
    this->SetColor(color);
    this->SetAttackPower(this->GetAttackPower()*1.20);
    //para informar el nuevo nombre del pokemon.   
    this->greeting();
}

// destructor
Pokemon::~Pokemon() {}
