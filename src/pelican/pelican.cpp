//File pelican.cpp

#include "pelican.h"
#include <iostream>
using namespace std;

int Pelican::pelican_nb = 0;

Pelican::Pelican(pair<int,int> _position) {
  id = "PLC";
  number = ++pelican_nb;
  legend = '`';
  weight = 7;
  eat = food;
  type = 'K';
  position = _position;
  eat = food;
  habitat.insert('W');  
  habitat.insert('A');
  compatible.insert("MRE");
  compatible.insert("DGG");
  compatible.insert("DLP");
  compatible.insert("WHL");
  compatible.insert("PNG");
  compatible.insert("HPP");
  compatible.insert("PLC");
  compatible.insert("GSE");
  compatible.insert("CRN");
  compatible.insert("EGL");
  compatible.insert("OW");
  compatible.insert("HMB");
  compatible.insert("CKT");
  compatible.insert("RBN");
  compatible.insert("BT");
  compatible.insert("CLG");
  compatible.insert("SGL");
}

Pelican::Pelican(float _weight, pair<int,int> _position) {
  id = "PLC";
  number = ++pelican_nb;
  legend = '`';
  weight = _weight;
  eat = food;
  type = 'K';
  position = _position;
  eat = food;
  habitat.insert('W');
  habitat.insert('A');
  compatible.insert("MRE");
  compatible.insert("DGG");
  compatible.insert("DLP");
  compatible.insert("WHL");
  compatible.insert("PNG");
  compatible.insert("HPP");
  compatible.insert("PLC");
  compatible.insert("GSE");
  compatible.insert("CRN");
  compatible.insert("EGL");
  compatible.insert("OW");
  compatible.insert("HMB");
  compatible.insert("CKT");
  compatible.insert("RBN");
  compatible.insert("BT");
  compatible.insert("CLG");
  compatible.insert("SGL");
}

Pelican::~Pelican(){}

Pelican::Pelican(const Pelican& p) {
  id = p.id;
  number = p.number;
  legend = p.legend;
  weight = p.weight;
  eat = p.eat;
  type = p.type;
  position = p.position;
  habitat = p.habitat;
}

Pelican& Pelican::operator= (const Pelican& p) {
  SetWeight(p.GetWeight());
  SetPos(p.GetPos());
  return *this;
}

void Pelican::Act() const {
  cout << id << "-";
  if (number < 10){
    cout << "0"; 
  }
  cout << number  << ": “hrraa-hrraa”" << endl;
}

void Pelican::Interact() const {
  Description("pelican");
  Act();
}

string Pelican::GetId() const {
  return id;
}

int Pelican::GetNumber() const {
  return number;
}

float Pelican::GetWeight() const {
  return weight;
}

float Pelican::GetEat() const {
  return eat;
}

pair<int,int> Pelican::GetPos() const {
  return position;
}

char Pelican::GetType() const {
  return type;
}

char Pelican::GetLegend() const {
  return legend;
}

set<char> Pelican::GetHabitat() const {
  return habitat;
}

void Pelican::SetPos(pair<int,int> _position) {
  position.first=_position.first;
  position.second = _position.second;
}

void Pelican::SetWeight(float _weight) {
  weight = _weight;
}

set<string> Pelican::GetCompatible() const {
  return compatible;
}

void Pelican::Description(string a) const {
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

void Pelican::Move(int direction) {
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