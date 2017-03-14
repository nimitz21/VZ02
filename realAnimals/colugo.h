//File colugo.h

#ifndef COLUGO_H
#define COLUGO_H

#include <iostream>
#include <set>
using namespace std;

/**
 * \class Colugo
 * \details real class dari animal, yaitu lemur terbang Sunda
 */
class Colugo {
public:
  /**
   * \brief Constructor default weight
   * \details Menciptakan objek lemur terbang Sunda dengan default weight untuk lemur terbang Sunda 
   * 
   * \param _weight berat badan
   * \param _position posisi lemur terbang Sunda
   */
  Colugo(pair<int,int> _position);
  /**
   * \brief Constructor dengan weight
   * \details Menciptakan objek lemur terbang Sunda dengan weight sebagai parameter
   * 
   * \param _weight berat badan
   * \param _position posisi lemur terbang Sunda
   */
  Colugo(float _weight, pair<int,int> _position);
  /**
   * \brief Destructor
   */
  ~Colugo();
  /**
   * \brief Copy Constructor
   * \details copy constructor, menjamin tidak bitwise copy
   * 
   * \param c Colugo yang ingin dikopi
   */
  Colugo(const Colugo& c);
  /**
   * \brief Operator =
   * \details operator=, menjamin tidak bitwise copy
   * 
   * \param c Colugo yang ingin dikopi
   * \return Colugo yang sama dengan c
   */
  Colugo& operator= (const Colugo& c);
  /**
    * \brief GetId
    * \details Mengembalikan id Animal
    * \return kode unik untuk jenis Animal tersebut
    */
  string GetId() const;

  /**
    * \brief GetNumber
    * \details Mengembalikan nomor number di Animal tersebut
    * \return nomor number Animal, pembeda dengan Animal lain yang sejenis 
    */
  int GetNumber() const;

  /** @brief GetWeight
    * \details mengembalikan nilai weight dari suatu Animal
    */
  float GetWeight() const;

  /**
    * \brief GetEat
    * \details mengembalikan nilai persentase makanan Animal
    * \return persentase makanan yang dikonsumsi Animal
    */
  float GetEat() const;

  /** \brief GetPos
    * \details mengembalikan nilai posisi dari suatu Animal
    * \return posisi Animal saat itu
    */
  pair<int,int> GetPos() const;

  /** \brief GetType
    * \details mengembalikan type dari suatu Animal
    * \return tipe dari Animal (karnivor, herbivor, omnivor)
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
   * \return habitat yang dapat ditinggali hewan
   */
  set<char> GetHabitat() const;

  /** \brief SetWeight
    * \details mengatur berat badan suatu Animal
    * \param _weight nilai berat badan yang ingin  di tetapkan untuk suatu Animal
    */
  void SetWeight(float _weight);

  /** \brief SetPos
    * \details mengatur posisi suatu Animal
    * \param _position nilai posisi yang ingin  di tetapkan untuk suatu Animal
    */
  void SetPos(pair<int,int> _position);

  /**
   * \brief GetCompatible
   * \details mengembalikan set compatible
   * \return hewan yang dapat tinggal bersama Animal ini dalam 1 kandang
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

  /**
   * \brief Act
   * \details Bat's behaviour
   */
  void Act() const;
  /**
   * \brief Interact
   * \details mengoutput hasil interaksi dengan Bat
   */
  void Interact() const;
private:
  static int colugo_nb; /**< banyak colugo yang pernah diciptakan*/
  const float food = 0.25; /**< persentase makan colugo*/
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
