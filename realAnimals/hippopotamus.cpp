//File hippopotamus.cpp

#include "hippopotamus.h"
#include <iostream>
using namespace std;

int Hippopotamus::hippopotamus_nb = 0;

Hippopotamus::Hippopotamus(pair<int,int> _position) {
  id = "HPP";
  number = ++hippopotamus_nb;
  legend = ')';
  weight = 1496;
  eat = food;
  type = 'H';
  position = _position;
  eat = food;
  habitat.insert('L'); 
  habitat.insert('W');
  compatible.insert("WF");
  compatible.insert("ZBR");
  compatible.insert("ELP");
  compatible.insert("MCQ");
  compatible.insert("HG");
  compatible.insert("PNG");
  compatible.insert("HPP");
  compatible.insert("CLG");
  compatible.insert("MRE");
  compatible.insert("DGG");
  compatible.insert("TRL");
  compatible.insert("DLP");
  compatible.insert("WHL");
  compatible.insert("PLC");
  compatible.insert("GSE");
  compatible.insert("CRN");
}

Hippopotamus::Hippopotamus(float _weight, pair<int,int> _position) {
  id = "HPP";
  number = ++hippopotamus_nb;
  legend = ')';
  weight = _weight;
  eat = food;
  type = 'H';
  position = _position;
  eat = food;
  habitat.insert('L');
  habitat.insert('W');
  compatible.insert("WF");
  compatible.insert("ZBR");
  compatible.insert("ELP");
  compatible.insert("MCQ");
  compatible.insert("HG");
  compatible.insert("PNG");
  compatible.insert("HPP");
  compatible.insert("CLG");
  compatible.insert("MRE");
  compatible.insert("DGG");
  compatible.insert("TRL");
  compatible.insert("DLP");
  compatible.insert("WHL");
  compatible.insert("PLC");
  compatible.insert("GSE");
  compatible.insert("CRN");
}

Hippopotamus::~Hippopotamus(){}

Hippopotamus::Hippopotamus(const Hippopotamus& h) {
  id = h.id;
  number = h.number;
  legend = h.legend;
  weight = h.weight;
  eat = h.eat;
  type = h.type;
  position = h.position;
  habitat = h.habitat;
}

Hippopotamus& Hippopotamus::operator= (const Hippopotamus& h) {
  SetWeight(h.GetWeight());
  SetPos(h.GetPos());
  return *this;
}

void Hippopotamus::Act() const {
  cout << id << "-";
  if (number < 10){
    cout << "0"; 
  }
  cout << number  << ": *grunt*" << endl;
}

void Hippopotamus::Interact() const {
  Description("hippopotamus");
  Act();
}

string Hippopotamus::GetId() const {
  return id;
}

int Hippopotamus::GetNumber() const {
  return number;
}

float Hippopotamus::GetWeight() const {
  return weight;
}

float Hippopotamus::GetEat() const {
  return eat;
}

pair<int,int> Hippopotamus::GetPos() const {
  return position;
}

char Hippopotamus::GetType() const {
  return type;
}

char Hippopotamus::GetLegend() const {
  return legend;
}

set<char> Hippopotamus::GetHabitat() const {
  return habitat;
}

void Hippopotamus::SetPos(pair<int,int> _position) {
  position.first=_position.first;
  position.second = _position.second;
}

void Hippopotamus::SetWeight(float _weight) {
  weight = _weight;
}

set<string> Hippopotamus::GetCompatible() const {
  return compatible;
}

void Hippopotamus::Description(string a) const {
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

void Hippopotamus::Move(int direction) {
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