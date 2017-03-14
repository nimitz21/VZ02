//File eagle.cpp

#include "eagle.h"
#include <iostream>
using namespace std;

int Eagle::eagle_nb = 0;

Eagle::Eagle(pair<int,int> _position) {
  id = "EGL";
  number = ++eagle_nb;
  legend = '#';
  weight = 4;
  eat = food;
  type = 'K';
  position = _position;
  eat = food;
  habitat.insert('A');
  compatible.insert("EGL");
  compatible.insert("OW");
  compatible.insert("PLC");
}

Eagle::Eagle(float _weight, pair<int,int> _position) {
  id = "EGL";
  number = ++eagle_nb;
  legend = '#';
  weight = _weight;
  eat = food;
  type = 'K';
  position = _position;
  eat = food;
  habitat.insert('A');
  compatible.insert("EGL");
  compatible.insert("OW");
  compatible.insert("PLC");
}

Eagle::~Eagle(){}

Eagle::Eagle(const Eagle& e) {
  id = e.id;
  number = e.number;
  legend = e.legend;
  weight = e.weight;
  eat = e.eat;
  type = e.type;
  position = e.position;
  habitat = e.habitat;
}

Eagle& Eagle::operator= (const Eagle& e) {
  SetWeight(e.GetWeight());
  SetPos(e.GetPos());
  return *this;
}

void Eagle::Act() const {
  cout << id << "-";
  if (number < 10){
    cout << "0"; 
  }
  cout << number  << ": *scream*" << endl;
}

void Eagle::Interact() const {
  Description("eagle");
  Act();
}

string Eagle::GetId() const {
  return id;
}

int Eagle::GetNumber() const {
  return number;
}

float Eagle::GetWeight() const {
  return weight;
}

float Eagle::GetEat() const {
  return eat;
}

pair<int,int> Eagle::GetPos() const {
  return position;
}

char Eagle::GetType() const {
  return type;
}

char Eagle::GetLegend() const {
  return legend;
}

set<char> Eagle::GetHabitat() const {
  return habitat;
}

void Eagle::SetPos(pair<int,int> _position) {
  position.first=_position.first;
  position.second = _position.second;
}

void Eagle::SetWeight(float _weight) {
  weight = _weight;
}

set<string> Eagle::GetCompatible() const {
  return compatible;
}

void Eagle::Description(string a) const {
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

void Eagle::Move(int direction) {
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