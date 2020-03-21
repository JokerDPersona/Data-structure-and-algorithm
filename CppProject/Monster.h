#pragma once
#include <cstddef>
#ifndef _MONSTER_

//�麯����
class Breed {
public:
	Breed(Breed* parent,int health, const char* attack)
		:
		health_(health),
		attack_(attack) {
		if (parent != NULL) {
			if (health == 0) {
				health_ = parent_->getHealth();
			}
			if (attack == NULL) {
				attack_ = parent->getAttack();
			}
		}
	}

	int getHealth() { return health_; }
	const char* getAttack() { return attack_; }

private:
	Breed* parent_;
	int health_;
	const char* attack_;
};

//������
class Monster
{
	friend class Breed;
public:
	const char* getAttack() {
		return breed_.getAttack();
	}
	//��������
	/*virtual ~Monster() {}
	virtual const char* getAttack() = 0;*/

protected:

private:
	Monster(Breed& breed) :health_(breed.getHealth()),
		breed_(breed) {}
	int health_;
	Breed& breed_;
};



//����ж��ֹ��ÿ�μ̳�Ȼ�󵥶����ڲ������Ժܷ���
//-----------------------------------------------
//��
class Dragon :public Monster {
public:
	//Dragon() :Monster() {}

	virtual const char* getAttack() {
		return "The dragon breathes fire!";
	}
};

//��ħ
class Troll :public Monster {
public:
	//Troll() :Monster() {}
	
	virtual const char* getAttack() {
		return "The troll clubs you!";
	}
};
//-----------------------------------------------

#endif // !_MONSTER_



