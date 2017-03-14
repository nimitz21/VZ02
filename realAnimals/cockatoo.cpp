//File cockatoo.cpp

#include "cockatoo.h"
#include <iostream>
using namespace std;

int Cockatoo::cockatoo_nb = 0;

Cockatoo::Cockatoo(pair<int,int> _position) {
  id = "CKT";
  number = ++cockatoo_nb;
  legend = '^';
  weight = 0.09;
  eat = food;
  type = 'H';
  position = _position;
  eat = food;
  habitat.insert('A');
  compatible.insert("HMB");
  compatible.insert("CKT");
  compatible.insert("RBN");
  compatible.insert("BT");
  compatible.insert("PLC");
  compatible.insert("GSE");
  compatible.insert("CRN");
  compatible.insert("CLG");
}

Cockatoo::Cockatoo(float _weight, pair<int,int> _position) {
  id = "CKT";
  number = ++cockatoo_nb;
  legend = '^';
  weight = 0.09;
  eat = food;
  type = 'H';
  position = _position;
  eat = food;
  habitat.insert('A');
  compatible.insert("HMB");
  compatible.insert("CKT");
  compatible.insert("RBN");
  compatible.insert("BT");
  compatible.insert("PLC");
  compatible.insert("GSE");
  compatible.insert("CRN");
  compatible.insert("CLG");
}

Cockatoo::~Cockatoo(){}

Cockatoo::Cockatoo(const Cockatoo& c) {
  id = c.id;
  number = c.number;
  legend = c.legend;
  weight = c.weight;
  eat = c.eat;
  type = c.type;
  position = c.position;
  habitat = c.habitat;
}

Cockatoo& Cockatoo::operator= (const Cockatoo& c) {
  SetWeight(c.GetWeight());
  SetPos(c.GetPos());
  return *this;
}

void Cockatoo::Act() const {
  cout << id << "-";
  if (number < 10){
    cout << "0"; 
  }
  cout << number  << ": *talk*" << endl;
}

void Cockatoo::Interact() const {
  Description("cockatoo");
  Act();
}

string Cockatoo::GetId() const {
  return id;
}

int Cockatoo::GetNumber() const {
  return number;
}

float Cockatoo::GetWeight() const {
  return weight;
}

float Cockatoo::GetEat() const {
  return eat;
}

pair<int,int> Cockatoo::GetPos() const {
  return position;
}

char Cockatoo::GetType() const {
  return type;
}

char Cockatoo::GetLegend() const {
  return legend;
}

set<char> Cockatoo::GetHabitat() const {
  return habitat;
}

void Cockatoo::SetPos(pair<int,int> _position) {
  position.first=_position.first;
  position.second = _position.second;
}

void Cockatoo::SetWeight(float _weight) {
  weight = _weight;
}

set<string> Cockatoo::GetCompatible() const {
  return compatible;
}

void Cockatoo::Description(string a) const {
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

void Cockatoo::Move(int direction) {
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