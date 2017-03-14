//File wolf.cpp

#include "wolf.h"
#include <iostream>
using namespace std;

int Wolf::wolf_nb = 0;

Wolf::Wolf(pair<int,int> _position) {
  id = "WF";
  number = ++wolf_nb;
  legend = '1';
  weight = 45;
  eat = food;
  type = 'K';
  habitat.insert('L');
  compatible.insert("LI");
  compatible.insert("ELP");
  compatible.insert("HPP");
}

Wolf::Wolf(float _weight, pair<int,int> _position) {
  id = "WF";
  number = ++wolf_nb;
  legend = '1';
  weight = _weight;
  eat = food;
  type = 'K';
  habitat.insert('L');
  compatible.insert("LI");
  compatible.insert("ELP");
  compatible.insert("HPP");
}

Wolf::~Wolf(){}

Wolf::Wolf(const Wolf& w) {
  id = w.id;
  number = w.number;
  legend = w.legend;
  weight = w.weight;
  eat = w.eat;
  type = w.type;
  position = w.position;
  habitat = w.habitat;
}

Wolf& Wolf::operator= (const Wolf& w) {
  SetWeight(w.GetWeight());
  SetPos(w.GetPos());
  return *this;
}

void Wolf::Act() const {
  cout << id << "-";
  if (number < 10){
    cout << "0"; 
  }
  cout << number  << ": *howl*" << endl;
}

void Wolf::Interact() const {
  Description("wolf");
  Act();
}

string Wolf::GetId() const {
  return id;
}

int Wolf::GetNumber() const {
  return number;
}

float Wolf::GetWeight() const {
  return weight;
}

float Wolf::GetEat() const {
  return eat;
}

pair<int,int> Wolf::GetPos() const {
  return position;
}

char Wolf::GetType() const {
  return type;
}

char Wolf::GetLegend() const {
  return legend;
}

set<char> Wolf::GetHabitat() const {
  return habitat;
}

void Wolf::SetPos(pair<int,int> _position) {
  position.first=_position.first;
  position.second = _position.second;
}

void Wolf::SetWeight(float _weight) {
  weight = _weight;
}

set<string> Wolf::GetCompatible() const {
  return compatible;
}

void Wolf::Description(string a) const {
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

void Wolf::Move(int direction) {
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