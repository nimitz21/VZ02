#ifndef UTILITY_H
#define UTILITY_H

#define pairintint pair<int,int>

#define MakroGetterAnimal(Type,Function,Param);     \
Type Function(const Pointer& Param) {               \
  if (Param.id == "WF") {                           \
    return ((Wolf *)(Param.p))->Function();         \
  }                                                 \
  else if (Param.id == "LI") {                      \
    return ((Lion *)(Param.p))->Function();         \
  }                                                 \
  else if (Param.id == "ZBR") {                     \
    return ((Zebra *)(Param.p))->Function();        \
  }                                                 \
  else if (Param.id == "ELP") {                     \
    return ((Elephant *)(Param.p))->Function();     \
  }                                                 \
  else if (Param.id == "MCQ") {                     \
    return ((Macaque *)(Param.p))->Function();      \
  }                                                 \
  else if (Param.id == "HG") {                      \
    return ((Hog *)(Param.p))->Function();          \
  }                                                 \
  else if (Param.id == "SHK") {                     \
    return ((Shark *)(Param.p))->Function();        \
  }                                                 \
  else if (Param.id == "MRE") {                     \
    return ((MorayEel *)(Param.p))->Function();     \
  }                                                 \
  else if (Param.id == "DGG") {                     \
    return ((Dugong *)(Param.p))->Function();       \
  }                                                 \
  else if (Param.id == "TRL") {                     \
    return ((Turtle *)(Param.p))->Function();       \
  }                                                 \
  else if (Param.id == "DLP") {                     \
    return ((Dolphin *)(Param.p))->Function();      \
  }                                                 \
  else if (Param.id == "WHL") {                     \
    return ((Whale *)(Param.p))->Function();        \
  }                                                 \
  else if (Param.id == "EGL") {                     \
    return ((Eagle *)(Param.p))->Function();        \
  }                                                 \
  else if (Param.id == "OW") {                      \
    return ((Owl *)(Param.p))->Function();          \
  }                                                 \
  else if (Param.id == "HMB") {                     \
    return ((Hummingbird *)(Param.p))->Function();  \
  }                                                 \
  else if (Param.id == "CKT") {                     \
    return ((Cockatoo *)(Param.p))->Function();     \
  }                                                 \
  else if (Param.id == "RBN") {                     \
    return ((Robin *)(Param.p))->Function();        \
  }                                                 \
  else if (Param.id == "BT") {                      \
    return ((Bat *)(Param.p))->Function();          \
  }                                                 \
  else if (Param.id == "PNG") {                     \
    return ((Penguin *)(Param.p))->Function();      \
  }                                                 \
  else if (Param.id == "HPP") {                     \
    return ((Hippopotamus *)(Param.p))->Function(); \
  }                                                 \
  else if (Param.id == "PLC") {                     \
    return ((Pelican *)(Param.p))->Function();      \
  }                                                 \
  else if (Param.id == "GSE") {                     \
    return ((Goose *)(Param.p))->Function();        \
  }                                                 \
  else if (Param.id == "CRN") {                     \
    return ((Crane *)(Param.p))->Function();        \
  }                                                 \
  else if (Param.id == "DRL") {                     \
    return ((DracoLizard *)(Param.p))->Function();  \
  }                                                 \
  else if (Param.id == "CLG") {                     \
    return ((Colugo *)(Param.p))->Function();       \
  }                                                 \
  else if (Param.id == "SGL") {                     \
    return ((SugarGlider *)(Param.p))->Function();  \
  }                                                 \
}

