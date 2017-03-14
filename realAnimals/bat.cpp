//File bat.cpp

#include "bat.h"
#include <iostream>
using namespace std;

int Bat::bat_nb = 0;

Bat::Bat(pair<int,int> _position) {
  id = "BT";
  number = ++bat_nb;
  legend = '*';
  weight = 0.15;
  eat = food;
  type = 'O';
  position = _position;
  habitat.insert('A');
  compatible.insert("HMB");
  compatible.insert("CKT");
  compatible.insert("RBN");
  compatible.insert("BT");
  compatible.insert("PLC");
  compatible.insert("GSE");
  compatible.insert("CRN");
}

Bat::Bat(float _weight, pair<int,int> _position) {
  id = "BT";
  number = ++bat_nb;
  legend = '*';
  weight = _weight;
  eat = food;
  type = 'O';
  position = _position;
  habitat.insert('A');
  compatible.insert("HMB");
  compatible.insert("CKT");
  compatible.insert("RBN");
  compatible.insert("BT");
  compatible.insert("PLC");
  compatible.insert("GSE");
  compatible.insert("CRN");
}

Bat::~Bat(){}

Bat::Bat(const Bat& b) {
  id = b.id;
  number = b.number;
  legend = b.legend;
  weight = b.weight;
  eat = b.eat;
  type = b.type;
  position = b.position;
  habitat = b.habitat;
}

Bat& Bat::operator=(const Bat& b) {
  SetWeight(b.GetWeight());
  SetPos(b.GetPos());
  return *this;
}

string Bat::GetId() const {
  return id;
}

int Bat::GetNumber() const {
  return number;
}

float Bat::GetWeight() const {
  return weight;
}

float Bat::GetEat() const {
  return eat;
}

pair<int,int> Bat::GetPos() const {
  return position;
}

char Bat::GetType() const {
  return type;
}

char Bat::GetLegend() const {
  return legend;
}

set<char> Bat::GetHabitat() const {
  return habitat;
}

void Bat::SetPos(pair<int,int> _position) {
  position.first=_position.first;
  position.second = _position.second;
}

void Bat::SetWeight(float _weight) {
  weight = _weight;
}

set<string> Bat::GetCompatible() const {
  return compatible;
}

void Bat::Description(string a) const {
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

void Bat::Move(int direction) {
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

void Bat::Act() const {
  cout << id << "-";
  if (number < 10){
    cout << "0"; 
  }
  cout << number  << ": *screech*" << endl;
}

void Bat::Interact() const {
  Description("bat");
  Act();
}
