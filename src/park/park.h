/* Author    : Andika Kusuma / 13515033
 * File      : park.h
 */

#ifndef PARK_H
#define PARK_H

#include <iostream>

using namespace std;
/** \brief Class Park
  * \details Kelas Park turunan dari kelas facility berupa taman di zoo
  */
class Park {
public:
  /** @brief Constructor tanpa parameter
    * Menciptakan park yang berisi plant string kosong
    */
  Park();

  /**
   * \brief Constructor dengan parameter
   * \details Mencipatakan park yang berisi plant p
   * \param p tanaman yang ditanam di park
   */
  Park(string p);

  /** @brief Destructor.
    */
  ~Park();

  /**
   * \brief GetInitSymbol.
   * \details membalikan nilai initsymbol cell.
   * \return init symbol.
   */
  char GetInitSymbol() const;

  /**
   * \brief GetSymbol.
   * \details mengembalikan nilai simbol cell.
   * \return symbol.
   */
  char GetSymbol() const;

  /**
   * \brief SetSymbol.
   * \details mengubah symbol dengan s.
   * \param s symbol yang baru.
   */
  void SetSymbol(char s);

  /**
   * \brief Render
   * \details Menampilkan represetnasi cell pada layar
   */
  void Render();
  
  /**
   * \brief GetPlant
   * \details Mengembalikan tanaman yang tertanam pada taman
   * \return string
   */
  string GetPlant() const;

  /**
   * \brief SetPlant
   * \details Mengubah tanaman yang tertanam pada taman dengan p
   * \param p Tanaman yang ingin ditanam
   */
  void SetPlant(string p);

  /**
   * \brief Interact
   * \details Menunjukkan tanaman apa yang ditanam di taman tersebut
   */
  void Interact() const;

  /**
   * \brief ToggleSekat
   * \details Memasang atau menghilangkan sekat antar-Cell;
   * tidak diimplementasi pada class ini, hanya pendukung ABC Cell dan Facility
   * 
   * \param direction arah yang ingin dibuka
   */
  void ToggleSekat(int direction);
    
  /**
   * \brief GetSekat
   * \details Mengecek apakah ke arah direction terdapat sekat;
   * tidak diimplementasi pada class ini, hanya pendukung ABC Cell dan Facility
   * 
   * \param direction arah yang ingin dicek
   */
  bool GetSekat(int direction) const;

private:
  char initsymbol; /**< simbol asli untuk sel dengan jenis tertentu*/
  char symbol; /**< simbol yang akan ditampilkan pada layar (dapat dioverwrite animal)*/
  string plant; /**< tanaman yang ditanam di taman*/
};

#endif
