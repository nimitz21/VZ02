/* Author    : Andika Kusuma / 13515033
 * File      : road.h
 */

#ifndef ROAD_H
#define ROAD_H

#include <iostream>
#include "facility.h"

using namespace std;
/** \class Road
  * \details Kelas road turunan dari kelas facility berupa jalanan di zoo
  */
class Road : public Facility {
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
     * \brief Interact
     * \details Menampilkan interaksi road
     */
  void Interact() const;

  //Tidak diimplementtasi
  void ToggleSekat(int direction);
    
  //Tidak diimplementasi
  bool GetSekat(int direction) const;
  
private:
  char initsymbol;
  char symbol;
};

#endif
