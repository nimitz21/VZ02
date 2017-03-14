//File Shark.h

#ifndef SHARK_H
#define SHARK_H

#include <iostream>
#include <set>
using namespace std;

/**
 * \class Shark
 * \details real class dari animal, yaitu hiu
 */
class Shark {
public:
  /**
   * \brief Constructor default weight
   * \details Menciptakan objek hiu dengan default weight untuk hiu 
   * 
   * \param _weight berat badan
   * \param _position posisi hiu
   */
  Shark(pair<int,int> _position);
  /**
   * \brief Constructor dengan weight
   * \details Menciptakan objek hiu dengan weight sebagai parameter
   * 
   * \param _weight berat badan
   * \param _position posisi hiu
   */
  Shark(float _weight, pair<int,int> _position);
  /**
   * \brief Destructor
   */
  ~Shark();
  /**
   * \brief Copy Constructor
   * \details copy constructor, menjamin tidak bitwise copy
   * 
   * \param s Shark yang ingin dikopi
   */
  Shark(const Shark& s);
  /**
   * \brief Operator =
   * \details operator=, menjamin tidak bitwise copy
   * 
   * \param s Shark yang ingin dikopi
   * \return Shark yang sama dengan s
   */
  Shark& operator= (const Shark& s);
  /**
   * \brief Act
   * \details Shark's behaviour
   */
  void Act() const;
  /**
   * \brief Interact
   * \details mengoutput hasil interaksi dengan Shark
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
  static int shark_nb; /**< jumlah shark yang pernah diciptakan*/
  const float food = 0.2; /**< persentae makan shark*/
  string id; /**< identifier unik untuk jenis hewan tersebut*/
  int number; /**< identifier unik untuk hewan pada jenisnya tersebut*/
  char legend; /**< legenda hewan pada peta*/
  float weight; /**< berat hewan tersebut dalam kilogram*/
  float eat; /**< persentase makanan terhadap berat hewan*/
  char type; /**< karnivor, herbivor, atau omnivor*/
  pair<int,int> position; /**< posisi baris dan kolom hewan*/
  set<string> compatible; /**< list jenis hewan lain yang dapat disatukan dengan hewan tersebut*/
  set<char> habitat; /**< list habitat yang dapat ditinggali hewan*/
};

#endif
