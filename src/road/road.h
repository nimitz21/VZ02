/* Author    : Andika Kusuma / 13515033
 * File      : road.h
 */

#ifndef ROAD_H
#define ROAD_H

#include <iostream>

using namespace std;
/** \brief Class Road
  * \details Kelas road turunan dari kelas facility berupa jalanan di zoo
  */
class Road {
public:
  /** \brief Constructor tanpa parameter
    * \details Menciptakan road dengan type=r (road biasa)
    */
  Road();

  /**
   * \brief Constructor dengan parameter
   * \details Menciptakan road dengan type=t
   * \param t type road (r untuk road biasa, n untuk entrance, dan x untuk exit);
   */
  Road(char t);

  /** \brief Destructor.
    */
  ~Road();

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
   * \brief GetSymbol.
   * \details mengembalikan nilai simbol cell.
   * \return symbol.
   */
  void SetSymbol(char s);

  /**
   * \brief Render
   * \details Menampilkan represetnasi cell pada layar
   */
  void Render();

  /**
     * \brief Interact
     * \details Menampilkan interaksi road
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
};

#endif
