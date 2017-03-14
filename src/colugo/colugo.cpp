//File colugo.cpp

#include "colugo.h"
#include <iostream>
using namespace std;

int Colugo::colugo_nb = 0;

Colugo::Colugo(pair<int,int> _position) {
  id = "CLG";
  number = ++colugo_nb;
  legend = '<';
  weight = 0.035;
  eat = food;
  type = 'H';
  position = _position;
  eat = food;
  habitat.insert('L');  
  habitat.insert('A');
  compatible.insert("ZBR");
  compatible.insert("MCQ");
  compatible.insert("HG");
  compatible.insert("PNG");
  compatible.insert("HPP");
  compatible.insert("DRL");
  compatible.insert("CLG");
  compatible.insert("SGL");
  compatible.insert("HMB");
  compatible.insert("CKT");
  compatible.insert("RBN");
  compatible.insert("GSE");
  compatible.insert("CRN");
}

Colugo::Colugo(float _weight, pair<int,int> _position) {
  id = "CLG";
  number = ++colugo_nb;
  legend = '<';
  weight = _weight;
  eat = food;
  type = 'H';
  position = _position;
  eat = food;
  habitat.insert('L');
  habitat.insert('A');
  compatible.insert("ZBR");
  compatible.insert("MCQ");
  compatible.insert("HG");
  compatible.insert("PNG");
  compatible.insert("HPP");
  compatible.insert("DRL");
  compatible.insert("CLG");
  compatible.insert("SGL");
  compatible.insert("HMB");
  compatible.insert("CKT");
  compatible.insert("RBN");
  compatible.insert("GSE");
  compatible.insert("CRN");
}

Colugo::~Colugo(){}

Colugo::Colugo(const Colugo& c) {
  id = c.id;
  number = c.number;
  legend = c.legend;
  weight = c.weight;
  eat = c.eat;
  type = c.type;
  position = c.position;
  habitat = c.habitat;
}

Colugo& Colugo::operator= (const Colugo& c) {
  SetWeight(c.GetWeight());
  SetPos(c.GetPos());
  return *this;
}

void Colugo::Act() const {
  cout << id << "-";
  if (number < 10){
    cout << "0"; 
  }
  cout << number  << ": *glide*" << endl;
}

void Colugo::Interact() const {
  Description("colugo");
  Act();
}

string Colugo::GetId() const {
  return id;
}

int Colugo::GetNumber() const {
  return number;
}

float Colugo::GetWeight() const {
  return weight;
}

float Colugo::GetEat() const {
  return eat;
}

pair<int,int> Colugo::GetPos() const {
  return position;
}

char Colugo::GetType() const {
  return type;
}

char Colugo::GetLegend() const {
  return legend;
}

set<char> Colugo::GetHabitat() const {
  return habitat;
}

void Colugo::SetPos(pair<int,int> _position) {
  position.first=_position.first;
  position.second = _position.second;
}

void Colugo::SetWeight(float _weight) {
  weight = _weight;
}

set<string> Colugo::GetCompatible() const {
  return compatible;
}

void Colugo::Description(string a) const {
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

void Colugo::Move(int direction) {
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