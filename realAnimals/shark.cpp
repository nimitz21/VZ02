//File shark.cpp

#include "shark.h"
#include <iostream>
using namespace std;

int Shark::shark_nb = 0;

Shark::Shark(pair<int,int> _position) {
  id = "SHK";
  number = ++shark_nb;
  legend = '7';
  weight = 771;
  eat = food;
  type = 'K';
  position = _position;
  habitat.insert('W');
  compatible.insert("SHK");
  compatible.insert("WHL");
}

Shark::Shark(float _weight, pair<int,int> _position) {
  id = "SHK";
  number = ++shark_nb;
  legend = '7';
  weight = _weight;
  eat = food;
  type = 'K';
  position = _position;
  habitat.insert('W');
  compatible.insert("SHK");
  compatible.insert("WHL");
}

Shark::~Shark(){}

Shark::Shark(const Shark& s) {
  id = s.id;
  number = s.number;
  legend = s.legend;
  weight = s.weight;
  eat = s.eat;
  type = s.type;
  position = s.position;
  habitat = s.habitat;
}

Shark& Shark::operator= (const Shark& s) {
  SetWeight(s.GetWeight());
  SetPos(s.GetPos());
  return *this;
}

void Shark::Act() const {
  cout << id << "-";
  if (number < 10){
    cout << "0"; 
  }
  cout << number  << ": *cruise*" << endl;
}

void Shark::Interact() const {
  Description("shark");
  Act();
}

string Shark::GetId() const {
  return id;
}

int Shark::GetNumber() const {
  return number;
}

float Shark::GetWeight() const {
  return weight;
}

float Shark::GetEat() const {
  return eat;
}

pair<int,int> Shark::GetPos() const {
  return position;
}

char Shark::GetType() const {
  return type;
}

char Shark::GetLegend() const {
  return legend;
}

set<char> Shark::GetHabitat() const {
  return habitat;
}

void Shark::SetPos(pair<int,int> _position) {
  position.first=_position.first;
  position.second = _position.second;
}

void Shark::SetWeight(float _weight) {
  weight = _weight;
}

set<string> Shark::GetCompatible() const {
  return compatible;
}

void Shark::Description(string a) const {
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

void Shark::Move(int direction) {
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