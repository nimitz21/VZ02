//File owl.cpp

#include "owl.h"
#include <iostream>
using namespace std;

int Owl::owl_nb = 0;

Owl::Owl(pair<int,int> _position) {
  id = "OW";
  number = ++owl_nb;
  legend = '$';
  weight = 2;
  eat = food;
  type = 'K';
  position = _position;
  eat = food;
  habitat.insert('A');
  compatible.insert("EGL");
  compatible.insert("OW");
  compatible.insert("PLC");
  compatible.insert("DRL");
}

Owl::Owl(float _weight, pair<int,int> _position) {
  id = "OW";
  number = ++owl_nb;
  legend = '$';
  weight = _weight;
  eat = food;
  type = 'K';
  position = _position;
  eat = food;
  habitat.insert('A');
  compatible.insert("EGL");
  compatible.insert("OW");
  compatible.insert("PLC");
  compatible.insert("DRL");
}

Owl::~Owl(){}

Owl::Owl(const Owl& o) {
  id = o.id;
  number = o.number;
  legend = o.legend;
  weight = o.weight;
  eat = o.eat;
  type = o.type;
  position = o.position;
  habitat = o.habitat;
}

Owl& Owl::operator= (const Owl& o) {
  SetWeight(o.GetWeight());
  SetPos(o.GetPos());
  return *this;
}

void Owl::Act() const {
  cout << id << "-";
  if (number < 10){
    cout << "0"; 
  }
  cout << number  << ": *hoot*" << endl;
}

void Owl::Interact() const {
  Description("owl");
  Act();
}

string Owl::GetId() const {
  return id;
}

int Owl::GetNumber() const {
  return number;
}

float Owl::GetWeight() const {
  return weight;
}

float Owl::GetEat() const {
  return eat;
}

pair<int,int> Owl::GetPos() const {
  return position;
}

char Owl::GetType() const {
  return type;
}

char Owl::GetLegend() const {
  return legend;
}

set<char> Owl::GetHabitat() const {
  return habitat;
}

void Owl::SetPos(pair<int,int> _position) {
  position.first=_position.first;
  position.second = _position.second;
}

void Owl::SetWeight(float _weight) {
  weight = _weight;
}

set<string> Owl::GetCompatible() const {
  return compatible;
}

void Owl::Description(string a) const {
  cout << "This is a(n) " << a << " called " << id << "-";
  if (number < 10) {
    cout << "0"; 
  }
  cout << number << ". It weights " << weight << " kilograms. It eats ";
  cout << eat*weight << " kilograms of ";
  if (type == 'K') {
    cout << "meats";
  } else if (type == 'O') {
    cout << "meats and vegetables";
  } else {
    cout << "vegetables";
  }
  cout << endl;
}

void Owl::Move(int direction) {
  switch(direction){
    case 0:
      position.first--;
      break;
    case 1:
      position.second--;
      break;
    case 2:
      position.second++;
      break;
    case 3:
      position.first++;
      break;
  }
}