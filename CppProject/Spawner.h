//#pragma once
//#ifndef _SPAWNER_
//
//class Monster {
//public:
//	virtual ~Monster() {}
//	virtual Monster* clone() = 0;
//};
//
//class Ghost :public Monster {
//public:
//	Ghost(int health, int speed) :health_(health), speed_(speed) {}
//
//	virtual Monster* clone() {
//		return new Ghost(health_, speed_);
//	}
//
//	/*Monster* spwanGhost() {
//		return new Ghost();
//	}*/
//
//private:
//	int health_;
//	int speed_;
//};
//
//typedef Monster* (*SpawnCallback)();
//class Spawner {
//public:
//	//Spawner(Monster* prototype) :prototype_(prototype) {}
//	Spawner(SpawnCallback spawn) :spawn_(spawn) {}
//	/*Monster* spawnMonster() {
//		return prototype_->clone();
//	}*/
//	Monster* spawnMonster() { return spawn_(); }
//private:
//	//Monster* prototype_;
//	SpawnCallback spawn_;
//};
//
//
//
//
//#endif // !_SPAWNER_
//
//
//
