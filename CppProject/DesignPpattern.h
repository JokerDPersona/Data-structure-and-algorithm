//#pragma once
//#ifndef _DESIGN_PATTEN_
//#include<iostream>
////#define FibT(n)Fib<n>::Val
//#define FactT(n)Fact<n>::Val
//using namespace std;
//class DesignPattern
//{
//public:
//	DesignPattern();
//	~DesignPattern();
//	unsigned RecursiveFib(unsigned n);
//};
//
////模板化阶乘
//template<unsigned N>struct Fact {
//	enum { Val = N * Fact<N - 1>::Val };
//};
//
////基本情况的模板特化
//template<>struct Fact<1> {
//	enum { Val = 1 };
//};
//
////template<unsigned N>struct Fib {
////	enum {
////		Val = Fib<N - 1>::Val + Fib<N - 2>::Val
////	};
////};
//
////template<>struct Fib<0> { enum { Val = 0 }; };
////template<>struct Fib<1> { enum { Val = 1 }; };
//
//class Actor {
//public:
//	Actor() :slapped_(false) {}
//	virtual ~Actor() {}
//	virtual void update() = 0;
//
//	void reset() { slapped_ = false; }
//	void slap() { slapped_ = true; }
//	bool wasSlapped() { return slapped_; }
//	void swap() {
//		currentSlapped_ = nextSlapped_;
//		nextSlapped_ = false;
//	}
//
//private:
//	bool slapped_;
//	bool currentSlapped_;
//	bool nextSlapped_;
//};
//
//class Stage {
//public:
//	void add(Actor* actor, int index) {
//		actors_[index] = actor;
//	}
//
//	void update() {
//		for (int i = 0; i < NUM_ACTORS; i++) {
//			actors_[i]->update();
//			//actors_[i]->reset();
//		}
//		for (int i = 0; i < NUM_ACTORS; i++) {
//			actors_[i]->swap();
//		}
//	}
//
//private:
//	static const int NUM_ACTORS = 3;
//	Actor* actors_[NUM_ACTORS];
//};
//
//class Comedian :public Actor {
//public:
//	void face(Actor* actor) { facing_ = actor; }
//	virtual void update() {
//		if (wasSlapped())facing_->slap();
//	}
//private:
//	Actor* facing_;
//};
//
//
//
//
//
//
//
//
//#endif // !_DESIGN_PATTEN_
//
//