#define MakroSetterAnimal(Function,Param,Value)     \
{                                                   \
  if (Param.id == "WF") {                           \
    ((Wolf *)(Param.p))->Function(Value);           \
  }                                                 \
  else if (Param.id == "LI") {                      \
    ((Lion *)(Param.p))->Function(Value);           \
  }                                                 \
  else if (Param.id == "ZBR") {                     \
    ((Zebra *)(Param.p))->Function(Value);          \
  }                                                 \
  else if (Param.id == "ELP") {                     \
    ((Elephant *)(Param.p))->Function(Value);       \
  }                                                 \
  else if (Param.id == "MCQ") {                     \
    ((Macaque *)(Param.p))->Function(Value);        \
  }                                                 \
  else if (Param.id == "HG") {                      \
    ((Hog *)(Param.p))->Function(Value);            \
  }                                                 \
  else if (Param.id == "SHK") {                     \
    ((Shark *)(Param.p))->Function(Value);          \
  }                                                 \
  else if (Param.id == "MRE") {                     \
    ((MorayEel *)(Param.p))->Function(Value);       \
  }                                                 \
  else if (Param.id == "DGG") {                     \
    ((Dugong *)(Param.p))->Function(Value);         \
  }                                                 \
  else if (Param.id == "TRL") {                     \
    ((Turtle *)(Param.p))->Function(Value);         \
  }                                                 \
  else if (Param.id == "DLP") {                     \
    ((Dolphin *)(Param.p))->Function(Value);        \
  }                                                 \
  else if (Param.id == "WHL") {                     \
    ((Whale *)(Param.p))->Function(Value);          \
  }                                                 \
  else if (Param.id == "EGL") {                     \
    ((Eagle *)(Param.p))->Function(Value);          \
  }                                                 \
  else if (Param.id == "OW") {                      \
    ((Owl *)(Param.p))->Function(Value);            \
  }                                                 \
  else if (Param.id == "HMB") {                     \
    ((Hummingbird *)(Param.p))->Function(Value);    \
  }                                                 \
  else if (Param.id == "CKT") {                     \
    ((Cockatoo *)(Param.p))->Function(Value);       \
  }                                                 \
  else if (Param.id == "RBN") {                     \
    ((Robin *)(Param.p))->Function(Value);          \
  }                                                 \
  else if (Param.id == "BT") {                      \
    ((Bat *)(Param.p))->Function(Value);            \
  }                                                 \
  else if (Param.id == "PNG") {                     \
    ((Penguin *)(Param.p))->Function(Value);        \
  }                                                 \
  else if (Param.id == "HPP") {                     \
    ((Hippopotamus *)(Param.p))->Function(Value);   \
  }                                                 \
  else if (Param.id == "PLC") {                     \
    ((Pelican *)(Param.p))->Function(Value);        \
  }                                                 \
  else if (Param.id == "GSE") {                     \
    ((Goose *)(Param.p))->Function(Value);          \
  }                                                 \
  else if (Param.id == "CRN") {                     \
    ((Crane *)(Param.p))->Function(Value);          \
  }                                                 \
  else if (Param.id == "DRL") {                     \
    ((DracoLizard *)(Param.p))->Function(Value);    \
  }                                                 \
  else if (Param.id == "CLG") {                     \
    ((Colugo *)(Param.p))->Function(Value);         \
  }                                                 \
  else if (Param.id == "SGL") {                     \
    ((SugarGlider *)(Param.p))->Function(Value);    \
  }                                                 \
}

