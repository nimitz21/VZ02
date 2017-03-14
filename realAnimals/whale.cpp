//File whale.cpp

#include "whale.h"
#include <iostream>
using namespace std;

int Whale::whale_nb = 0;

Whale::Whale(pair<int,int> _position) {
  id = "WHL";
  number = ++whale_nb;
  legend = '@';
  weight = 40000;
  eat = food;
  type = 'O';
  habitat.insert('W');
  compatible.insert("SHK");
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

Whale::Whale(float _weight, pair<int,int> _position) {
  id = "WHL";
  number = ++whale_nb;
  legend = '@';
  weight = _weight;
  eat = food;
  type = 'O';
  habitat.insert('W');
  compatible.insert("SHK");
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

Whale::~Whale(){}

Whale::Whale(const Whale& w) {
  id = w.id;
  number = w.number;
  legend = w.legend;
  weight = w.weight;
  eat = w.eat;
  type = w.type;
  position = w.position;
  habitat = w.habitat;
}

Whale& Whale::operator= (const Whale& w) {
  SetWeight(w.GetWeight());
  SetPos(w.GetPos());
  return *this;
}

void Whale::Act() const {
  cout << id << "-";
  if (number < 10){
    cout << "0"; 
  }
  cout << number  << ": *sing*" << endl;
}

void Whale::Interact() const {
  Description("whale");
  Act();
}

string Whale::GetId() const {
  return id;
}

int Whale::GetNumber() const {
  return number;
}

float Whale::GetWeight() const {
  return weight;
}

float Whale::GetEat() const {
  return eat;
}

pair<int,int> Whale::GetPos() const {
  return position;
}

char Whale::GetType() const {
  return type;
}

char Whale::GetLegend() const {
  return legend;
}

set<char> Whale::GetHabitat() const {
  return habitat;
}

void Whale::SetPos(pair<int,int> _position) {
  position.first=_position.first;
  position.second = _position.second;
}

void Whale::SetWeight(float _weight) {
  weight = _weight;
}

set<string> Whale::GetCompatible() const {
  return compatible;
}

void Whale::Description(string a) const {
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

void Whale::Move(int direction) {
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