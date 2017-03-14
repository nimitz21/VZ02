//File elephant.cpp

#include "elephant.h"
#include <iostream>
using namespace std;

int Elephant::elephant_nb = 0;

Elephant::Elephant(pair<int,int> _position) {
  number = ++elephant_nb;
  legend = '4';
  weight = 5000;
  eat = food;
  type = 'H';
  position = _position;
  eat = food;
  habitat.insert('L');
  compatible.insert("WF");
  compatible.insert("ZBR");
  compatible.insert("ELP");
  compatible.insert("MCQ");
  compatible.insert("HG");
  compatible.insert("PNG");
  compatible.insert("HPP");
}

Elephant::Elephant(float _weight, pair<int,int> _position) {
  id = "ELp";
  number = ++elephant_nb;
  legend = '4';
  weight = _weight;
  eat = food;
  type = 'H';
  position = _position;
  eat = food;
  habitat.insert('L');
  compatible.insert("WF");
  compatible.insert("ZBR");
  compatible.insert("ELP");
  compatible.insert("MCQ");
  compatible.insert("HG");
  compatible.insert("PNG");
  compatible.insert("HPP");
}

Elephant::~Elephant(){}

Elephant::Elephant(const Elephant& e) {
  id = e.id;
  number = e.number;
  legend = e.legend;
  weight = e.weight;
  eat = e.eat;
  type = e.type;
  position = e.position;
  habitat = e.habitat;
}

Elephant& Elephant::operator= (const Elephant& e) {
  SetWeight(e.GetWeight());
  SetPos(e.GetPos());
  return *this;
}

void Elephant::Act() const {
  cout << id << "-";
  if (number < 10){
    cout << "0"; 
  }
  cout << number  << ": *trumpet*" << endl;
}

void Elephant::Interact() const {
  Description("elephant");
  Act();
}

string Elephant::GetId() const {
  return id;
}

int Elephant::GetNumber() const {
  return number;
}

float Elephant::GetWeight() const {
  return weight;
}

float Elephant::GetEat() const {
  return eat;
}

pair<int,int> Elephant::GetPos() const {
  return position;
}

char Elephant::GetType() const {
  return type;
}

char Elephant::GetLegend() const {
  return legend;
}

set<char> Elephant::GetHabitat() const {
  return habitat;
}

void Elephant::SetPos(pair<int,int> _position) {
  position.first=_position.first;
  position.second = _position.second;
}

void Elephant::SetWeight(float _weight) {
  weight = _weight;
}

set<string> Elephant::GetCompatible() const {
  return compatible;
}

void Elephant::Description(string a) const {
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

void Elephant::Move(int direction) {
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