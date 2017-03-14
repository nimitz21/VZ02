#ifndef UTILITY_H
#define UTILITY_H

#define MakroGetterAnimal(Function,Param)           \
{                                                   \
  if(Param.id == "WF"){                             \
    return ((Wolf *)(Param.c))->Function();         \
  }                                                 \
  else if(Param.id == "LI"){                        \
    return ((Lion *)(Param.c))->Function();         \
  }                                                 \
  else if(Param.id == "ZBR"){                       \
    return ((Zebra *)(Param.c))->Function();        \
  }                                                 \
  else if(Param.id == "ELP"){                       \
    return ((Elephant *)(Param.c))->Function();     \
  }                                                 \
  else if(Param.id == "MCQ"){                       \
    return ((Macaque *)(Param.c))->Function();      \
  }                                                 \
  else if(Param.id == "HG"){                        \
    return ((Hog *)(Param.c))->Function();          \
  }                                                 \
  else if(Param.id == "SHK"){                       \
    return ((Shark *)(Param.c))->Function();        \
  }                                                 \
  else if(Param.id == "MRE"){                       \
    return ((MorayEel *)(Param.c))->Function();     \
  }                                                 \
  else if(Param.id == "DGG"){                       \
    return ((Dugong *)(Param.c))->Function();       \
  }                                                 \
  else if(Param.id == "TRL"){                       \
    return ((Turtle *)(Param.c))->Function();       \
  }                                                 \
  else if(Param.id == "DLP"){                       \
    return ((Dolphin *)(Param.c))->Function();      \
  }                                                 \
  else if(Param.id == "WHL"){                       \
    return ((Whale *)(Param.c))->Function();        \
  }                                                 \
  else if(Param.id == "EGL"){                       \
    return ((Eagle *)(Param.c))->Function();        \
  }                                                 \
  else if(Param.id == "OW"){                        \
    return ((Owl *)(Param.c))->Function();          \
  }                                                 \
  else if(Param.id == "HMB"){                       \
    return ((Hummingbird *)(Param.c))->Function();  \
  }                                                 \
  else if(Param.id == "CKT"){                       \
    return ((Cockatoo *)(Param.c))->Function();     \
  }                                                 \
  else if(Param.id == "RBN"){                       \
    return ((Robin *)(Param.c))->Function();        \
  }                                                 \
  else if(Param.id == "BT"){                        \
    return ((Bat *)(Param.c))->Function();          \
  }                                                 \
  else if(Param.id == "PNG"){                       \
    return ((Penguin *)(Param.c))->Function();      \
  }                                                 \
  else if(Param.id == "HPP"){                       \
    return ((Hippopotamus *)(Param.c))->Function(); \
  }                                                 \
  else if(Param.id == "PLC"){                       \
    return ((Pelican *)(Param.c))->Function();      \
  }                                                 \
  else if(Param.id == "GSE"){                       \
    return ((Goose *)(Param.c))->Function();        \
  }                                                 \
  else if(Param.id == "CRN"){                       \
    return ((Crane *)(Param.c))->Function();        \
  }                                                 \
  else if(Param.id == "DRL"){                       \
    return ((DracoLizard *)(Param.c))->Function();  \
  }                                                 \
  else if(Param.id == "CLG"){                       \
    return ((Colugo *)(Param.c))->Function();       \
  }                                                 \
  else if(Param.id == "SGL"){                       \
    return ((SugarGlider *)(Param.c))->Function();  \
  }                                                 \
}

#define MakroSetterCell(Function,Param)             \
{                                                   \
  if(Param.id == "WF"){                             \
    ((Wolf *)(Param.c))->Function(Param)  ;         \
  }                                                 \
  else if(Param.id == "LI"){                        \
    ((Lion *)(Param.c))->Function(Param)  ;         \
  }                                                 \
  else if(Param.id == "ZBR"){                       \
    ((Zebra *)(Param.c))->Function(Param)  ;        \
  }                                                 \
  else if(Param.id == "ELP"){                       \
    ((Elephant *)(Param.c))->Function(Param)  ;     \
  }                                                 \
  else if(Param.id == "MCQ"){                       \
    ((Macaque *)(Param.c))->Function(Param)  ;      \
  }                                                 \
  else if(Param.id == "HG"){                        \
    ((Hog *)(Param.c))->Function(Param)  ;          \
  }                                                 \
  else if(Param.id == "SHK"){                       \
    ((Shark *)(Param.c))->Function(Param)  ;        \
  }                                                 \
  else if(Param.id == "MRE"){                       \
    ((MorayEel *)(Param.c))->Function(Param)  ;     \
  }                                                 \
  else if(Param.id == "DGG"){                       \
    ((Dugong *)(Param.c))->Function(Param)  ;       \
  }                                                 \
  else if(Param.id == "TRL"){                       \
    ((Turtle *)(Param.c))->Function(Param)  ;       \
  }                                                 \
  else if(Param.id == "DLP"){                       \
    ((Dolphin *)(Param.c))->Function(Param)  ;      \
  }                                                 \
  else if(Param.id == "WHL"){                       \
    ((Whale *)(Param.c))->Function(Param)  ;        \
  }                                                 \
  else if(Param.id == "EGL"){                       \
    ((Eagle *)(Param.c))->Function(Param)  ;        \
  }                                                 \
  else if(Param.id == "OW"){                        \
    ((Owl *)(Param.c))->Function(Param)  ;          \
  }                                                 \
  else if(Param.id == "HMB"){                       \
    ((Hummingbird *)(Param.c))->Function(Param)  ;  \
  }                                                 \
  else if(Param.id == "CKT"){                       \
    ((Cockatoo *)(Param.c))->Function(Param)  ;     \
  }                                                 \
  else if(Param.id == "RBN"){                       \
    ((Robin *)(Param.c))->Function(Param)  ;        \
  }                                                 \
  else if(Param.id == "BT"){                        \
    ((Bat *)(Param.c))->Function(Param)  ;          \
  }                                                 \
  else if(Param.id == "PNG"){                       \
    ((Penguin *)(Param.c))->Function(Param)  ;      \
  }                                                 \
  else if(Param.id == "HPP"){                       \
    ((Hippopotamus *)(Param.c))->Function(Param)  ; \
  }                                                 \
  else if(Param.id == "PLC"){                       \
    ((Pelican *)(Param.c))->Function(Param)  ;      \
  }                                                 \
  else if(Param.id == "GSE"){                       \
    ((Goose *)(Param.c))->Function(Param)  ;        \
  }                                                 \
  else if(Param.id == "CRN"){                       \
    ((Crane *)(Param.c))->Function(Param)  ;        \
  }                                                 \
  else if(Param.id == "DRL"){                       \
    ((DracoLizard *)(Param.c))->Function(Param)  ;  \
  }                                                 \
  else if(Param.id == "CLG"){                       \
    ((Colugo *)(Param.c))->Function(Param)  ;       \
  }                                                 \
  else if(Param.id == "SGL"){                       \
    ((SugarGlider *)(Param.c))->Function(Param)  ;  \
  }                                                 \
}


#endif