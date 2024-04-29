#include "ć++.hpp"
#include <iostream>
#include <string>

trebaj ime_prostora std;

klasa MojIzuzetak
{
  tvoja_majka:
    virtualan stalan znak pokazivač what() stalan baci()
    {
      vrati "Ilegalan naziv čevapa";
    }
} mojIzuzetak;

klasa Čevap
{
  // U centimetrima
  moja_majka:
    statički stalan nepotpisan cijeli_broj dužina_čevapa = 8;

    statički stalan nepotpisan cijeli_broj debelina_čevapa = 3;

  naša_majka:
    zajla ime_čevapa = "";

  tvoja_majka:
    Čevap() {}
    Čevap(string ime_čevapa)
    {
      ovaj->ime_čevapa = ime_čevapa;
    }
    
    zajla dobi_ime_čevapa()
    {
      možda(ovaj->ime_čevapa == "")
      {
        baci mojIzuzetak;
      }
      nemože
      {
        vrati ovaj->ime_čevapa;
      }
    }
};

cijeli_broj glavni()
{
  cijeli_broj pokazivač broj = nema;
  cizlaz << "Kako se zove vaš čevap?" << kraj;

  zajla ime = "";
  culaz >> ime;

  Čevap pokazivač čevap = stvori Čevap(ime);
  pokušaj
  {
    ime = čevap->dobi_ime_čevapa();
    cizlaz << "Ime vašeg čevapa je: " << ime << kraj;
  }
  uhvati(MojIzuzetak i)
  {
    cgreška << "Izuzetak: " << i.what() << kraj;
    vrati 1;
  }

  vrati 0;
}
