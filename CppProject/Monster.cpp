#include "Monster.h"
#include <iostream>

using namespace std;

int Breed::getHealth() {
	if (health_ != 0 || parent_ == NULL) {
		return health_;
	}
	return parent_->getHealth();
}

const char* Breed::getAttack() {
	if (attack_ != NULL || parent_ == NULL) {
		return attack_;
	}
	return parent_->getAttack();
}

int main() {
	return 0;
}

