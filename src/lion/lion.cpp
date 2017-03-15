//File lion.cpp

#include "lion.h"
#include <iostream>
using namespace std;

int Lion::lion_nb = 0;

Lion::Lion(pair<int,int> _position) {
  id = "LI";
  number = ++lion_nb;
  legend = '2';
  weight = 158;
  eat = food;
  type = 'K';
  position = _position;
  eat = food;
  habitat.insert('L');
  compatible.insert("LI");
}

Lion::Lion(float _weight, pair<int,int> _position) {
  id = "LI";
  number = ++lion_nb;
  legend = '2';
  weight = _weight;
  eat = food;
  type = 'K';
  position = _position;
  eat = food;
  habitat.insert('L');
  compatible.insert("LI");
}

Lion::~Lion(){}

Lion::Lion(const Lion& l) {
  id = l.id;
  number = l.number;
  legend = l.legend;
  weight = l.weight;
  eat = l.eat;
  type = l.type;
  position = l.position;
  habitat = l.habitat;
}

Lion& Lion::operator= (const Lion& l) {
  SetWeight(l.GetWeight());
  SetPos(l.GetPos());
  return *this;
}

void Lion::Act() const {
  cout << id << "-";
  if (number < 10){
    cout << "0"; 
  }
  cout << number  << ": *roar*" << endl;
}

void Lion::Interact() const {
  Description("lion");
  Act();
}

string Lion::GetId() const {
  return id;
}

int Lion::GetNumber() const {
  return number;
}

float Lion::GetWeight() const {
  return weight;
}

float Lion::GetEat() const {
  return eat;
}

pair<int,int> Lion::GetPos() const {
  return position;
}

char Lion::GetType() const {
  return type;
}

char Lion::GetLegend() const {
  return legend;
}

set<char> Lion::GetHabitat() const {
  return habitat;
}

void Lion::SetPos(pair<int,int> _position) {
  position.first=_position.first;
  position.second = _position.second;
}

void Lion::SetWeight(float _weight) {
  weight = _weight;
}

set<string> Lion::GetCompatible() const {
  return compatible;
}

void Lion::Description(string a) const {
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

void Lion::Move(int direction) {
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