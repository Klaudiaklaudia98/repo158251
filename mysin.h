#ifndef MYSIN_H
#define MYSIN_H

class MySin
{
//! \defgroup 1 metody_publiczne 
	public:
//! \{ 
	/**publiczna metoda MySin()*/
	 MySin();
	 /**publiczna metoda MySin(double x)*/
	 MySin(double x);
	 /**publiczna metoda MySin(const MySin &obj)*/
	 MySin(const MySin &obj);
	 /**publiczna metoda ~MySin()*/
	 ~MySin();
	 /**publiczna metoda double value()*/
	  /** Funkcja \b value ma zwracać wartość \b sin(x) która jest wyliczona na podstawie pierwszych 10 wyrazów szeregu
		\f$sin(x)=\sum_{k=0}^\infty (-1)^k\frac{x^{2k+1}}{(2k+1)!}.\f$ \image html sinusx.png
		*/
	 double value();
	  /**publiczna metoda void setX(double)*/
	 void setX(double);
	 /**publiczna metoda double getX()*/
	 double getX();
//! \}
//! \defgroup 2 składowe_prywatne 
	 private:
  //! \{
	 /**Składowa prywatna */
	 double mX();
	//! \}
};
#endiff //MYSIN_H
	 