#define MakroInteractAnimal(Param)                  \
{                                                   \
  if (Param.id == "WF") {                           \
    ((Wolf *)(Param.p))->Interact();                \
  }                                                 \
  else if (Param.id == "LI") {                      \
    ((Lion *)(Param.p))->Interact();                \
  }                                                 \
  else if (Param.id == "ZBR") {                     \
    ((Zebra *)(Param.p))->Interact();               \
  }                                                 \
  else if (Param.id == "ELP") {                     \
    ((Elephant *)(Param.p))->Interact();            \
  }                                                 \
  else if (Param.id == "MCQ") {                     \
    ((Macaque *)(Param.p))->Interact();             \
  }                                                 \
  else if (Param.id == "HG") {                      \
    ((Hog *)(Param.p))->Interact();                 \
  }                                                 \
  else if (Param.id == "SHK") {                     \
    ((Shark *)(Param.p))->Interact();               \
  }                                                 \
  else if (Param.id == "MRE") {                     \
    ((MorayEel *)(Param.p))->Interact();            \
  }                                                 \
  else if (Param.id == "DGG") {                     \
    ((Dugong *)(Param.p))->Interact();              \
  }                                                 \
  else if (Param.id == "TRL") {                     \
    ((Turtle *)(Param.p))->Interact();              \
  }                                                 \
  else if (Param.id == "DLP") {                     \
    ((Dolphin *)(Param.p))->Interact();             \
  }                                                 \
  else if (Param.id == "WHL") {                     \
    ((Whale *)(Param.p))->Interact();               \
  }                                                 \
  else if (Param.id == "EGL") {                     \
    ((Eagle *)(Param.p))->Interact();               \
  }                                                 \
  else if (Param.id == "OW") {                      \
    ((Owl *)(Param.p))->Interact();                 \
  }                                                 \
  else if (Param.id == "HMB") {                     \
    ((Hummingbird *)(Param.p))->Interact();         \
  }                                                 \
  else if (Param.id == "CKT") {                     \
    ((Cockatoo *)(Param.p))->Interact();            \
  }                                                 \
  else if (Param.id == "RBN") {                     \
    ((Robin *)(Param.p))->Interact();               \
  }                                                 \
  else if (Param.id == "BT") {                      \
    ((Bat *)(Param.p))->Interact();                 \
  }                                                 \
  else if (Param.id == "PNG") {                     \
    ((Penguin *)(Param.p))->Interact();             \
  }                                                 \
  else if (Param.id == "HPP") {                     \
    ((Hippopotamus *)(Param.p))->Interact();        \
  }                                                 \
  else if (Param.id == "PLC") {                     \
    ((Pelican *)(Param.p))->Interact();             \
  }                                                 \
  else if (Param.id == "GSE") {                     \
    ((Goose *)(Param.p))->Interact();               \
  }                                                 \
  else if (Param.id == "CRN") {                     \
    ((Crane *)(Param.p))->Interact();               \
  }                                                 \
  else if (Param.id == "DRL") {                     \
    ((DracoLizard *)(Param.p))->Interact();         \
  }                                                 \
  else if (Param.id == "CLG") {                     \
    ((Colugo *)(Param.p))->Interact();              \
  }                                                 \
  else if (Param.id == "SGL") {                     \
    ((SugarGlider *)(Param.p))->Interact();         \
  }                                                 \
}

#define MakroMove(Param, Direction)                 \
{                                                   \
  if (Param.id == "WF") {                           \
    ((Wolf *)(Param.p))->Move(Direction);           \
  }                                                 \
  else if (Param.id == "LI") {                      \
    ((Lion *)(Param.p))->Move(Direction);           \
  }                                                 \
  else if (Param.id == "ZBR") {                     \
    ((Zebra *)(Param.p))->Move(Direction);          \
  }                                                 \
  else if (Param.id == "ELP") {                     \
    ((Elephant *)(Param.p))->Move(Direction);       \
  }                                                 \
  else if (Param.id == "MCQ") {                     \
    ((Macaque *)(Param.p))->Move(Direction);        \
  }                                                 \
  else if (Param.id == "HG") {                      \
    ((Hog *)(Param.p))->Move(Direction);            \
  }                                                 \
  else if (Param.id == "SHK") {                     \
    ((Shark *)(Param.p))->Move(Direction);          \
  }                                                 \
  else if (Param.id == "MRE") {                     \
    ((MorayEel *)(Param.p))->Move(Direction);       \
  }                                                 \
  else if (Param.id == "DGG") {                     \
    ((Dugong *)(Param.p))->Move(Direction);         \
  }                                                 \
  else if (Param.id == "TRL") {                     \
    ((Turtle *)(Param.p))->Move(Direction);         \
  }                                                 \
  else if (Param.id == "DLP") {                     \
    ((Dolphin *)(Param.p))->Move(Direction);        \
  }                                                 \
  else if (Param.id == "WHL") {                     \
    ((Whale *)(Param.p))->Move(Direction);          \
  }                                                 \
  else if (Param.id == "EGL") {                     \
    ((Eagle *)(Param.p))->Move(Direction);          \
  }                                                 \
  else if (Param.id == "OW") {                      \
    ((Owl *)(Param.p))->Move(Direction);            \
  }                                                 \
  else if (Param.id == "HMB") {                     \
    ((Hummingbird *)(Param.p))->Move(Direction);    \
  }                                                 \
  else if (Param.id == "CKT") {                     \
    ((Cockatoo *)(Param.p))->Move(Direction);       \
  }                                                 \
  else if (Param.id == "RBN") {                     \
    ((Robin *)(Param.p))->Move(Direction);          \
  }                                                 \
  else if (Param.id == "BT") {                      \
    ((Bat *)(Param.p))->Move(Direction);            \
  }                                                 \
  else if (Param.id == "PNG") {                     \
    ((Penguin *)(Param.p))->Move(Direction);        \
  }                                                 \
  else if (Param.id == "HPP") {                     \
    ((Hippopotamus *)(Param.p))->Move(Direction);   \
  }                                                 \
  else if (Param.id == "PLC") {                     \
    ((Pelican *)(Param.p))->Move(Direction);        \
  }                                                 \
  else if (Param.id == "GSE") {                     \
    ((Goose *)(Param.p))->Move(Direction);          \
  }                                                 \
  else if (Param.id == "CRN") {                     \
    ((Crane *)(Param.p))->Move(Direction);          \
  }                                                 \
  else if (Param.id == "DRL") {                     \
    ((DracoLizard *)(Param.p))->Move(Direction);    \
  }                                                 \
  else if (Param.id == "CLG") {                     \
    ((Colugo *)(Param.p))->Move(Direction);         \
  }                                                 \
  else if (Param.id == "SGL") {                     \
    ((SugarGlider *)(Param.p))->Move(Direction);    \
  }                                                 \
}


