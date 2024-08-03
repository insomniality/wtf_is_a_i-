#include <iostream>

class Classic
{	
	public:
		Classic();
		Classic(Classic tmp);
		Classic operator=(Classic tmp);
		~Classic();
	private:
		int century;
};