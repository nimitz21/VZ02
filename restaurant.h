/* Author    : Andika Kusuma / 13515033
 * File      : restaurant.h
 */

#ifndef RESTAURANT_H
#define RESTAURANT_H

#include <iostream>

using namespace std;
/** @class Restaurant
  * Kelas restaurant turunan dari kelas facility berupa restoran di zoo
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

  //Tidak diimplementtasi
  void ToggleSekat(int direction);
    
  //Tidak diimplementasi
  bool GetSekat(int direction) const;

private:
  char initsymbol;
  char symbol;
  string food;
  bool open;  
};

#endif
