//File penguin.cpp

#include "penguin.h"
#include <iostream>
using namespace std;

int Penguin::penguin_nb = 0;

Penguin::Penguin(pair<int,int> _position) {
  id = "PNG";
  number = ++penguin_nb;
  legend = '(';
  weight = 22;
  eat = food;
  type = 'K';
  position = _position;
  eat = food;
  habitat.insert('L');  
  habitat.insert('W');
  compatible.insert("ZBR");
  compatible.insert("ELP");
  compatible.insert("PNG");
  compatible.insert("HPP");
  compatible.insert("DRL");
  compatible.insert("CLG");
  compatible.insert("SGL");
  compatible.insert("DGG");
  compatible.insert("TRL");
  compatible.insert("DLP");
  compatible.insert("WHL");
  compatible.insert("PLC");
  compatible.insert("GSE");
  compatible.insert("CRN");
}

Penguin::Penguin(float _weight, pair<int,int> _position) {
  id = "PNG";
  number = ++penguin_nb;
  legend = '(';
  weight = _weight;
  eat = food;
  type = 'K';
  position = _position;
  eat = food;
  habitat.insert('L');
  habitat.insert('W');
  compatible.insert("ZBR");
  compatible.insert("ELP");
  compatible.insert("PNG");
  compatible.insert("HPP");
  compatible.insert("DRL");
  compatible.insert("CLG");
  compatible.insert("SGL");
  compatible.insert("DGG");
  compatible.insert("TRL");
  compatible.insert("DLP");
  compatible.insert("WHL");
  compatible.insert("PLC");
  compatible.insert("GSE");
  compatible.insert("CRN");
}

Penguin::~Penguin(){}

Penguin::Penguin(const Penguin& p) {
  id = p.id;
  number = p.number;
  legend = p.legend;
  weight = p.weight;
  eat = p.eat;
  type = p.type;
  position = p.position;
  habitat = p.habitat;
}

Penguin& Penguin::operator= (const Penguin& p) {
  SetWeight(p.GetWeight());
  SetPos(p.GetPos());
  return *this;
}

void Penguin::Act() const {
  cout << id << "-";
  if (number < 10){
    cout << "0"; 
  }
  cout << number  << ": *slide*" << endl;
}

void Penguin::Interact() const {
  Description("penguin");
  Act();
}

string Penguin::GetId() const {
  return id;
}

int Penguin::GetNumber() const {
  return number;
}

float Penguin::GetWeight() const {
  return weight;
}

float Penguin::GetEat() const {
  return eat;
}

pair<int,int> Penguin::GetPos() const {
  return position;
}

char Penguin::GetType() const {
  return type;
}

char Penguin::GetLegend() const {
  return legend;
}

set<char> Penguin::GetHabitat() const {
  return habitat;
}

void Penguin::SetPos(pair<int,int> _position) {
  position.first=_position.first;
  position.second = _position.second;
}

void Penguin::SetWeight(float _weight) {
  weight = _weight;
}

set<string> Penguin::GetCompatible() const {
  return compatible;
}

void Penguin::Description(string a) const {
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

void Penguin::Move(int direction) {
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