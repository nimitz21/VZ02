//File dolphin.cpp

#include "dolphin.h"
#include <iostream>
using namespace std;

int Dolphin::dolphin_nb = 0;

Dolphin::Dolphin(pair<int,int> _position) {
  id = "DLP";
  number = ++dolphin_nb;
  legend = '!';
  weight = 220;
  eat = food;
  type = 'K';
  position = _position;
  eat = food;
  habitat.insert('W');
  compatible.insert("MRE");
  compatible.insert("DGG");
  compatible.insert("TRL");
  compatible.insert("DLP");
  compatible.insert("WHL");
  compatible.insert("PNG");
  compatible.insert("HPP");
  compatible.insert("PLC");
  compatible.insert("GSE");
  compatible.insert("CRN");
}

Dolphin::Dolphin(float _weight, pair<int,int> _position) {
  id = "DLP";
  number = ++dolphin_nb;
  legend = '!';
  weight = _weight;
  eat = food;
  type = 'K';
  position = _position;
  eat = food;
  habitat.insert('W');
  compatible.insert("MRE");
  compatible.insert("DGG");
  compatible.insert("TRL");
  compatible.insert("DLP");
  compatible.insert("WHL");
  compatible.insert("PNG");
  compatible.insert("HPP");
  compatible.insert("PLC");
  compatible.insert("GSE");
  compatible.insert("CRN");
}

Dolphin::~Dolphin(){}

Dolphin::Dolphin(const Dolphin& d) {
  id = d.id;
  number = d.number;
  legend = d.legend;
  weight = d.weight;
  eat = d.eat;
  type = d.type;
  position = d.position;
  habitat = d.habitat;
}

Dolphin& Dolphin::operator= (const Dolphin& d) {
  SetWeight(d.GetWeight());
  SetPos(d.GetPos());
  return *this;
}

void Dolphin::Act() const {
  cout << id << "-";
  if (number < 10){
    cout << "0"; 
  }
  cout << number  << ": *click*" << endl;
}

void Dolphin::Interact() const {
  Description("dolphin");
  Act();
}

string Dolphin::GetId() const {
  return id;
}

int Dolphin::GetNumber() const {
  return number;
}

float Dolphin::GetWeight() const {
  return weight;
}

float Dolphin::GetEat() const {
  return eat;
}

pair<int,int> Dolphin::GetPos() const {
  return position;
}

char Dolphin::GetType() const {
  return type;
}

char Dolphin::GetLegend() const {
  return legend;
}

set<char> Dolphin::GetHabitat() const {
  return habitat;
}

void Dolphin::SetPos(pair<int,int> _position) {
  position.first=_position.first;
  position.second = _position.second;
}

void Dolphin::SetWeight(float _weight) {
  weight = _weight;
}

set<string> Dolphin::GetCompatible() const {
  return compatible;
}

void Dolphin::Description(string a) const {
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

void Dolphin::Move(int direction) {
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