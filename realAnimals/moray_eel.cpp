//File moray_eel.cpp

#include "moray_eel.h"
#include <iostream>
using namespace std;

int MorayEel::moray_eel_nb = 0;

MorayEel::MorayEel(pair<int,int> _position) {
  id = "MRE";
  number = ++moray_eel_nb;
  legend = '8';
  weight = 13;
  eat = food;
  type = 'K';
  position = _position;
  eat = food;
  habitat.insert('W');
  compatible.insert("MRE");
  compatible.insert("DGG");
  compatible.insert("TRL");
  compatible.insert("DLP");
  compatible.insert("WHL");
  compatible.insert("HPP");
}

MorayEel::MorayEel(float _weight, pair<int,int> _position) {
  id = "MRE";
  number = ++moray_eel_nb;
  legend = '8';
  weight = _weight;
  eat = food;
  type = 'K';
  position = _position;
  eat = food;
  habitat.insert('W');
  compatible.insert("MRE");
  compatible.insert("DGG");
  compatible.insert("TRL");
  compatible.insert("DLP");
  compatible.insert("WHL");
  compatible.insert("HPP");
}

MorayEel::~MorayEel(){}

MorayEel::MorayEel(const MorayEel& m) {
  id = m.id;
  number = m.number;
  legend = m.legend;
  weight = m.weight;
  eat = m.eat;
  type = m.type;
  position = m.position;
  habitat = m.habitat;
}

MorayEel& MorayEel::operator= (const MorayEel& m) {
  SetWeight(m.GetWeight());
  SetPos(m.GetPos());
  return *this;
}

void MorayEel::Act() const {
  cout << id << "-";
  if (number < 10){
    cout << "0"; 
  }
  cout << number  << ": *hide into rocks*" << endl;
}

void MorayEel::Interact() const {
  Description("moray eel");
  Act();
}

string MorayEel::GetId() const {
  return id;
}

int MorayEel::GetNumber() const {
  return number;
}

float MorayEel::GetWeight() const {
  return weight;
}

float MorayEel::GetEat() const {
  return eat;
}

pair<int,int> MorayEel::GetPos() const {
  return position;
}

char MorayEel::GetType() const {
  return type;
}

char MorayEel::GetLegend() const {
  return legend;
}

set<char> MorayEel::GetHabitat() const {
  return habitat;
}

void MorayEel::SetPos(pair<int,int> _position) {
  position.first=_position.first;
  position.second = _position.second;
}

void MorayEel::SetWeight(float _weight) {
  weight = _weight;
}

set<string> MorayEel::GetCompatible() const {
  return compatible;
}

void MorayEel::Description(string a) const {
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

void MorayEel::Move(int direction) {
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