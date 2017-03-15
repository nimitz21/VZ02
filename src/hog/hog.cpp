//File hog.cpp

#include "hog.h"
#include <iostream>
using namespace std;

int Hog::hog_nb = 0;

Hog::Hog(pair<int,int> _position) {
  id = "HG";
  number = ++hog_nb;
  legend = '6';
  weight = 68;
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
}

Hog::Hog(float _weight, pair<int,int> _position) {
  id = "HG";
  number = ++hog_nb;
  legend = '6';
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
}

Hog::~Hog(){}

Hog::Hog(const Hog& h) {
  id = h.id;
  number = h.number;
  legend = h.legend;
  weight = h.weight;
  eat = h.eat;
  type = h.type;
  position = h.position;
  habitat = h.habitat;
}

Hog& Hog::operator= (const Hog& h) {
  SetWeight(h.GetWeight());
  SetPos(h.GetPos());
  return *this;
}

void Hog::Act() const {
  cout << id << "-";
  if (number < 10){
    cout << "0"; 
  }
  cout << number  << ": *oink*" << endl;
}

void Hog::Interact() const {
  Description("hog");
  Act();
}

string Hog::GetId() const {
  return id;
}

int Hog::GetNumber() const {
  return number;
}

float Hog::GetWeight() const {
  return weight;
}

float Hog::GetEat() const {
  return eat;
}

pair<int,int> Hog::GetPos() const {
  return position;
}

char Hog::GetType() const {
  return type;
}

char Hog::GetLegend() const {
  return legend;
}

set<char> Hog::GetHabitat() const {
  return habitat;
}

void Hog::SetPos(pair<int,int> _position) {
  position.first=_position.first;
  position.second = _position.second;
}

void Hog::SetWeight(float _weight) {
  weight = _weight;
}

set<string> Hog::GetCompatible() const {
  return compatible;
}

void Hog::Description(string a) const {
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

void Hog::Move(int direction) {
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