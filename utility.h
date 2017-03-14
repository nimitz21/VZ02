#ifndef UTILITY_H
#define UTILITY_H

#define MakroGetterAnimal(Function,Param)           \
{                                                   \
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

#define MakroInteractAnimal(Function,Param)         \
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

#define MakroGetterCell(Function,Param)             \
{                                                   \
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

#define MakroSetterCell(Function,Param)             \
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

#define MakroInteractCell(Function,Param)           \
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

#endif