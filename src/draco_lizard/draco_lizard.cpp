//File draco_lizard.cpp

#include "draco_lizard.h"
#include <iostream>
using namespace std;

int DracoLizard::draco_lizard_nb = 0;

DracoLizard::DracoLizard(pair<int,int> _position) {
	id = "DRL";
    number = ++draco_lizard_nb;
    legend = '=';
    weight = 0.2;
    eat = food;
    type = 'K';
    position = _position;
    eat = food;
	habitat.insert('L');	
	habitat.insert('A');
	compatible.insert("ZBR");
	compatible.insert("MCQ");
	compatible.insert("HG");
	compatible.insert("PNG");
	compatible.insert("DRL");
	compatible.insert("CLG");
	compatible.insert("SGL");
	compatible.insert("OW");
	compatible.insert("RBN");
	compatible.insert("GSE");
	compatible.insert("CRN");
}

DracoLizard::DracoLizard(float _weight, pair<int,int> _position) {
	id = "DRL";
    number = ++draco_lizard_nb;
    legend = '=';
    weight = 0.2;
    eat = food;
    type = 'K';
    position = _position;
    eat = food;
	habitat.insert('L');
	habitat.insert('A');
	compatible.insert("ZBR");
	compatible.insert("MCQ");
	compatible.insert("HG");
	compatible.insert("PNG");
	compatible.insert("DRL");
	compatible.insert("CLG");
	compatible.insert("SGL");
	compatible.insert("OW");
	compatible.insert("RBN");
	compatible.insert("GSE");
	compatible.insert("CRN");
}

DracoLizard::~DracoLizard(){}

DracoLizard::DracoLizard(const DracoLizard& d) {
  id = d.id;
  number = d.number;
  legend = d.legend;
  weight = d.weight;
  eat = d.eat;
  type = d.type;
  position = d.position;
  habitat = d.habitat;
}

DracoLizard& DracoLizard::operator= (const DracoLizard& d) {
	SetWeight(d.GetWeight());
	SetPos(d.GetPos());
	return *this;
}

void DracoLizard::Act() const {
	cout << id << "-";
	if (number < 10){
		cout << "0"; 
	}
	cout << number	<< ": *jump*" << endl;
}

void DracoLizard::Interact() const {
	Description("draco lizard");
	Act();
}

string DracoLizard::GetId() const {
  return id;
}

int DracoLizard::GetNumber() const {
  return number;
}

float DracoLizard::GetWeight() const {
  return weight;
}

float DracoLizard::GetEat() const {
  return eat;
}

pair<int,int> DracoLizard::GetPos() const {
  return position;
}

char DracoLizard::GetType() const {
  return type;
}

char DracoLizard::GetLegend() const {
  return legend;
}

set<char> DracoLizard::GetHabitat() const {
  return habitat;
}

void DracoLizard::SetPos(pair<int,int> _position) {
  position.first=_position.first;
  position.second = _position.second;
}

void DracoLizard::SetWeight(float _weight) {
  weight = _weight;
}

set<string> DracoLizard::GetCompatible() const {
  return compatible;
}

void DracoLizard::Description(string a) const {
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

void DracoLizard::Move(int direction) {
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