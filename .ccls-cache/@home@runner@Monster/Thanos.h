#include"monster.h"

class Thanos {
private:
	int stones;
	int hp; //extra hp;
public:
	/* constructor and destructor */
Thanos(int =0,int=100000);
~Thanos();// cout something

	void snap_finger(monster[],int); 
	/* show all hps
	/ clear half of monster hp, if stone =6*/
	void operator++(); // increase the stone;
};
