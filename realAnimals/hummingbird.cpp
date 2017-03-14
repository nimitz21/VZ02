//File hummingbird.cpp

#include "hummingbird.h"
#include <iostream>
using namespace std;

int Hummingbird::hummingbird_nb = 0;

Hummingbird::Hummingbird(pair<int,int> _position) {
  id = "HMB";
  number = ++hummingbird_nb;
  legend = '%';
  weight = 0.0002;
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
  compatible.insert("SGL");
}

Hummingbird::Hummingbird(float _weight, pair<int,int> _position) {
  id = "HMB";
  number = ++hummingbird_nb;
  legend = '%';
  weight = _weight;
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
  compatible.insert("SGL");
}

Hummingbird::~Hummingbird(){}

Hummingbird::Hummingbird(const Hummingbird& h) {
  id = h.id;
  number = h.number;
  legend = h.legend;
  weight = h.weight;
  eat = h.eat;
  type = h.type;
  position = h.position;
  habitat = h.habitat;
}

Hummingbird& Hummingbird::operator= (const Hummingbird& h) {
  SetWeight(h.GetWeight());
  SetPos(h.GetPos());
  return *this;
}

void Hummingbird::Act() const {
  cout << id << "-";
  if (number < 10){
    cout << "0"; 
  }
  cout << number  << ": *hum*" << endl;
}

void Hummingbird::Interact() const {
  Description("hummingbird");
  Act();
}

string Hummingbird::GetId() const {
  return id;
}

int Hummingbird::GetNumber() const {
  return number;
}

float Hummingbird::GetWeight() const {
  return weight;
}

float Hummingbird::GetEat() const {
  return eat;
}

pair<int,int> Hummingbird::GetPos() const {
  return position;
}

char Hummingbird::GetType() const {
  return type;
}

char Hummingbird::GetLegend() const {
  return legend;
}

set<char> Hummingbird::GetHabitat() const {
  return habitat;
}

void Hummingbird::SetPos(pair<int,int> _position) {
  position.first=_position.first;
  position.second = _position.second;
}

void Hummingbird::SetWeight(float _weight) {
  weight = _weight;
}

set<string> Hummingbird::GetCompatible() const {
  return compatible;
}

void Hummingbird::Description(string a) const {
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

void Hummingbird::Move(int direction) {
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