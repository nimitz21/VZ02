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

char Cell::GetInitSymbol() const {
  return initsymbol;
}

char Cell::GetSymbol() const {
  return symbol;
}

void Cell::SetSymbol(char s) {
  symbol = s;
}

void Cell::Render() {
  cout << symbol;
}

void Road::Interact() const {}

void Road::ToggleSekat(int direction) {}
    
bool Road::GetSekat(int direction) const {
  return false;
}
