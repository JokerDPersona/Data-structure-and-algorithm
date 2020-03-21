//#pragma once
//#include <cassert>
//#ifndef _Expression_
//
////GOF设计模式，解释器模式(缺点是速度很慢，从每个指针遍历子表达式都会消耗大量内存。)
//class Expression
//{
//public:
//	virtual ~Expression() {}
//	virtual double evaluate() = 0;
//};
//
//class NumberExpression:public Expression
//{
//public:
//	NumberExpression(double value) :value_(value) {}
//	
//
//private:
//	double value_;
//};
//
//class AdditionExpression:public Expression
//{
//public:
//	AdditionExpression(Expression* left, Expression* right) :left_(left), right_(right) {}
//
//	virtual double evaluate() {
//		double left = left_->evaluate();
//		double right = right_->evaluate();
//
//		return left + right;
//	}
//
//private:
//	Expression* left_;
//	Expression* right_;
//};
//
//
//class VM {
//public:
//	VM() :stackSize_(0) {}
//	
//	void interpret(char bytecode[], int size) {
//		for (int i = 0; i < size; ++i) {
//			char instruction = bytecode[i];
//			switch (instruction)
//			{
//			default:
//				break;
//			}
//		}
//	}
//
//	char getBytecode(int index) {
//		return instruction[index];
//	}
//
//	void push(int value);
//	int pop();
//
//private:
//	static const int MAX_STACK = 128;
//	int stackSize_;
//	int stack_[MAX_STACK];
//	char instruction[];
//	
//
//	
//};
//
//
//#endif // !_Expression_
//
//
//
