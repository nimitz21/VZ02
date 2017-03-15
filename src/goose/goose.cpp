//File goose.cpp

#include "goose.h"
#include <iostream>
using namespace std;

int Goose::goose_nb = 0;

Goose::Goose(pair<int,int> _position) {
  id = "GSE";
  number = ++goose_nb;
  legend = '+';
  weight = 4;
  eat = food;
  type = 'H';
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
  compatible.insert("CLG");
  compatible.insert("SGL");
}

Goose::Goose(float _weight, pair<int,int> _position) {
  id = "GSE";
  number = ++goose_nb;
  legend = '+';
  weight = _weight;
  eat = food;
  type = 'H';
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
  compatible.insert("CLG");
  compatible.insert("SGL");
}

Goose::~Goose(){}

Goose::Goose(const Goose& g) {
  id = g.id;
  number = g.number;
  legend = g.legend;
  weight = g.weight;
  eat = g.eat;
  type = g.type;
  position = g.position;
  habitat = g.habitat;
}

Goose& Goose::operator= (const Goose& g) {
  SetWeight(g.GetWeight());
  SetPos(g.GetPos());
  return *this;
}

void Goose::Act() const {
  cout << id << "-";
  if (number < 10){
    cout << "0"; 
  }
  cout << number  << ": *quack*" << endl;
}

void Goose::Interact() const {
  Description("goose");
  Act();
}

string Goose::GetId() const {
  return id;
}

int Goose::GetNumber() const {
  return number;
}

float Goose::GetWeight() const {
  return weight;
}

float Goose::GetEat() const {
  return eat;
}

pair<int,int> Goose::GetPos() const {
  return position;
}

char Goose::GetType() const {
  return type;
}

char Goose::GetLegend() const {
  return legend;
}

set<char> Goose::GetHabitat() const {
  return habitat;
}

void Goose::SetPos(pair<int,int> _position) {
  position.first=_position.first;
  position.second = _position.second;
}

void Goose::SetWeight(float _weight) {
  weight = _weight;
}

set<string> Goose::GetCompatible() const {
  return compatible;
}

void Goose::Description(string a) const {
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

void Goose::Move(int direction) {
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