#define MakroGetterCell(Type,Function,Param);       \
Type Function(const Pointer& Param) {               \
  if (Param.id == "RO") {                           \
    return ((Road *)(Param.p))->Function();         \
  }                                                 \
  else if (Param.id == "HA") {                      \
    return ((Habitat *)(Param.p))->Function();      \
  }                                                 \
  else if (Param.id == "PA") {                      \
    return ((Park *)(Param.p))->Function();         \
  }                                                 \
  else if (Param.id == "RE") {                      \
    return ((Restaurant *)(Param.p))->Function();   \
  }                                                 \
}

#define MakroSetterCell(Function,Param,Value)       \
{                                                   \
  if (Param.id == "RO") {                           \
    ((Road *)(Param.p))->Function(Value);           \
  }                                                 \
  else if (Param.id == "HA") {                      \
    ((Habitat *)(Param.p))->Function(Value);        \
  }                                                 \
  else if (Param.id == "PA") {                      \
    ((Park *)(Param.p))->Function(Value);           \
  }                                                 \
  else if (Param.id == "RE") {                      \
    ((Restaurant *)(Param.p))->Function(Value);     \
  }                                                 \
}

#define MakroInteractCell(Param)                    \
{                                                   \
  if (Param.id == "RO") {                           \
    ((Road *)(Param.p))->Interact();                \
  }                                                 \
  else if (Param.id == "HA") {                      \
    ((Habitat *)(Param.p))->Interact();             \
  }                                                 \
  else if (Param.id == "PA") {                      \
    ((Park *)(Param.p))->Interact();                \
  }                                                 \
  else if (Param.id == "RE") {                      \
    ((Restaurant *)(Param.p))->Interact();          \
  }                                                 \
}

#define MakroGetterSekat(Param, Direction)                 \
bool GetSekat(const Pointer& Param, int Direction) {       \
  if (Param.id == "RO") {                                  \
    return ((Road *)(Param.p))->GetSekat(Direction);       \
  }                                                        \
  else if (Param.id == "HA") {                             \
    return ((Habitat *)(Param.p))->GetSekat(Direction);    \
  }                                                        \
  else if (Param.id == "PA") {                             \
    ((Park *)(Param.p))->GetSekat(Direction);              \
  }                                                        \
  else if (Param.id == "RE") {                             \
    ((Restaurant *)(Param.p))->GetSekat(Direction);        \
  }                                                        \
}

#define MakroToggleSekat(Param, Direction)             \
{                                                      \
  if (Param.id == "RO") {                              \
    ((Road *)(Param.p))->ToggleSekat(Direction);       \
  }                                                    \
  else if (Param.id == "HA") {                         \
    ((Habitat *)(Param.p))->ToggleSekat(Direction);    \
  }                                                    \
  else if (Param.id == "PA") {                         \
    ((Park *)(Param.p))->ToggleSekat(Direction);       \
  }                                                    \
  else if (Param.id == "RE") {                         \
    ((Restaurant *)(Param.p))->ToggleSekat(Direction); \
  }                                                    \
}

