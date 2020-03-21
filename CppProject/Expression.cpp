//#include "Expression.h"
//#include<iostream>
//#include <cassert>
//
//using namespace std;
//
//enum Character {
//	WIZARD,
//	WARRIOR,
//	KNIGHYERRANT,
//};
//
//void setHealth(Character, int amount);
//void setWisdom(Character, int amount);
//void setAgility(Character, int amount);
//void playSound(int soundID);
//void spawnParticles(int particleType);
//int getHealth(Character);
//
//
//
//void ChoseInstruction() {};
//
//void SetHealth(int begin,int end) {};
//
//enum Instruction  {
//	INST_SET_HEALTH = 0x00,
//	INST_SET_WISDOM = 0x01,
//	INST_SET_AGILITY = 0x02,
//	INST_SET_SOUND = 0x03,
//	INST_SET_PARTICLES = 0x04,
//	INST_SET_LITERAL = 0x05,
//	INST_SET_ADD = 0x06,
//};
//
//enum ValueType {
//	TYPE_INT,
//	TYPE_DOUBLE,
//	TYPE_STRING,
//};
//
//struct Value {
//	ValueType type;
//	union {
//		int intValue;
//		double doubleValue;
//		char* stringValue;
//	};
//};
//
//class Value {
//public:
//	virtual ~Value() {}
//	virtual ValueType type() = 0;
//	virtual int asInt() {
//		assert(false);
//		return 0;
//	}
//};
//
//
//
//class IntValue :public Value {
//public:
//	IntValue(int value) :value_(value) {}
//
//	virtual ValueType type() { return TYPE_INT; }
//	virtual int asInt() { return value_; }
//
//private:
//	int value_;
//};
//
//
//int main() {
//
//	system("pause");
//	getchar();
//	return 0;
//}
//
//void ChoseInstruction() {
//	Instruction ins;
//	Character chara;
//	VM vm;
//	switch (ins)
//	{
//	case INST_SET_HEALTH:
//		int wizard = vm.pop();
//		vm.push(getHealth(WIZARD));
//		break;
//	case INST_SET_WISDOM:
//		setWisdom(WIZARD, 100);
//		break;
//	case INST_SET_AGILITY:
//		setAgility(WIZARD, 100);
//		break;
//	case INST_SET_SOUND:
//		//playSound(SOUND_BANG);
//		break;
//	case INST_SET_PARTICLES:
//		//spawnParticles(PARTICLE_FLAME);
//		break;
//	case INST_SET_LITERAL:
//		char code[] = { 'a','b','c','d','e','f' };
//		vm.interpret(code, sizeof(code) / sizeof(char));
//		int value = vm.getBytecode(3);
//		vm.push(value);
//		break;
//	case INST_SET_ADD:
//		int b = vm.pop();
//		int a = vm.pop();
//		vm.push(a + b);
//		break;
//	default:
//		break;
//	}
//
//}
//
//void VM::push(int value)
//{
//	assert(stackSize_ < MAX_STACK);
//	stack_[stackSize_++] = value;
//}
//
//int VM::pop()
//{
//	assert(stackSize_ > 0);
//	return stack_[--stackSize_];
//}
