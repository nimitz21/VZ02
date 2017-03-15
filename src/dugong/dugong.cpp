//File dugong.cpp

#include "dugong.h"
#include <iostream>
using namespace std;

int Dugong::dugong_nb = 0;

Dugong::Dugong(pair<int,int> _position) {
  id = "DGG";
  number = ++dugong_nb;
  legend = '9';
  weight = 294;
  eat = food;
  type = 'H';
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

Dugong::Dugong(float _weight, pair<int,int> _position) {
  id = "DGG";
  number = ++dugong_nb;
  legend = '9';
  weight = _weight;
  eat = food;
  type = 'H';
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

Dugong::~Dugong(){}

Dugong::Dugong(const Dugong& d) {
  id = d.id;
  number = d.number;
  legend = d.legend;
  weight = d.weight;
  eat = d.eat;
  type = d.type;
  position = d.position;
  habitat = d.habitat;
}

Dugong& Dugong::operator= (const Dugong& d) {
  SetWeight(d.GetWeight());
  SetPos(d.GetPos());
  return *this;
}

void Dugong::Act() const {
  cout << id << "-";
  if (number < 10){
    cout << "0"; 
  }
  cout << number  << ": *splash*" << endl;
}

void Dugong::Interact() const {
  Description("dugong");
  Act();
}

string Dugong::GetId() const {
  return id;
}

int Dugong::GetNumber() const {
  return number;
}

float Dugong::GetWeight() const {
  return weight;
}

float Dugong::GetEat() const {
  return eat;
}

pair<int,int> Dugong::GetPos() const {
  return position;
}

char Dugong::GetType() const {
  return type;
}

char Dugong::GetLegend() const {
  return legend;
}

set<char> Dugong::GetHabitat() const {
  return habitat;
}

void Dugong::SetPos(pair<int,int> _position) {
  position.first=_position.first;
  position.second = _position.second;
}

void Dugong::SetWeight(float _weight) {
  weight = _weight;
}

set<string> Dugong::GetCompatible() const {
  return compatible;
}

void Dugong::Description(string a) const {
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

void Dugong::Move(int direction) {
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