//File crane.cpp

#include "crane.h"
#include <iostream>
using namespace std;

int Crane::crane_nb = 0;

Crane::Crane(pair<int,int> _position) {
  id = "CRN";
  number = ++crane_nb;
  legend = '-';
  weight = 3;
  eat = food;
  type = 'O';
  position = _position;
  eat = food;
  habitat.insert('W');  
  habitat.insert('A');
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
  compatible.insert("HMB");
  compatible.insert("CKT");
  compatible.insert("RBN");
  compatible.insert("BT");
  compatible.insert("DRL");
  compatible.insert("CLG");
  compatible.insert("SGL");
}

Crane::Crane(float _weight, pair<int,int> _position) {
  id = "CRN";
  number = ++crane_nb;
  legend = '-';
  weight = _weight;
  eat = food;
  type = 'O';
  position = _position;
  eat = food;
  habitat.insert('W');
  habitat.insert('A');
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
  compatible.insert("HMB");
  compatible.insert("CKT");
  compatible.insert("RBN");
  compatible.insert("BT");
  compatible.insert("DRL");
  compatible.insert("CLG");
  compatible.insert("SGL");
}

Crane::~Crane(){}

Crane::Crane(const Crane& c) {
  id = c.id;
  number = c.number;
  legend = c.legend;
  weight = c.weight;
  eat = c.eat;
  type = c.type;
  position = c.position;
  compatible = c.compatible;
  habitat = c.habitat;
}

Crane& Crane::operator= (const Crane& c) {
  SetWeight(c.GetWeight());
  SetPos(c.GetPos());
  return *this;
}

void Crane::Act() const {
  cout << id << "-";
  if (number < 10){
    cout << "0"; 
  }
  cout << number  << ": *soar*" << endl;
}

void Crane::Interact() const {
  Description("crane");
  Act();
}

string Crane::GetId() const {
  return id;
}

int Crane::GetNumber() const {
  return number;
}

float Crane::GetWeight() const {
  return weight;
}

float Crane::GetEat() const {
  return eat;
}

pair<int,int> Crane::GetPos() const {
  return position;
}

char Crane::GetType() const {
  return type;
}

char Crane::GetLegend() const {
  return legend;
}

set<char> Crane::GetHabitat() const {
  return habitat;
}

void Crane::SetPos(pair<int,int> _position) {
  position.first=_position.first;
  position.second = _position.second;
}

void Crane::SetWeight(float _weight) {
  weight = _weight;
}

set<string> Crane::GetCompatible() const {
  return compatible;
}

void Crane::Description(string a) const {
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

void Crane::Move(int direction) {
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