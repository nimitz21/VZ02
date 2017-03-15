//file: zoo.h

#ifndef ZOO_H
#define ZOO_H

#include "../pointer/pointer.h"
#include "../wolf/wolf.h"
#include "../lion/lion.h"
#include "../zebra/zebra.h"
#include "../elephant/elephant.h"
#include "../macaque/macaque.h"
#include "../hog/hog.h"
#include "../shark/shark.h"
#include "../moray_eel/moray_eel.h"
#include "../dugong/dugong.h"
#include "../turtle/turtle.h"
#include "../dolphin/dolphin.h"
#include "../whale/whale.h"
#include "../eagle/eagle.h"
#include "../owl/owl.h"
#include "../hummingbird/hummingbird.h"
#include "../cockatoo/cockatoo.h"
#include "../robin/robin.h"
#include "../bat/bat.h"
#include "../penguin/penguin.h"
#include "../hippopotamus/hippopotamus.h"
#include "../pelican/pelican.h"
#include "../goose/goose.h"
#include "../crane/crane.h"
#include "../draco_lizard/draco_lizard.h"
#include "../colugo/colugo.h"
#include "../sugar_glider/sugar_glider.h"
#include <list>
#include <queue>
using namespace std;

/** \brief Class Zoo
  * \details Kelas Zoo yang berisi kebun binatang itu sendiri beserta hewan-hewannya
  */
class Zoo{
  public:
    /**
      * \brief Constructor
      * \details Mengenerate kebun binatang denangan list hewan kosong
      * \param Auto jika true maka kebun binatang akan digenerate secara otomatis, jika false maka kebun binatang didesain oleh pengguna
      * \param w width lebar kebun binatang, default 33
      * \param l length panjang kebun binatang, default 32
      */
    Zoo(bool = 1, int = 33, int = 32);

    /** \brief Copy Constructor
      * \details copy constructor, menjamin bukan bitwise copy
      */
    Zoo(const Zoo& z);

    /** \brief Destructor
      */
    ~Zoo();

    /** \brief Operator =
      * \details Menjamin bukan bitwise copy
      * \return Zoo yang sama dengan z
      */
    Zoo& operator=(const Zoo& z);

    /** \brief Display
      * \details Menampilkan kebun binatang ke layar
      */
    void Display(int x1, int y1, int x2, int y2);

    /**
     * \brief FindAnimal
     * \details Mengembalikan iterator hewan yang berada di pos
     * 
     * \param pos posisi Animal saat itu
     * \return iterator untuk list Animal
     */
    list<Pointer>::iterator FindAnimal(pair<int,int> pos);

    /** \brief AddAnimal
      * \details Menambahkan hewan pada kebun binatang
      * \param animal hewan yang akan ditambahkan
      */
    void AddAnimal(Pointer animal);

    /**
     * \brief DelAnimal dengan id
     * \details Menghapus hewan dengan id=_id dan number=_number
     * \param _id id jenis hewan
     * \param _number nomor pada jenis hewan tersebut
     */
    void DelAnimal(string _id, int _number);

    /**
     * \brief DelAnimal
     * \details Menghapus hewan pada posisi x y
     * \param x posisi pada width
     * \param y posisi pada length
     */
    void DelAnimal(int x, int y);

    /**
     * \brief GetTotalMeat
     * \details mengeluarkan total daging yang diperlukan di zoo dalam kilogram
     * \return Total daging yang dibutuhkan zoo
     */
    float GetTotalMeat() const;

    /**
     * \brief GetTotalVegetables
     * \details mengeluarkan total sayur yang diperlukan di zoo dalam kilogram
     * \return Total sayur yang dibutuhkan zoo
     */
    float GetTotalVegetables() const;

    /**
     * \brief MoveAnimal dengan posisi
     * \details Menggerakkan animal dengan id=_id dan number=_number
     * \param pos posisi hewan
     * \param direction 0 untuk ke atas, 1 untuk ke kiri, 2 untuk ke kanan, 3 untuk ke bawah
     */
    void MoveAnimal(pair<int,int> pos, int direction);

   /**
     * \brief MoveAnimal dengan id
     * \details Menggerakkan animal dengan id=_id dan number=_number ke arah sesuai direction sebanyak 1 langkah jika memungkinkan (tidak melewati sekat)
     * \param _id jenis hewan 
     * \param _number no number pada jenis hewan
     * \param direction 0 untuk ke atas, 1 untuk ke kiri, 2 untuk ke kanan, 3 untuk ke bawah
     */
    void MoveAnimal(string _id, int _number, int direction);

   /**
     * \brief MoveAllAnimal
     * \details Menggerakkan semua hewan secara acak
     */
    void MoveAllAnimal();

    /**
     * \brief ToggleSekat
     * \details Membuka/menutup sekat pada posisi i,j ke arah direction jika memungkinkan (tidak membuka ke luar cage)
     * \param i posisi pada width
     * \param j posisi pada length
     * \param direction 0 untuk ke atas, 1 untuk ke kiri, 2 untuk ke kanan, 3 untuk ke bawah
     */
    void ToggleSekat(int i, int j, int direction);

    /**
     * \brief ToggleAllSekat
     * \details Membuka/menutup semua sekat
     */
    void ToggleAllSekat();

    /**
     * \brief Melakukan tour pada kebun binatang
     * \details Jalur tour akan dipilih secara acak
     * \details Settiap cell yang ada di samping road yang dilalui akan diinteract. Suatu cell adalah bagian dari suatu cage, maka semua binatang pada cage tersebut akan diinteract
     */
    void Tour();

    /**
     * \brief InteractCage
     * \details Melakukan interaksi dengan semua hewan yang ada di cage yang sama. Cage memiliki posisi pos dan nomor cage_number
     * \param pos posisi cage
     * \param cage_number nomor cage
     */

    void InteractCage(pair<int, int> pos, int cage_number);

  private:
    const int width; /**< dimensi zoo; jumlah baris*/
    const int length;  /**< dimensi zoo; jumlah kolom*/
    Pointer** cells; /**< matriks Cell yang dimiliki zoo*/
    list<Pointer> animals;  /**< daftar Animals yang ada dalam zoo*/
    int** cage_map;  /**< matriks penanda nomor cage dalam zoo*/
    int cage_nb; /**< jumlah cage yang ada dalam zoo*/
};

#endif