#define MakroRender(Param)                          \
{                                                   \
  if (Param.id == "RO") {                           \
    ((Road *)(Param.p))->Render();                  \
  }                                                 \
  else if (Param.id == "HA") {                      \
    ((Habitat *)(Param.p))->Render();               \
  }                                                 \
  else if (Param.id == "PA") {                      \
    ((Park *)(Param.p))->Render();                  \
  }                                                 \
  else if (Param.id == "RE") {                      \
    ((Restaurant *)(Param.p))->Render();            \
  }                                                 \
}

#define MakroNewCell(baris)                         \
{                                                   \
  switch (baris) {                                  \
    case 'W': {                                     \
      Habitat* pw = new Habitat ('W');              \
      cells[i][j].p = (Habitat*) pw;                \
      cells[i][j].id = "HA";                        \
    }                                               \
    break;                                          \
    case 'A': {                                     \
      Habitat* pa = new Habitat ('A');              \
      cells[i][j].p = (Habitat*) pa;                \
      cells[i][j].id = "HA";                        \
    }                                               \
    break;                                          \
    case 'L': {                                     \
      Habitat* pl = new Habitat ('L');              \
      cells[i][j].p = (Habitat*) pl;                \
      cells[i][j].id = "HA";                        \
    }                                               \
    break;                                          \
    case 'X': {                                     \
      Road* px = new Road ('X');                    \
      cells[i][j].p = (Road*) px;                   \
      cells[i][j].id = "RO";                        \
    }                                               \
    break;                                          \
    case 'N': {                                     \
      Road* pn = new Road ('N');                    \
      cells[i][j].p = (Road*) pn;                   \
      cells[i][j].id = "RO";                        \
    }                                               \
    break;                                          \
    case 'r': {                                     \
      Road* pr = new Road ('r');                    \
      cells[i][j].p = (Road*) pr;                   \
      cells[i][j].id = "RO";                        \
    }                                               \
    break;                                          \
    case 'R': {                                     \
      Restaurant* prt = new Restaurant;             \
      cells[i][j].p = (Restaurant*) prt;            \
      cells[i][j].id = "RE";                        \
    }                                               \
    break;                                          \
    case 'P': {                                     \
      Park* pp = new Park;                          \
      cells[i][j].p = (Park*) pp;                   \
      cells[i][j].id = "PA";                        \
    }                                               \
    break;                                          \
  }                                                 \
}

