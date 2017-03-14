#include "road.h"
#include <iostream>

using namespace std;

Road::Road() {
  symbol = 'r';
  initsymbol = 'r';
}

Road::Road(char t) {
  symbol = t;
  initsymbol = t;
}

Road::~Road() {}

char Road::GetInitSymbol() const {
  return initsymbol;
}

char Road::GetSymbol() const {
  return symbol;
}

void Road::SetSymbol(char s) {
  symbol = s;
}

void Road::Render() {
  cout << symbol;
}

void Road::Interact() const {}

void Road::ToggleSekat(int direction) {}
    
bool Road::GetSekat(int direction) const {
  return false;
}
