//File turtle.cpp

#include "turtle.h"
#include <iostream>
using namespace std;

int Turtle::turtle_nb = 0;

Turtle::Turtle(pair<int,int> _position) {
  id = "TRL";
  number = ++turtle_nb;
  legend = '0';
  weight = 453;
  eat = food;
  type = 'H';
  habitat.insert('W');
  compatible.insert("MRE");
  compatible.insert("DGG");
  compatible.insert("TRL");
  compatible.insert("DLP");
  compatible.insert("WHL");
  compatible.insert("PNG");
  compatible.insert("HPP");
  compatible.insert("GSE");
  compatible.insert("CRN");
}

Turtle::Turtle(float _weight, pair<int,int> _position) {
  id = "TRL";
  number = ++turtle_nb;
  legend = '0';
  weight = _weight;
  eat = food;
  type = 'H';
  habitat.insert('W');
  compatible.insert("MRE");
  compatible.insert("DGG");
  compatible.insert("TRL");
  compatible.insert("DLP");
  compatible.insert("WHL");
  compatible.insert("PNG");
  compatible.insert("HPP");
  compatible.insert("GSE");
  compatible.insert("CRN");
}

Turtle::~Turtle(){}

Turtle::Turtle(const Turtle& t) {
  id = t.id;
  number = t.number;
  legend = t.legend;
  weight = t.weight;
  eat = t.eat;
  type = t.type;
  position = t.position;
  habitat = t.habitat;
}

Turtle& Turtle::operator= (const Turtle& t) {
  SetWeight(t.GetWeight());
  SetPos(t.GetPos());
  return *this;
}

void Turtle::Act() const {
  cout << id << "-";
  if (number < 10){
    cout << "0"; 
  }
  cout << number  << ": *swim*" << endl;
}

void Turtle::Interact() const {
  Description("turtle");
  Act();
}

string Turtle::GetId() const {
  return id;
}

int Turtle::GetNumber() const {
  return number;
}

float Turtle::GetWeight() const {
  return weight;
}

float Turtle::GetEat() const {
  return eat;
}

pair<int,int> Turtle::GetPos() const {
  return position;
}

char Turtle::GetType() const {
  return type;
}

char Turtle::GetLegend() const {
  return legend;
}

set<char> Turtle::GetHabitat() const {
  return habitat;
}

void Turtle::SetPos(pair<int,int> _position) {
  position.first=_position.first;
  position.second = _position.second;
}

void Turtle::SetWeight(float _weight) {
  weight = _weight;
}

set<string> Turtle::GetCompatible() const {
  return compatible;
}

void Turtle::Description(string a) const {
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

void Turtle::Move(int direction) {
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