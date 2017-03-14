//File cockatoo.h

#ifndef COCKATOO_H
#define COCKATOO_H

#include <iostream>
#include <set>
using namespace std;

/**
 * \class Cockatoo
 * \details real class dari animal, yaitu burung kakak tua
 */
class Cockatoo {
public:
  /**
   * \brief Constructor default weight
   * \details Menciptakan objek burung kakak tua dengan default weight untuk burung kakak tua 
   * 
   * \param _weight berat badan
   * \param _position posisi burung kakak tua
   */
  Cockatoo(pair<int,int> _position);
  /**
   * \brief Constructor dengan weight
   * \details Menciptakan objek burung kakak tua dengan weight sebagai parameter
   * 
   * \param _weight berat badan
   * \param _position posisi burung kakak tua
   */
  Cockatoo(float _weight, pair<int,int> _position);
  /**
   * \brief Destructor
   */
  ~Cockatoo();
  /**
   * \brief Copy Constructor
   * \details copy constructor, menjamin tidak bitwise copy
   * 
   * \param c Cockatoo yang ingin dikopi
   */
  Cockatoo(const Cockatoo& c);
  /**
   * \brief Operator =
   * \details operator=, menjamin tidak bitwise copy
   * 
   * \param c Cockatoo yang ingin dikopi
   * \return Cockatoo yang sama dengan c
   */
  Cockatoo& operator= (const Cockatoo& c);
  /**
   * \brief Act
   * \details Cockatoo's behaviour
   */
  void Act() const;
  /**
   * \brief Interact
   * \details mengoutput hasil interaksi dengan Cockatoo
   */
  void Interact() const;

  /**
    * \brief GetID
    * \details Mengembalikan id hewan
    * \return string
    */
  string GetId() const;

  /**
    * \brief Getid
    * \details Mengembalikan nomor number di hewan tersebut
    * \return int
    */
  int GetNumber() const;

  /** @brief GetWeight
    * \details mengembalikan nilai weight dari suatu Animal
    */
  float GetWeight() const;

  /**
    * \brief GetFood
    * \details mengembalikan nilai persentase makanan animal
    * \return eat
    */
  float GetEat() const;

  /** @brief GetPos
    * \details mengembalikan nilai posisi dari suatu Animal
    */
  pair<int,int> GetPos() const;

  /** @brief GetType
    * \details mengembalikan type dari suatu Animal
    */
  char GetType() const;

  /**
    * \brief GetLegend
    * \details mengembalikan legenda suatu Animal
    * \return legenda Animal tersebut
    */
  char GetLegend() const;

  /**
   * \brief GetHabitat
   * \details mengembalikan habitat
   * \return habitat
   */
  set<char> GetHabitat() const;

  /** @brief SetWeight
    * \details mengatur berat badan suatu Animal
    * @param _weight nilai berat badan yang ingin  di tetapkan untuk suatu Animal
    */
  void SetWeight(float _weight);

  /** @brief SetPos
    * \details mengatur posisi suatu Animal
    * @param _position nilai posisi yang ingin  di tetapkan untuk suatu Animal
    */
  void SetPos(pair<int,int> _position);

  /**
   * \brief GetCompatible
   * \details mengembalikan set compatible
   * \return compatible
   */
  set<string> GetCompatible() const;

  /**
  * \brief Description
  * \details mengoutput deskripsi Animal tersebut
  * \param a jenis binatang
  */
  void Description(string a) const;

  /**
    * \brief Move
    * \details Berpindah sejauh 1 langkah ke arah sesuai direction
    * \I.S.: arah untuk direction sudah pasti masih dalam cage
    * \param direction 0 ke atas, 1 ke kiri, 2 ke kanan, 3 ke bawah
    */
  void Move(int direction);
private:
  static int cockatoo_nb;
  const float food = 0.3;
  string id;
  int number;
  char legend;
  float weight;
  float eat;
  char type;
  pair<int,int> position;
  set<string> compatible;
  set<char> habitat;
};

#endif
