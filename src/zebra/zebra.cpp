//File zebra.cpp

#include "zebra.h"
#include <iostream>
using namespace std;

int Zebra::zebra_nb = 0;

Zebra::Zebra(pair<int,int> _position) {
  id = "ZBR";
  number = ++zebra_nb;
  legend = '3';
  weight = 226;
  eat = food;
  type = 'H';
  habitat.insert('L');
  compatible.insert("ZBR");
  compatible.insert("ELP");
  compatible.insert("MCQ");
  compatible.insert("HG");
  compatible.insert("PNG");
  compatible.insert("HPP");
  compatible.insert("DRL");
  compatible.insert("CLG");
  compatible.insert("SGL");
}

Zebra::Zebra(float _weight, pair<int,int> _position) {
  id = "ZBR";
  number = ++zebra_nb;
  legend = '3';
  weight = _weight;
  eat = food;
  type = 'H';
  habitat.insert('L');
  compatible.insert("ZBR");
  compatible.insert("ELP");
  compatible.insert("MCQ");
  compatible.insert("HG");
  compatible.insert("PNG");
  compatible.insert("HPP");
  compatible.insert("DRL");
  compatible.insert("CLG");
  compatible.insert("SGL");
}

Zebra::~Zebra(){}

Zebra::Zebra(const Zebra& z) {
  id = z.id;
  number = z.number;
  legend = z.legend;
  weight = z.weight;
  eat = z.eat;
  type = z.type;
  position = z.position;
  habitat = z.habitat;
}

Zebra& Zebra::operator= (const Zebra& z) {
  SetWeight(z.GetWeight());
  SetPos(z.GetPos());
  return *this;
}

void Zebra::Act() const {
  cout << id << "-";
  if (number < 10){
    cout << "0"; 
  }
  cout << number  << ": *snort*" << endl;
}

void Zebra::Interact() const {
  Description("zebra");
  Act();
}

string Zebra::GetId() const {
  return id;
}

int Zebra::GetNumber() const {
  return number;
}

float Zebra::GetWeight() const {
  return weight;
}

float Zebra::GetEat() const {
  return eat;
}

pair<int,int> Zebra::GetPos() const {
  return position;
}

char Zebra::GetType() const {
  return type;
}

char Zebra::GetLegend() const {
  return legend;
}

set<char> Zebra::GetHabitat() const {
  return habitat;
}

void Zebra::SetPos(pair<int,int> _position) {
  position.first=_position.first;
  position.second = _position.second;
}

void Zebra::SetWeight(float _weight) {
  weight = _weight;
}

set<string> Zebra::GetCompatible() const {
  return compatible;
}

void Zebra::Description(string a) const {
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

void Zebra::Move(int direction) {
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