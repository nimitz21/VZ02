/* Author    : Andika Kusuma / 13515033
 * File      : restaurant.h
 */

#ifndef RESTAURANT_H
#define RESTAURANT_H

#include <iostream>

using namespace std;
/** \brief Class Restaurant
  * \details Kelas restaurant turunan dari kelas facility berupa restoran di zoo
  */
class Restaurant {
public:
  /** @brief Constructor tanpa parameter
    * Menciptakan restaurant dengan food string kosong dan restaurant tutup
    */
  Restaurant();

  /**
   * \brief Constructor dengan parameter
   * \details Menciptakan restaurant dengan 
   * \param f makanan yang dijual oleh restaurant
   * \param o true jika restaurant buka
   */
  Restaurant(string f, bool o);

  /** @brief Destructor.
    */
  ~Restaurant();

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
   * \brief GetFood
   * \details Mengembalikan jenis makanan yang dijual restoran
   * \return string
   */
  string GetFood() const;

  /**
   * \brief GetOpen
   * \details Mengembalikan status restoran
   * \return bool true jika buka, false jika tutu
   */
  bool GetOpen() const;

  /**
   * \brief SetFood
   * \details Mengubah jenis makanan yang dijual restoran
   * \param f Jenis makanan yang akan dijual
   */
  void SetFood(string f);

  /**
   * \brief ToggleOpen
   * \details Mengubah status restoran
   */
  void ToggleOpen();

  /**
   * \brief Interact
   * \details Memunculkan dialog tentang makanan apa yang dijual suatu restaurant jika restaurant buka, jika tidak katakan restaurant tutup
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
  string food; /**< jenis makanan yang dijual di restoran*/
  bool open; /**< penanda restoran buka atau tutup; true untuk buka, false untuk tutup*/
};

#endif
