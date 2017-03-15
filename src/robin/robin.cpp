//File robin.cpp

#include "robin.h"
#include <iostream>
using namespace std;

int Robin::robin_nb = 0;

Robin::Robin(pair<int,int> _position) {
  id = "RBN";
  number = ++robin_nb;
  legend = '&';
  weight = 0.06;
  eat = food;
  type = 'O';
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
  compatible.insert("DRL");
}

Robin::Robin(float _weight, pair<int,int> _position) {
  id = "RBN";
  number = ++robin_nb;
  legend = '&';
  weight = _weight;
  eat = food;
  type = 'O';
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
  compatible.insert("DRL");
}

Robin::~Robin(){}

Robin::Robin(const Robin& r) {
  id = r.id;
  number = r.number;
  legend = r.legend;
  weight = r.weight;
  eat = r.eat;
  type = r.type;
  position = r.position;
  habitat = r.habitat;
}

Robin& Robin::operator= (const Robin& r) {
  SetWeight(r.GetWeight());
  SetPos(r.GetPos());
  return *this;
}

void Robin::Act() const {
  cout << id << "-";
  if (number < 10){
    cout << "0"; 
  }
  cout << number  << ": *hoot*" << endl;
}

void Robin::Interact() const {
  Description("robin");
  Act();
}

string Robin::GetId() const {
  return id;
}

int Robin::GetNumber() const {
  return number;
}

float Robin::GetWeight() const {
  return weight;
}

float Robin::GetEat() const {
  return eat;
}

pair<int,int> Robin::GetPos() const {
  return position;
}

char Robin::GetType() const {
  return type;
}

char Robin::GetLegend() const {
  return legend;
}

set<char> Robin::GetHabitat() const {
  return habitat;
}

void Robin::SetPos(pair<int,int> _position) {
  position.first=_position.first;
  position.second = _position.second;
}

void Robin::SetWeight(float _weight) {
  weight = _weight;
}

set<string> Robin::GetCompatible() const {
  return compatible;
}

void Robin::Description(string a) const {
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

void Robin::Move(int direction) {
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