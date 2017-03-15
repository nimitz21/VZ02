//File macaque.cpp

#include "macaque.h"
#include <iostream>
using namespace std;

int Macaque::macaque_nb = 0;

Macaque::Macaque(pair<int,int> _position) {
  id = "MCQ";
  number = ++macaque_nb;
  legend = '5';
  weight = 9;
  eat = food;
  type = 'O';
  position = _position;
  eat = food;
  habitat.insert('L');
  compatible.insert("ZBR");
  compatible.insert("ELP");
  compatible.insert("MCQ");
  compatible.insert("HG");
  compatible.insert("HPP");
  compatible.insert("DRL");
  compatible.insert("CLG");
  compatible.insert("SGL");
}

Macaque::Macaque(float _weight, pair<int,int> _position) {
  id = "MCQ";
  number = ++macaque_nb;
  legend = '5';
  weight = _weight;
  eat = food;
  type = 'O';
  position = _position;
  eat = food;
  habitat.insert('L');
  compatible.insert("ZBR");
  compatible.insert("ELP");
  compatible.insert("MCQ");
  compatible.insert("HG");
  compatible.insert("HPP");
  compatible.insert("DRL");
  compatible.insert("CLG");
  compatible.insert("SGL");
}

Macaque::~Macaque(){}

Macaque::Macaque(const Macaque& m) {
  id = m.id;
  number = m.number;
  legend = m.legend;
  weight = m.weight;
  eat = m.eat;
  type = m.type;
  position = m.position;
  habitat = m.habitat;
}

Macaque& Macaque::operator= (const Macaque& m) {
  SetWeight(m.GetWeight());
  SetPos(m.GetPos());
  return *this;
}

void Macaque::Act() const {
  cout << id << "-";
  if (number < 10){
    cout << "0"; 
  }
  cout << number  << ": *chatter*" << endl;
}

void Macaque::Interact() const {
  Description("macaque");
  Act();
}

string Macaque::GetId() const {
  return id;
}

int Macaque::GetNumber() const {
  return number;
}

float Macaque::GetWeight() const {
  return weight;
}

float Macaque::GetEat() const {
  return eat;
}

pair<int,int> Macaque::GetPos() const {
  return position;
}

char Macaque::GetType() const {
  return type;
}

char Macaque::GetLegend() const {
  return legend;
}

set<char> Macaque::GetHabitat() const {
  return habitat;
}

void Macaque::SetPos(pair<int,int> _position) {
  position.first=_position.first;
  position.second = _position.second;
}

void Macaque::SetWeight(float _weight) {
  weight = _weight;
}

set<string> Macaque::GetCompatible() const {
  return compatible;
}

void Macaque::Description(string a) const {
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

void Macaque::Move(int direction) {
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