#define MakroNewAnimal(_id,weight)                                      \
{                                                                       \
  if (_id == "WF") {                                                    \
    Wolf* pa;                                                           \
    if (weight != 0) pa = new Wolf(weight, make_pair(py,px));           \
      else pa = new Wolf(make_pair(py,px));                             \
    Pointer x;                                                          \
    x.id = _id;                                                         \
    x.p = (Wolf*) pa;                                                   \
    AddAnimal(x);                                                       \
  }                                                                     \
  else if (_id == "LI") {                                               \
    Lion* pa;                                                           \
    if (weight != 0) pa = new Lion(weight, make_pair(py,px));           \
      else pa = new Lion(make_pair(py,px));                             \
    Pointer x;                                                          \
    x.id = _id;                                                         \
    x.p = (Lion*) pa;                                                   \
    AddAnimal(x);                                                       \
  }                                                                     \
  else if (_id == "ZBR") {                                              \
    Zebra* pa;                                                          \
    if (weight != 0) pa = new Zebra(weight, make_pair(py,px));          \
      else pa = new Zebra(make_pair(py,px));                            \
    Pointer x;                                                          \
    x.id = _id;                                                         \
    x.p = (Zebra*) pa;                                                  \
    AddAnimal(x);                                                       \
  }                                                                     \
  else if (_id == "ELP") {                                              \
    Elephant* pa;                                                       \
    if (weight != 0) pa = new Elephant(weight, make_pair(py,px));       \
      else pa = new Elephant(make_pair(py,px));                         \
    Pointer x;                                                          \
    x.id = _id;                                                         \
    x.p = (Elephant*) pa;                                               \
    AddAnimal(x);                                                       \
  }                                                                     \
  else if (_id == "MCQ") {                                              \
    Macaque* pa;                                                        \
    if (weight != 0) pa = new Macaque(weight, make_pair(py,px));        \
      else pa = new Macaque(make_pair(py,px));                          \
    Pointer x;                                                          \
    x.id = _id;                                                         \
    x.p = (Macaque*) pa;                                                \
    AddAnimal(x);                                                       \
  }                                                                     \
  else if (_id == "HG") {                                               \
    Hog* pa;                                                            \
    if (weight != 0) pa = new Hog(weight, make_pair(py,px));            \
      else pa = new Hog(make_pair(py,px));                              \
    Pointer x;                                                          \
    x.id = _id;                                                         \
    x.p = (Hog*) pa;                                                    \
    AddAnimal(x);                                                       \
  }                                                                     \
  else if (_id == "EGL") {                                              \
    Eagle* pa;                                                          \
    if (weight != 0) pa = new Eagle(weight, make_pair(py,px));          \
      else pa = new Eagle(make_pair(py,px));                            \
    Pointer x;                                                          \
    x.id = _id;                                                         \
    x.p = (Eagle*) pa;                                                  \
    AddAnimal(x);                                                       \
  }                                                                     \
  else if (_id == "OW") {                                               \
    Owl* pa;                                                            \
    if (weight != 0) pa = new Owl(weight, make_pair(py,px));            \
      else pa = new Owl(make_pair(py,px));                              \
    Pointer x;                                                          \
    x.id = _id;                                                         \
    x.p = (Owl*) pa;                                                    \
    AddAnimal(x);                                                       \
  }                                                                     \
  else if (_id == "HMB") {                                              \
    Hummingbird* pa;                                                    \
    if (weight != 0) pa = new Hummingbird(weight, make_pair(py,px));    \
      else pa = new Hummingbird(make_pair(py,px));                      \
    Pointer x;                                                          \
    x.id = _id;                                                         \
    x.p = (Hummingbird*) pa;                                            \
    AddAnimal(x);                                                       \
  }                                                                     \
  else if (_id == "CKT") {                                              \
    Cockatoo* pa;                                                       \
    if (weight != 0) pa = new Cockatoo(weight, make_pair(py,px));       \
      else pa = new Cockatoo(make_pair(py,px));                         \
    Pointer x;                                                          \
    x.id = _id;                                                         \
    x.p = (Cockatoo*) pa;                                               \
    AddAnimal(x);                                                       \
  }                                                                     \
  else if (_id == "RBN") {                                              \
    Robin* pa;                                                          \
    if (weight != 0) pa = new Robin(weight, make_pair(py,px));          \
      else pa = new Robin(make_pair(py,px));                            \
    Pointer x;                                                          \
    x.id = _id;                                                         \
    x.p = (Robin*) pa;                                                  \
    AddAnimal(x);                                                       \
  }                                                                     \
  else if (_id == "BT") {                                               \
    Bat* pa;                                                            \
    if (weight != 0) pa = new Bat(weight, make_pair(py,px));            \
      else pa = new Bat(make_pair(py,px));                              \
    Pointer x;                                                          \
    x.id = _id;                                                         \
    x.p = (Bat*) pa;                                                    \
    AddAnimal(x);                                                       \
  }                                                                     \
  else if (_id == "SHK") {                                              \
    Shark* pa;                                                          \
    if (weight != 0) pa = new Shark(weight, make_pair(py,px));          \
      else pa = new Shark(make_pair(py,px));                            \
    Pointer x;                                                          \
    x.id = _id;                                                         \
    x.p = (Shark*) pa;                                                  \
    AddAnimal(x);                                                       \
  }                                                                     \
  else if (_id == "MRE") {                                              \
    MorayEel* pa;                                                       \
    if (weight != 0) pa = new MorayEel(weight, make_pair(py,px));       \
      else pa = new MorayEel(make_pair(py,px));                         \
    Pointer x;                                                          \
    x.id = _id;                                                         \
    x.p = (MorayEel*) pa;                                               \
    AddAnimal(x);                                                       \
  }                                                                     \
  else if (_id == "DGG") {                                              \
    Dugong* pa;                                                         \
    if (weight != 0) pa = new Dugong(weight, make_pair(py,px));         \
      else pa = new Dugong(make_pair(py,px));                           \
    Pointer x;                                                          \
    x.id = _id;                                                         \
    x.p = (Dugong*) pa;                                                 \
    AddAnimal(x);                                                       \
  }                                                                     \
  else if (_id == "TRL") {                                              \
    Turtle* pa;                                                         \
    if (weight != 0) pa = new Turtle(weight, make_pair(py,px));         \
      else pa = new Turtle(make_pair(py,px));                           \
    Pointer x;                                                          \
    x.id = _id;                                                         \
    x.p = (Turtle*) pa;                                                 \
    AddAnimal(x);                                                       \
  }                                                                     \
  else if (_id == "DLP") {                                              \
    Dolphin* pa;                                                        \
    if (weight != 0) pa = new Dolphin(weight, make_pair(py,px));        \
      else pa = new Dolphin(make_pair(py,px));                          \
    Pointer x;                                                          \
    x.id = _id;                                                         \
    x.p = (Dolphin*) pa;                                                \
    AddAnimal(x);                                                       \
  }                                                                     \
  else if (_id == "WHL") {                                              \
    Whale* pa;                                                          \
    if (weight != 0) pa = new Whale(weight, make_pair(py,px));          \
      else pa = new Whale(make_pair(py,px));                            \
    Pointer x;                                                          \
    x.id = _id;                                                         \
    x.p = (Whale*) pa;                                                  \
    AddAnimal(x);                                                       \
  }                                                                     \
  else if (_id == "PNG") {                                              \
    Penguin* pa;                                                        \
    if (weight != 0) pa = new Penguin(weight, make_pair(py,px));        \
      else pa = new Penguin(make_pair(py,px));                          \
    Pointer x;                                                          \
    x.id = _id;                                                         \
    x.p = (Penguin*) pa;                                                \
    AddAnimal(x);                                                       \
  }                                                                     \
  else if (_id == "HPP") {                                              \
    Hippopotamus* pa;                                                   \
    if (weight != 0) pa = new Hippopotamus(weight, make_pair(py,px));   \
      else pa = new Hippopotamus(make_pair(py,px));                     \
    Pointer x;                                                          \
    x.id = _id;                                                         \
    x.p = (Hippopotamus*) pa;                                           \
    AddAnimal(x);                                                       \
  }                                                                     \
  else if (_id == "PLC") {                                              \
    Pelican* pa;                                                        \
    if (weight != 0) pa = new Pelican(weight, make_pair(py,px));        \
      else pa = new Pelican(make_pair(py,px));                          \
    Pointer x;                                                          \
    x.id = _id;                                                         \
    x.p = (Pelican*) pa;                                                \
    AddAnimal(x);                                                       \
  }                                                                     \
  else if (_id == "GSE") {                                              \
    Goose* pa;                                                          \
    if (weight != 0) pa = new Goose(weight, make_pair(py,px));          \
      else pa = new Goose(make_pair(py,px));                            \
    Pointer x;                                                          \
    x.id = _id;                                                         \
    x.p = (Goose*) pa;                                                  \
    AddAnimal(x);                                                       \
  }                                                                     \
  else if (_id == "CRN") {                                              \
    Crane* pa;                                                          \
    if (weight != 0) pa = new Crane(weight, make_pair(py,px));          \
      else pa = new Crane(make_pair(py,px));                            \
    Pointer x;                                                          \
    x.id = _id;                                                         \
    x.p = (Crane*) pa;                                                  \
    AddAnimal(x);                                                       \
  }                                                                     \
  else if (_id == "DRL") {                                              \
    DracoLizard* pa;                                                    \
    if (weight != 0) pa = new DracoLizard(weight, make_pair(py,px));    \
      else pa = new DracoLizard(make_pair(py,px));                      \
    Pointer x;                                                          \
    x.id = _id;                                                         \
    x.p = (DracoLizard*) pa;                                            \
    AddAnimal(x);                                                       \
  }                                                                     \
  else if (_id == "CLG") {                                              \
    Colugo* pa;                                                         \
    if (weight != 0) pa = new Colugo(weight, make_pair(py,px));         \
      else pa = new Colugo(make_pair(py,px));                           \
    Pointer x;                                                          \
    x.id = _id;                                                         \
    x.p = (Colugo*) pa;                                                 \
    AddAnimal(x);                                                       \
  }                                                                     \
  else if (_id == "SGL") {                                              \
    SugarGlider* pa;                                                    \
    if (weight != 0) pa = new SugarGlider(weight, make_pair(py,px));    \
      else pa = new SugarGlider(make_pair(py,px));                      \
    Pointer x;                                                          \
    x.id = _id;                                                         \
    x.p = (SugarGlider*) pa;                                            \
    AddAnimal(x);                                                       \
  }                                                                     \
}

#endif
