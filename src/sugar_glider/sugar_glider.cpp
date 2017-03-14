//File sugar_glider.cpp

#include "sugar_glider.h"
#include <iostream>
using namespace std;

int SugarGlider::sugar_glider_nb = 0;

SugarGlider::SugarGlider(pair<int,int> _position) {
	id = "SGL";
	number = ++sugar_glider_nb;
	legend = '>';
	weight = 0.12;
	eat = food;
	type = 'O';
	habitat.insert('L');	
	habitat.insert('A');
	compatible.insert("ZBR");
	compatible.insert("MCQ");
	compatible.insert("HG");
	compatible.insert("PNG");
	compatible.insert("DRL");
	compatible.insert("CLG");
	compatible.insert("SGL");
	compatible.insert("HMB");
	compatible.insert("GSE");
	compatible.insert("CRN");
}

SugarGlider::SugarGlider(float _weight, pair<int,int> _position) {
	id = "SGL";
	number = ++sugar_glider_nb;
	legend = '>';
	weight = _weight;
	eat = food;
	type = 'O';
	position = _position;
	habitat.insert('L');
	habitat.insert('A');
	compatible.insert("ZBR");
	compatible.insert("MCQ");
	compatible.insert("HG");
	compatible.insert("PNG");
	compatible.insert("DRL");
	compatible.insert("CLG");
	compatible.insert("SGL");
	compatible.insert("HMB");
	compatible.insert("GSE");
	compatible.insert("CRN");
}

SugarGlider::~SugarGlider(){}

SugarGlider::SugarGlider(const SugarGlider& s) {
  id = s.id;
  number = s.number;
  legend = s.legend;
  weight = s.weight;
  eat = s.eat;
  type = s.type;
  position = s.position;
  habitat = s.habitat;
}

SugarGlider& SugarGlider::operator= (const SugarGlider& s) {
	SetWeight(s.GetWeight());
	SetPos(s.GetPos());
	return *this;
}

void SugarGlider::Act() const {
	cout << id << "-";
	if (number < 10){
		cout << "0"; 
	}
	cout << number	<< ": *crab*" << endl;
}

void SugarGlider::Interact() const {
	Description("sugar glider");
	Act();
}

string SugarGlider::GetId() const {
  return id;
}

int SugarGlider::GetNumber() const {
  return number;
}

float SugarGlider::GetWeight() const {
  return weight;
}

float SugarGlider::GetEat() const {
  return eat;
}

pair<int,int> SugarGlider::GetPos() const {
  return position;
}

char SugarGlider::GetType() const {
  return type;
}

char SugarGlider::GetLegend() const {
  return legend;
}

set<char> SugarGlider::GetHabitat() const {
  return habitat;
}

void SugarGlider::SetPos(pair<int,int> _position) {
  position.first=_position.first;
  position.second = _position.second;
}

void SugarGlider::SetWeight(float _weight) {
  weight = _weight;
}

set<string> SugarGlider::GetCompatible() const {
  return compatible;
}

void SugarGlider::Description(string a) const {
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

void SugarGlider::Move(int direction) {
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